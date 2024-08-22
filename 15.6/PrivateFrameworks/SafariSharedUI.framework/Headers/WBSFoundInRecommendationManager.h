// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSFOUNDINRECOMMENDATIONMANAGER_H
#define WBSFOUNDINRECOMMENDATIONMANAGER_H

@protocol SGSuggestionsServiceURLsProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSFoundInRecommendationManager : NSObject {
    NSObject<SGSuggestionsServiceURLsProtocol> *_suggestionsService;
    NSObject<OS_dispatch_queue> *_internalQueue;
    int _changeNotificationToken;
}




+(BOOL)isBundleIdentifierFromCalendar:(id)arg0 ;
+(BOOL)isBundleIdentifierFromMessages:(id)arg0 ;
+(NSUInteger)foundInSourceFromBundleIdentifier:(id)arg0 ;
+(id)_linkRecommendationsFromSGSuggestions:(id)arg0 contactStoreProvider:(id)arg1 ;
-(void)_createInternalQueueIfNecessary;
-(void)_recentURLRecommendationsWithCompletionHandler:(id)arg0 ;
-(void)beginListeningForURLSuggestionChanges;
-(void)recentRecommendationsWithCompletionHandler:(id)arg0 ;
-(void)stopListeningForURLSuggestionChanges;


@end


#endif