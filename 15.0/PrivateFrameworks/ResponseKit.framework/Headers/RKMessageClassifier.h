// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RKMESSAGECLASSIFIER_H
#define RKMESSAGECLASSIFIER_H


#import <Foundation/Foundation.h>


@interface RKMessageClassifier : NSObject



+(BOOL)questionClassification:(id)arg0 withLanguageIdentifier:(id)arg1 ;
+(id)messageClassification:(id)arg0 withLanguageIdentifier:(id)arg1 ;
+(id)messageClassification:(id)arg0 withLanguageIdentifier:(id)arg1 conversationTurns:(id)arg2 ;
+(id)preferredLanguages;
+(void)setPreferredLanguages:(id)arg0 ;


@end


#endif