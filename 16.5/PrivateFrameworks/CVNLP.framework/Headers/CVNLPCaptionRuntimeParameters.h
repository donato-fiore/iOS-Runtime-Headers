// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CVNLPCAPTIONRUNTIMEPARAMETERS_H
#define CVNLPCAPTIONRUNTIMEPARAMETERS_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface CVNLPCaptionRuntimeParameters : NSObject

@property (retain, nonatomic) NSArray *blackListRules; // ivar: _blackListRules
@property (nonatomic) CGFloat captionModelLengthNormalizationFactor; // ivar: _captionModelLengthNormalizationFactor
@property (nonatomic) CGFloat captionModelMinimumConfidence; // ivar: _captionModelMinimumConfidence
@property (retain, nonatomic) NSDictionary *classifierRevisions; // ivar: _classifierRevisions
@property (retain, nonatomic) NSArray *excludeGenderReplacements; // ivar: _excludeGenderReplacements
@property (nonatomic) int excludeGenderStrategy; // ivar: _excludeGenderStrategy
@property (retain, nonatomic) NSArray *excludeGenderTriggers; // ivar: _excludeGenderTriggers
@property (nonatomic) int genderOption; // ivar: _genderOption
@property (retain, nonatomic) NSArray *genderedTokens; // ivar: _genderedTokens
@property (retain, nonatomic) NSArray *replacements; // ivar: _replacements
@property (retain, nonatomic) NSDictionary *sensitiveImageParameters; // ivar: _sensitiveImageParameters


-(id)initWithOptions:(id)arg0 ;
-(void)_loadRuntimeParameters:(id)arg0 ;


@end


#endif