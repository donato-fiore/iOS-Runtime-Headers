// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMFLOGEVENTSESSIONMANAGER_H
#define HMFLOGEVENTSESSIONMANAGER_H

@class NSDictionary;
@protocol HMFLogEventSessionFactory;


#import "HMFObject.h"

@interface HMFLogEventSessionManager : HMFObject {
    id<HMFLogEventSessionFactory> *_sessionFactory;
    NSDictionary *_commonFields;
    os_unfair_lock_s _lock;
}




+(id)sharedManager;
-(id)sessionWithUUID:(id)arg0 serviceName:(id)arg1 uploadImmediately:(BOOL)arg2 ;
-(void)addCommonField:(id)arg0 withValue:(id)arg1 ;
-(void)removeCommonField:(id)arg0 ;
-(void)setSessionFactory:(id)arg0 ;
-(void)submitEventWithName:(id)arg0 serviceName:(id)arg1 payload:(id)arg2 ;
-(void)submitEventWithName:(id)arg0 serviceName:(id)arg1 uploadImmediately:(BOOL)arg2 payload:(id)arg3 ;


@end


#endif