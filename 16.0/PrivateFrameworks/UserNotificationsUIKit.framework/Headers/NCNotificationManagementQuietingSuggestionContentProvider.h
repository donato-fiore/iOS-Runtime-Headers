// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCNOTIFICATIONMANAGEMENTQUIETINGSUGGESTIONCONTENTPROVIDER_H
#define NCNOTIFICATIONMANAGEMENTQUIETINGSUGGESTIONCONTENTPROVIDER_H



#import "NCNotificationManagementSuggestionContentProvider.h"

@interface NCNotificationManagementQuietingSuggestionContentProvider : NCNotificationManagementSuggestionContentProvider



-(id)auxiliaryOptionActions;
-(id)initWithNotificationRequest:(id)arg0 bundleDisplayName:(id)arg1 managementDelegate:(id)arg2 suggestionDelegate:(id)arg3 ;
-(void)handleKeepAction:(id)arg0 ;


@end


#endif