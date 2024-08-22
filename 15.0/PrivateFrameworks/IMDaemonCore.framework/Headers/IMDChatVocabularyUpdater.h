// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDCHATVOCABULARYUPDATER_H
#define IMDCHATVOCABULARYUPDATER_H

@class INVocabulary;

#import <Foundation/Foundation.h>

#import "IMDChatRegistry.h"

@interface IMDChatVocabularyUpdater : NSObject

@property (retain, nonatomic) IMDChatRegistry *chatRegistry; // ivar: _chatRegistry
@property (nonatomic) BOOL haveDeferredUpdateRequest; // ivar: _haveDeferredUpdateRequest
@property (retain, nonatomic) INVocabulary *vocabulary; // ivar: _vocabulary


+(id)sharedInstance;
+(void)performInitialUpdateIfNeeded;
-(id)initWithChatRegistry:(id)arg0 vocabulary:(id)arg1 ;
-(void)_updateVocabularyExcludingChat:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)updateVocabularyForAddedChat:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateVocabularyForDeferredUpdateRequestIfNecessaryWithCompletionHandler:(id)arg0 ;
-(void)updateVocabularyForDeletedChat:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateVocabularyForRenamedChat:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif