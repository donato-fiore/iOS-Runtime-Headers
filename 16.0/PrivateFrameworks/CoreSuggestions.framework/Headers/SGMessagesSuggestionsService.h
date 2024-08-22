// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGMESSAGESSUGGESTIONSSERVICE_H
#define SGMESSAGESSUGGESTIONSSERVICE_H

@class NSMutableDictionary;
@protocol SGSuggestionsServiceMessagesProtocol, SGMessagesSuggestionsServiceDelegate;


#import "SGSuggestionsService.h"
#import "SGMessagesDaemonConnection.h"

@interface SGMessagesSuggestionsService : SGSuggestionsService <SGSuggestionsServiceMessagesProtocol>



@property (weak) NSObject<SGMessagesSuggestionsServiceDelegate> *delegate; // ivar: _delegate
@property (retain) SGMessagesDaemonConnection *messagesDaemonConnection; // ivar: _messagesDaemonConnection
@property (retain) NSMutableDictionary *previousMessages; // ivar: _previousMessages


-(BOOL)isMessageEligibleForSuggestions:(id)arg0 ;
-(id)init;
-(void)harvestedSuggestionsFromMessage:(id)arg0 bundleIdentifier:(id)arg1 options:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)harvestedSuggestionsFromMessage:(id)arg0 bundleIdentifier:(id)arg1 options:(NSUInteger)arg2 withCompletion:(id)arg3 ;
-(void)harvestedSuggestionsFromMessages:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)sendContextForMessage:(id)arg0 ;
-(void)setManagerForTesting:(id)arg0 ;
-(void)setupContextIfNeededForConversation:(id)arg0 ;
-(void)suggestionsFromMessage:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;


@end


#endif