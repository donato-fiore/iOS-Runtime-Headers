// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDUSERDATACONTROLLERTIMERCREATOR_H
#define HMDUSERDATACONTROLLERTIMERCREATOR_H

@protocol HMDUserDataControllerTimerCreator;

#import <Foundation/Foundation.h>


@interface HMDUserDataControllerTimerCreator : NSObject <HMDUserDataControllerTimerCreator>





-(id)createExponentialBackoffTimerForZoneFetch;


@end


#endif