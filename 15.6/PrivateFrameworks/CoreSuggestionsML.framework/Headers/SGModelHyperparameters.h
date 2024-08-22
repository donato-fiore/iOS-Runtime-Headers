// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGMODELHYPERPARAMETERS_H
#define SGMODELHYPERPARAMETERS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SGModelHyperparameters : NSObject

@property (readonly, nonatomic) _NSRange characterNGramRange; // ivar: _characterNGramRange
@property (readonly, nonatomic) NSUInteger extraIdOptions; // ivar: _extraIdOptions
@property (readonly, copy, nonatomic) NSString *featuresModelId; // ivar: _featuresModelId
@property (readonly, copy, nonatomic) NSString *featuresVersion; // ivar: _featuresVersion
@property (readonly, nonatomic) NSUInteger idVectorLength; // ivar: _idVectorLength
@property (readonly, nonatomic) _NSRange tokenNGramRange; // ivar: _tokenNGramRange
@property (readonly, nonatomic) NSUInteger vectorLength; // ivar: _vectorLength
@property (readonly, nonatomic) NSInteger vectorNormalization; // ivar: _vectorNormalization
@property (readonly, nonatomic) NSUInteger vectorizerStrategy; // ivar: _vectorizerStrategy


+(NSUInteger)strategyForString:(id)arg0 modelTypeName:(id)arg1 ;
-(id)initWithDictionary:(id)arg0 modelTypeName:(id)arg1 ;
-(id)sessionDescriptorForLanguage:(id)arg0 ;


@end


#endif