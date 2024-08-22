// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALNDEFAULTTRAVELADVISORYAUTHORITY_H
#define CALNDEFAULTTRAVELADVISORYAUTHORITY_H

@class NSString;
@protocol CALNTravelAdvisoryAuthority;

#import <Foundation/Foundation.h>


@interface CALNDefaultTravelAdvisoryAuthority : NSObject <CALNTravelAdvisoryAuthority>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat maximumAllowableTravelTime;
@property (readonly, nonatomic) CGFloat minimumAllowableTravelTime;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)doesHypothesisSatisfyMinimumAllowableTravelTime:(id)arg0 ;
-(BOOL)travelStateIndicatesTravelingTowardDestination:(NSInteger)arg0 ;


@end


#endif