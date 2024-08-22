// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DEDCLOUDKITCLIENT_H
#define DEDCLOUDKITCLIENT_H

@class CKContainer, NSMutableArray;
@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "DEDBugSession.h"
#import "DEDBugSessionConfiguration.h"

@interface DEDCloudKitClient : NSObject

@property (retain, nonatomic) DEDBugSession *bugSession; // ivar: _bugSession
@property (retain, nonatomic) DEDBugSessionConfiguration *bugSessionConfig; // ivar: _bugSessionConfig
@property (retain, nonatomic) CKContainer *container; // ivar: _container
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (retain, nonatomic) NSMutableArray *recordsQueue; // ivar: _recordsQueue


-(BOOL)stillHaveOperationsInQueue;
-(id)initWithBugSession:(id)arg0 configuration:(id)arg1 ;
-(void)addRawRecordToQueueFromModel:(id)arg0 ;
// -(void)executeOperationsAtomicallyWithProgressHandler:(id)arg0 completionHandler:(unk)arg1 finalHandler:(id)arg2  ;
// -(void)executeRecord:(id)arg0 atomicallyWithProgressHandler:(id)arg1 completionHandler:(unk)arg2 finalHandler:(id)arg3  ;
-(void)flushQueue;


@end


#endif