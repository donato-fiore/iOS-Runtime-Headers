// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCSUPPORTEDCOUNTRYNETWORKREACHABILITYREQUIREMENT_H
#define FCSUPPORTEDCOUNTRYNETWORKREACHABILITYREQUIREMENT_H

@class NSString;
@protocol FCNetworkReachabilityRequirement, FCNetworkReachabilityRequirementObserving;

#import <Foundation/Foundation.h>


@interface FCSupportedCountryNetworkReachabilityRequirement : NSObject <FCNetworkReachabilityRequirement>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<FCNetworkReachabilityRequirementObserving> *observer; // ivar: observer
@property (readonly, nonatomic) NSInteger offlineReason;
@property (nonatomic, getter=isSatisfied) BOOL satisfied; // ivar: _satisfied
@property (readonly) Class superclass;


-(id)init;
-(void)_update;


@end


#endif