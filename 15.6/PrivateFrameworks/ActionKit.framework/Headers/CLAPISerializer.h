// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLAPISERIALIZER_H
#define CLAPISERIALIZER_H


#import <Foundation/Foundation.h>


@interface CLAPISerializer : NSObject



+(id)JSONDataFromArray:(id)arg0 ;
+(id)JSONDataFromDictionary:(id)arg0 ;
+(id)accountWithEmail:(id)arg0 password:(id)arg1 acceptTerms:(BOOL)arg2 ;
+(id)bookmarkWithURL:(id)arg0 name:(id)arg1 ;
+(id)bookmarkWithURL:(id)arg0 name:(id)arg1 private:(BOOL)arg2 ;
+(id)itemForRestore;
+(id)itemWithName:(id)arg0 ;
+(id)itemWithPrivate:(BOOL)arg0 ;
+(id)receiptWithBase64String:(id)arg0 ;
+(id)webItemTypeStringForType:(NSInteger)arg0 ;


@end


#endif