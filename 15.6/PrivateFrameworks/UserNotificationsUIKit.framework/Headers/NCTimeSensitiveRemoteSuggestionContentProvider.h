// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCTIMESENSITIVEREMOTESUGGESTIONCONTENTPROVIDER_H
#define NCTIMESENSITIVEREMOTESUGGESTIONCONTENTPROVIDER_H



#import "NCRemoteSuggestionContentProvider.h"

@interface NCTimeSensitiveRemoteSuggestionContentProvider : NCRemoteSuggestionContentProvider



-(id)initWithNotificationRequest:(id)arg0 bundleDisplayName:(id)arg1 managementDelegate:(id)arg2 suggestionDelegate:(id)arg3 uuid:(id)arg4 ;
-(void)configureOptionButtons:(id)arg0 ;
-(void)handleLeaveOnButtonAction:(id)arg0 ;
-(void)handleTurnOffMenuButtonAction:(id)arg0 ;
-(void)logSuggestionEvent:(NSInteger)arg0 ;


@end


#endif