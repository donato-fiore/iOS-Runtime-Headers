// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUAUTODOWNLOADPOLICY_H
#define SUAUTODOWNLOADPOLICY_H



#import "SUDefaultDownloadPolicy.h"

@interface SUAutoDownloadPolicy : SUDefaultDownloadPolicy



-(BOOL)allowExpensiveNetwork;
-(BOOL)is5GDownloadAllowed;
-(BOOL)isDownloadAllowableForCellular;
-(BOOL)isPowerRequired;
-(NSUInteger)wifiOnlyPeriodInDays;
-(id)computAutoDownloadEndDateFromDate:(id)arg0 ;
-(id)computeTimeOfWifiOnlyPeriodEndFromDate:(id)arg0 ;
-(id)createSpaceOptions;
-(id)initWithDescriptor:(id)arg0 ;


@end


#endif