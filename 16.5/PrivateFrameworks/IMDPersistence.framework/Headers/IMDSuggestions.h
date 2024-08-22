// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDSUGGESTIONS_H
#define IMDSUGGESTIONS_H

@protocol SGMessagesSuggestionsServiceDelegate, NSObject><SGSuggestionsServiceMessagesProtocol;

#import <Foundation/Foundation.h>


@interface IMDSuggestions : NSObject <SGMessagesSuggestionsServiceDelegate>



@property (retain) NSObject<NSObject><SGSuggestionsServiceMessagesProtocol> *sgService; // ivar: _sgService


-(id)init;
-(id)suggestionsService:(id)arg0 needsContextForConversationIdentifier:(id)arg1 numberOfMessagesNeeded:(NSUInteger)arg2 ;
-(void)suggestionsFromMessage:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;


@end


#endif