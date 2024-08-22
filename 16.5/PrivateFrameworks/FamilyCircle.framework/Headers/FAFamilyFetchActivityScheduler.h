// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FAFAMILYFETCHACTIVITYSCHEDULER_H
#define FAFAMILYFETCHACTIVITYSCHEDULER_H


#import <Foundation/Foundation.h>


@interface FAFamilyFetchActivityScheduler : NSObject {
    ? activity;
    ? $__lazy_storage_$_activityProvider;
    ? familyCircleFetchBlock;
    ? cacheLoadBlock;
}




-(id)init;
// -(id)initWithFamilyCircleFetchBlock:(id)arg0 cacheLoadBlock:(unk)arg1  ;
-(void)reschedule;


@end


#endif