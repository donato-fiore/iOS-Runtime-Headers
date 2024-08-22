// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKNANOREPLYGENERATOR_H
#define CKNANOREPLYGENERATOR_H


#import <Foundation/Foundation.h>


@interface CKNanoReplyGenerator : NSObject



+(id)repliesForMessage:(id)arg0 senderMessages:(id)arg1 recipients:(id)arg2 time:(id)arg3 languageCode:(id)arg4 languageCodeChangeDate:(id)arg5 ;
+(id)repliesForMessages:(id)arg0 senderMessages:(id)arg1 recipients:(id)arg2 languageCode:(id)arg3 languageCodeChangeDate:(id)arg4 ;
+(void)_contextualRepliesForMessage:(id)arg0 senderMessages:(id)arg1 recipients:(id)arg2 time:(id)arg3 languageCode:(id)arg4 languageCodeChangeDate:(id)arg5 loadAsync:(BOOL)arg6 includeDynamicSuggestions:(BOOL)arg7 completion:(id)arg8 ;
+(void)_contextualRepliesForMessages:(id)arg0 senderMessages:(id)arg1 recipients:(id)arg2 languageCode:(id)arg3 languageCodeChangeDate:(id)arg4 loadAsync:(BOOL)arg5 includeDynamicSuggestions:(BOOL)arg6 completion:(id)arg7 ;
+(void)_repliesForMessage:(id)arg0 senderMessages:(id)arg1 recipients:(id)arg2 time:(id)arg3 languageCode:(id)arg4 languageCodeChangeDate:(id)arg5 loadAsync:(BOOL)arg6 completion:(id)arg7 ;
+(void)_repliesForMessages:(id)arg0 senderMessages:(id)arg1 recipients:(id)arg2 languageCode:(id)arg3 languageCodeChangeDate:(id)arg4 loadAsync:(BOOL)arg5 completion:(id)arg6 ;
+(void)primeResponseKitIfNeeded;
+(void)repliesForMessage:(id)arg0 senderMessages:(id)arg1 recipients:(id)arg2 time:(id)arg3 languageCode:(id)arg4 languageCodeChangeDate:(id)arg5 completion:(id)arg6 ;
+(void)repliesForMessages:(id)arg0 senderMessages:(id)arg1 recipients:(id)arg2 languageCode:(id)arg3 languageCodeChangeDate:(id)arg4 completion:(id)arg5 ;


@end


#endif