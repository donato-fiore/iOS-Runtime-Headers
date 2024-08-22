// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMMANAGER_H
#define BMMANAGER_H


#import <Foundation/Foundation.h>

#import "BMCollector.h"

@interface BMManager : NSObject {
    ? configuration;
    ? shouldScheduleUpdates;
    ? managerQueue;
    ? scheduledUpdateWorkItem;
    ? $__lazy_storage_$_localStorage;
}


@property (nonatomic, readonly) BMCollector *collector; // ivar: collector


-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(void)dealloc;
-(void)onDidReceiveAppDidBackground:(id)arg0 ;
-(void)submitEvent:(id)arg0 ;


@end


#endif