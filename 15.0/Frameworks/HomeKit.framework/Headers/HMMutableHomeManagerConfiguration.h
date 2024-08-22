// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMMUTABLEHOMEMANAGERCONFIGURATION_H
#define HMMUTABLEHOMEMANAGERCONFIGURATION_H

@class NSOperationQueue, HMFLocationAuthorization;
@protocol HMFLocking;


#import "HMHomeManagerConfiguration.h"

@interface HMMutableHomeManagerConfiguration : HMHomeManagerConfiguration {
    id<HMFLocking> *_lock;
}


@property (getter=isAdaptive) BOOL adaptive;
@property NSUInteger cachePolicy;
@property (retain) NSOperationQueue *delegateQueue;
@property (getter=isDiscretionary) BOOL discretionary;
@property (retain) HMFLocationAuthorization *locationAuthorization;
@property NSUInteger options;


-(BOOL)shouldConnect;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithOptions:(NSUInteger)arg0 cachePolicy:(NSUInteger)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif