// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TCGECMLMMODEL_H
#define TCGECMLMMODEL_H

@class NSDictionary;
@protocol TCGECModel;

#import <Foundation/Foundation.h>


@interface TCGECMLMModel : NSObject <TCGECModel>

 {
    *CoreLanguageModelWithState _maskedLM;
    NSUInteger _lmVocabSize;
    NSDictionary *_acceptableCorrections;
}




-(BOOL)loadCorrectionsFromURL:(id)arg0 ;
-(id)initWithModelPath:(id)arg0 OTABundlePath:(id)arg1 options:(id)arg2 ;
-(void)dealloc;
-(void)enumerateIssuesForSentence:(id)arg0 withBlock:(id)arg1 ;


@end


#endif