// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCNOTIFICATIONAPPSSUMMARYCONTENTPROVIDER_H
#define NCNOTIFICATIONAPPSSUMMARYCONTENTPROVIDER_H



#import "NCNotificationSummaryContentProvider.h"

@interface NCNotificationAppsSummaryContentProvider : NCNotificationSummaryContentProvider



-(BOOL)isIconViewLeading;
-(id)_summaryIconViewForNotificationRequest:(id)arg0 ;
-(id)_summaryStringForNotificationRequest:(id)arg0 ;
-(id)summaryTitle;


@end


#endif