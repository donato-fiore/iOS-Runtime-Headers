// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RERELEVANCEENGINELOGGER_H
#define RERELEVANCEENGINELOGGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "REObserverStore.h"

@interface RERelevanceEngineLogger : NSObject {
    REObserverStore *_loggables;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)init;
-(void)addLoggable:(id)arg0 ;
// -(void)collectLogs:(id)arg0 completion:(unk)arg1  ;
-(void)enumerateLoggables:(id)arg0 ;
-(void)removeLoggable:(id)arg0 ;


@end


#endif