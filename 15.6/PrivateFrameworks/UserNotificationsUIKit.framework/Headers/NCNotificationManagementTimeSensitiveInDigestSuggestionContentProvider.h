// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCNOTIFICATIONMANAGEMENTTIMESENSITIVEINDIGESTSUGGESTIONCONTENTPROVIDER_H
#define NCNOTIFICATIONMANAGEMENTTIMESENSITIVEINDIGESTSUGGESTIONCONTENTPROVIDER_H



#import "NCNotificationManagementSuggestionContentProvider.h"

@interface NCNotificationManagementTimeSensitiveInDigestSuggestionContentProvider : NCNotificationManagementSuggestionContentProvider



-(id)initWithNotificationRequest:(id)arg0 bundleDisplayName:(id)arg1 managementDelegate:(id)arg2 suggestionDelegate:(id)arg3 ;
-(void)configureOptionButtons:(id)arg0 ;
-(void)handleLeaveOnAction:(id)arg0 ;
-(void)handleOffAction:(id)arg0 ;


@end


#endif