// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFUPDATELOGGERDEBUGGINGCONTROLLER_H
#define HFUPDATELOGGERDEBUGGINGCONTROLLER_H

@class NSMutableDictionary, NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HFUpdateLoggerDebuggingController : NSObject

@property (retain, nonatomic) NSMutableDictionary *_queue_historyStringsKeyedByLogger; // ivar: __queue_historyStringsKeyedByLogger
@property (nonatomic) NSInteger _queue_iteration; // ivar: __queue_iteration
@property (retain, nonatomic) NSHashTable *_queue_runningLoggers; // ivar: __queue_runningLoggers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)_sharedInstance;
-(id)_historyStrings;
-(id)_runningLoggerStrings;
-(id)_runningLoggers;
-(id)init;
-(void)_addRunningLogger:(id)arg0 ;
-(void)_removeRunningLogger:(id)arg0 ;


@end


#endif