// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCNOTIFICATIONMANAGEMENTCURATEDCONTACTMATCHSUGGESTIONCONTENTPROVIDER_H
#define NCNOTIFICATIONMANAGEMENTCURATEDCONTACTMATCHSUGGESTIONCONTENTPROVIDER_H



#import "NCNotificationManagementSuggestionContentProvider.h"

@interface NCNotificationManagementCuratedContactMatchSuggestionContentProvider : NCNotificationManagementSuggestionContentProvider



-(id)auxiliaryOptionActions;
-(id)initWithNotificationRequest:(id)arg0 bundleDisplayName:(id)arg1 managementDelegate:(id)arg2 suggestionDelegate:(id)arg3 contactName:(id)arg4 ;
-(void)handleConfirmAction:(id)arg0 ;
-(void)handleRejectAction:(id)arg0 ;


@end


#endif