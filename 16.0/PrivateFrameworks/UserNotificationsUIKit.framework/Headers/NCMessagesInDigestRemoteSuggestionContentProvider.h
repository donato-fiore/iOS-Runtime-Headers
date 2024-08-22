// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCMESSAGESINDIGESTREMOTESUGGESTIONCONTENTPROVIDER_H
#define NCMESSAGESINDIGESTREMOTESUGGESTIONCONTENTPROVIDER_H



#import "NCRemoteSuggestionContentProvider.h"

@interface NCMessagesInDigestRemoteSuggestionContentProvider : NCRemoteSuggestionContentProvider



-(id)auxiliaryOptionActions;
-(id)initWithNotificationRequest:(id)arg0 bundleDisplayName:(id)arg1 managementDelegate:(id)arg2 suggestionDelegate:(id)arg3 uuid:(id)arg4 ;
-(void)handleLeaveOnButtonAction:(id)arg0 ;
-(void)handleTurnOffMenuButtonAction:(id)arg0 ;


@end


#endif