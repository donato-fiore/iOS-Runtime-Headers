// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCMUTINGREMOTESUGGESTIONCONTENTPROVIDER_H
#define NCMUTINGREMOTESUGGESTIONCONTENTPROVIDER_H



#import "NCRemoteSuggestionContentProvider.h"

@interface NCMutingRemoteSuggestionContentProvider : NCRemoteSuggestionContentProvider {
    NSUInteger _scope;
}




-(id)auxiliaryOptionActions;
-(id)initWithNotificationRequest:(id)arg0 bundleDisplayName:(id)arg1 managementDelegate:(id)arg2 suggestionDelegate:(id)arg3 uuid:(id)arg4 scope:(NSUInteger)arg5 ;
-(void)handleAcceptAction:(id)arg0 ;
-(void)handleRejectAction:(id)arg0 ;
-(void)logSuggestionEvent:(NSInteger)arg0 ;


@end


#endif