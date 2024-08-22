// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXADOPTIONTYPETOBUDGETMAPPER_H
#define ATXADOPTIONTYPETOBUDGETMAPPER_H


#import <Foundation/Foundation.h>

#import "ATXTimelineAbuseControlConfig.h"

@interface ATXAdoptionTypeToBudgetMapper : NSObject {
    ATXTimelineAbuseControlConfig *_abuseControlConfig;
}




-(NSInteger)durationLimitForAdoptionType:(NSUInteger)arg0 ;
-(NSInteger)hardQuotaForAdoptionType:(NSUInteger)arg0 ;
-(NSInteger)softQuotaForAdoptionType:(NSUInteger)arg0 ;
-(id)initWithAbuseControlConfig:(id)arg0 ;


@end


#endif