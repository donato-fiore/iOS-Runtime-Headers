// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLBACKGROUNDRUNNER_H
#define MLBACKGROUNDRUNNER_H

@class _DASActivity, NSString;
@protocol _DASExtensionRunner, NSObject, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MLBackgroundTask.h"

@interface MLBackgroundRunner : NSObject <_DASExtensionRunner>



@property (retain, nonatomic) _DASActivity *activity; // ivar: _activity
@property (retain, nonatomic) NSObject<NSObject> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL shouldStop; // ivar: _shouldStop
@property (readonly) Class superclass;
@property (retain, nonatomic) MLBackgroundTask *task; // ivar: _task
@property (retain) NSObject<OS_dispatch_queue> *watchdogQueue; // ivar: _watchdogQueue


-(BOOL)createExtensionDataSourceWithInfoKey:(id)arg0 conformingToProtocol:(id)arg1 ;
-(BOOL)prepareForActivity:(id)arg0 ;
-(id)init;
-(unsigned char)start;
-(void)stop;


@end


#endif