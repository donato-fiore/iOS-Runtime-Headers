// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCMODECONFIGURATIONREMOTESUGGESTIONCONTENTPROVIDER_H
#define NCMODECONFIGURATIONREMOTESUGGESTIONCONTENTPROVIDER_H

@class DNDModeConfiguration;


#import "NCRemoteSuggestionContentProvider.h"

@interface NCModeConfigurationRemoteSuggestionContentProvider : NCRemoteSuggestionContentProvider {
    NSUInteger _suggestionType;
    NSUInteger _scope;
    DNDModeConfiguration *_modeConfiguration;
}




-(id)initWithNotificationRequest:(id)arg0 bundleDisplayName:(id)arg1 managementDelegate:(id)arg2 suggestionDelegate:(id)arg3 uuid:(id)arg4 suggestionType:(NSUInteger)arg5 scope:(NSUInteger)arg6 modeConfiguration:(id)arg7 ;
-(void)configureOptionButtons:(id)arg0 ;
-(void)handleAcceptAction:(id)arg0 ;
-(void)handleRejectAction:(id)arg0 ;


@end


#endif