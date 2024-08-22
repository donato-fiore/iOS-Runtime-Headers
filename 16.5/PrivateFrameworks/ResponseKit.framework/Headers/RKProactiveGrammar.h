// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RKPROACTIVEGRAMMAR_H
#define RKPROACTIVEGRAMMAR_H


#import <Foundation/Foundation.h>


@interface RKProactiveGrammar : NSObject



+(id)getEntities:(id)arg0 ;
+(id)getOTAPathForRKBundle:(id)arg0 ;
+(id)sharedManager;
-(*void)chineseTokenizer;
-(*void)getLanguageModel:(id)arg0 ;
-(id)copyAttributedTokenForText:(id)arg0 forLanguage:(id)arg1 ;
-(id)copyAttributedTokenForText:(id)arg0 forLanguageModel:(*void)arg1 withLanguageCode:(id)arg2 ;
-(id)getEquivalenceClass:(id)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif