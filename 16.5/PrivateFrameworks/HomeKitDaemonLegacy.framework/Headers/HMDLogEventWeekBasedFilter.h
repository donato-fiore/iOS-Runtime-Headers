// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDLOGEVENTWEEKBASEDFILTER_H
#define HMDLOGEVENTWEEKBASEDFILTER_H

@class NSString;
@protocol HMDLogEventFiltering;

#import <Foundation/Foundation.h>

#import "HMDMetricsDateProvider.h"

@interface HMDLogEventWeekBasedFilter : NSObject <HMDLogEventFiltering>



@property (readonly, nonatomic) HMDMetricsDateProvider *dateProvider; // ivar: _dateProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEventInSample:(id)arg0 ;
-(NSUInteger)resultHashWithEvent:(id)arg0 ;
-(id)initWithDateProvider:(id)arg0 ;


@end


#endif