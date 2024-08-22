// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUDEFAULTWIFIONLYDOWNLOADPOLICY_H
#define SUDEFAULTWIFIONLYDOWNLOADPOLICY_H



#import "SUDefaultDownloadPolicy.h"

@interface SUDefaultWiFiOnlyDownloadPolicy : SUDefaultDownloadPolicy



+(NSUInteger)wifiOnlyPeriodInDaysForUpdate:(id)arg0 ;
-(BOOL)allowExpensiveNetwork;
-(BOOL)isDownloadAllowableForCellular;
-(id)initWithDescriptor:(id)arg0 ;


@end


#endif