// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EARSPEECHRECOGNITION_H
#define _EARSPEECHRECOGNITION_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _EARSpeechRecognition : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSArray *interpretationIndices; // ivar: _interpretationIndices
@property (copy, nonatomic) NSArray *tokenSausage; // ivar: _tokenSausage


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithNBestList:(*void)arg0 useHatText:(BOOL)arg1 ;
-(id)_initWithTokenPhraseChoiceList:(*void)arg0 ;
-(id)_initWithTokenSausage:(id)arg0 interpretationIndices:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)granularizedRecognition;
-(id)nBest;
-(id)oneBest;
-(struct pair<std::vector<std::vector<unsigned int>>, std::vector<std::vector<std::vector<quasar::Token>>>> )_tokenPhraseChoiceList;


@end


#endif