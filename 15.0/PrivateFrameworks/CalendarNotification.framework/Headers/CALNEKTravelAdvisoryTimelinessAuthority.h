// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALNEKTRAVELADVISORYTIMELINESSAUTHORITY_H
#define CALNEKTRAVELADVISORYTIMELINESSAUTHORITY_H

@class NSString, EKTravelAdvisoryTimelinessAuthority;
@protocol CALNTravelAdvisoryTimelinessAuthority;

#import <Foundation/Foundation.h>


@interface CALNEKTravelAdvisoryTimelinessAuthority : NSObject <CALNTravelAdvisoryTimelinessAuthority>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) EKTravelAdvisoryTimelinessAuthority *travelAdvisoryTimelinessAuthority; // ivar: _travelAdvisoryTimelinessAuthority


-(NSUInteger)periodForHypothesis:(id)arg0 ;
-(id)initWithTravelAdvisoryTimelinessAuthority:(id)arg0 ;
-(id)startOfLeaveNowPeriodForHypothesis:(id)arg0 ;
-(id)startOfRunningLatePeriodForHypothesis:(id)arg0 ;


@end


#endif