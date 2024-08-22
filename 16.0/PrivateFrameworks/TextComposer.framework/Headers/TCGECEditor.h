// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TCGECEDITOR_H
#define TCGECEDITOR_H

@class NSMutableDictionary, NSMutableArray;
@protocol TCPostEditing, TCGECModel;

#import <Foundation/Foundation.h>


@interface TCGECEditor : NSObject <TCPostEditing>

 {
    NSObject<TCGECModel> *_model;
    NSMutableDictionary *_cachedGrammarDetailsDictionary;
    NSMutableArray *_cachedSentenceArray;
}




-(id)OTABundlePath;
-(id)computedGrammarDetailsForSentence:(id)arg0 locale:(id)arg1 ;
-(id)grammarDetailsForSentence:(id)arg0 locale:(id)arg1 ;
-(id)initWithOptions:(id)arg0 ;
-(void)checkSentence:(id)arg0 locale:(id)arg1 offset:(NSUInteger)arg2 options:(id)arg3 mutableResults:(id)arg4 ;
-(void)checkString:(id)arg0 range:(struct _NSRange )arg1 tagger:(id)arg2 offset:(NSUInteger)arg3 options:(id)arg4 mutableResults:(id)arg5 ;


@end


#endif