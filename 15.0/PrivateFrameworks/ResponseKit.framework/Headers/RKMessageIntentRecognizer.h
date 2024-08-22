// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RKMESSAGEINTENTRECOGNIZER_H
#define RKMESSAGEINTENTRECOGNIZER_H


#import <Foundation/Foundation.h>


@interface RKMessageIntentRecognizer : NSObject



+(id)getRangesOfKeywords:(id)arg0 forMessage:(id)arg1 ;
+(id)sharedManager;
-(*void)getMessageIntentRecognizer:(id)arg0 ;
-(id)copyAttributedTokensForMessage:(id)arg0 conversationTurns:(id)arg1 metadata:(id)arg2 languageID:(id)arg3 ;
-(id)init;
-(void)dealloc;


@end


#endif