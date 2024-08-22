// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UARPANALYTICSUPDATEFIRMWAREMANAGER_H
#define UARPANALYTICSUPDATEFIRMWAREMANAGER_H

@class NSMutableArray;
@protocol OS_os_log, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "UARPController.h"

@interface UARPAnalyticsUpdateFirmwareManager : NSObject {
    UARPController *_controller;
    NSMutableArray *_stateArray;
    NSObject<OS_os_log> *_log;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_purgeTimer;
}




-(id)description;
-(id)initWithController:(id)arg0 queue:(id)arg1 ;
-(id)updateStateForAccessoryID:(id)arg0 assetID:(id)arg1 ;
-(id)updateStatesForAccessoryID:(id)arg0 ;
-(void)configurePurgeTimer;
-(void)dealloc;
-(void)purgeStaleUpdateStateRecords;
-(void)setAccessoryIDUnreachable:(id)arg0 ;
-(void)stagingCompleteForAccessoryID:(id)arg0 assetID:(id)arg1 status:(NSUInteger)arg2 ;
-(void)stagingStartedForAccessoryID:(id)arg0 assetID:(id)arg1 userIntent:(BOOL)arg2 ;
-(void)updateComplete:(id)arg0 ;


@end


#endif