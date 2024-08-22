// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKNANOREPLYGENERATOR_H
#define CKNANOREPLYGENERATOR_H


#import <Foundation/Foundation.h>


@interface CKNanoReplyGenerator : NSObject



+(id)repliesForMessage:(id)arg0 senderMessages:(id)arg1 recipients:(id)arg2 time:(id)arg3 languageCode:(id)arg4 languageCodeChangeDate:(id)arg5 ;
+(void)_contextualRepliesForMessage:(id)arg0 senderMessages:(id)arg1 recipients:(id)arg2 time:(id)arg3 languageCode:(id)arg4 languageCodeChangeDate:(id)arg5 loadAsync:(BOOL)arg6 includeDynamicSuggestions:(BOOL)arg7 completion:(id)arg8 ;
+(void)_repliesForMessage:(id)arg0 senderMessages:(id)arg1 recipients:(id)arg2 time:(id)arg3 languageCode:(id)arg4 languageCodeChangeDate:(id)arg5 loadAsync:(BOOL)arg6 completion:(id)arg7 ;
+(void)primeResponseKitIfNeeded;
+(void)repliesForMessage:(id)arg0 senderMessages:(id)arg1 recipients:(id)arg2 time:(id)arg3 languageCode:(id)arg4 languageCodeChangeDate:(id)arg5 completion:(id)arg6 ;


@end


#endif