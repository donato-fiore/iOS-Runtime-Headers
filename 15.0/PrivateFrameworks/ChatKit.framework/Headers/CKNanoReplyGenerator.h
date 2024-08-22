// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKNANOREPLYGENERATOR_H
#define CKNANOREPLYGENERATOR_H


#import <Foundation/Foundation.h>


@interface CKNanoReplyGenerator : NSObject



+(id)_cannedRepliesForLanguage:(id)arg0 ;
+(id)repliesForMessage:(id)arg0 recipients:(id)arg1 time:(id)arg2 languageCode:(id)arg3 ;
+(void)_contextualRepliesForMessage:(id)arg0 recipients:(id)arg1 time:(id)arg2 languageCode:(id)arg3 loadAsync:(BOOL)arg4 completion:(id)arg5 ;
+(void)_repliesForMessage:(id)arg0 recipients:(id)arg1 time:(id)arg2 languageCode:(id)arg3 loadAsync:(BOOL)arg4 completion:(id)arg5 ;
+(void)primeResponseKitIfNeeded;
+(void)repliesForMessage:(id)arg0 recipients:(id)arg1 time:(id)arg2 languageCode:(id)arg3 completion:(id)arg4 ;


@end


#endif