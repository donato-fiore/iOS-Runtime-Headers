// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCSOLCONFIGURATION_H
#define FCSOLCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface FCSolConfiguration : NSObject

@property (readonly, nonatomic) NSInteger heuristicOption; // ivar: _heuristicOption
@property (readonly, nonatomic) NSUInteger heuristicSampleSize; // ivar: _heuristicSampleSize
@property (readonly, nonatomic) NSUInteger maxArticleCombos; // ivar: _maxArticleCombos
@property (readonly, nonatomic) CGFloat optionalTagSpecificityScore; // ivar: _optionalTagSpecificityScore
@property (readonly, nonatomic) CGFloat searchBranchDecay; // ivar: _searchBranchDecay
@property (readonly, nonatomic) NSUInteger searchBranchMultiplier; // ivar: _searchBranchMultiplier
@property (readonly, nonatomic) CGFloat searchTimeLimit; // ivar: _searchTimeLimit
@property (readonly, nonatomic) CGFloat tagArticleScoreCoeff; // ivar: _tagArticleScoreCoeff
@property (readonly, nonatomic) CGFloat tagAutoFavoritedCoeff; // ivar: _tagAutoFavoritedCoeff
@property (readonly, nonatomic) CGFloat tagFavoritedCoeff; // ivar: _tagFavoritedCoeff
@property (readonly, nonatomic) CGFloat tagGroupableCoeff; // ivar: _tagGroupableCoeff
@property (readonly, nonatomic) CGFloat tagPersonalizationCoeff; // ivar: _tagPersonalizationCoeff
@property (readonly, nonatomic) CGFloat tagSizeCoeff; // ivar: _tagSizeCoeff
@property (readonly, nonatomic) CGFloat tagSpecificityCoeff; // ivar: _tagSpecificityCoeff


+(id)configurationWithTreatment:(id)arg0 deviceIsiPad:(BOOL)arg1 ;
-(id)initWithHeuristicSampleSize:(NSUInteger)arg0 searchBranchMultiplier:(NSUInteger)arg1 searchBranchDecay:(CGFloat)arg2 searchTimeLimit:(CGFloat)arg3 tagSizeCoeff:(CGFloat)arg4 tagFavoritedCoeff:(CGFloat)arg5 tagAutoFavoritedCoeff:(CGFloat)arg6 tagGroupableCoeff:(CGFloat)arg7 tagArticleScoreCoeff:(CGFloat)arg8 tagPersonalizationCoeff:(CGFloat)arg9 tagSpecificityCoeff:(CGFloat)arg10 optionalTagSpecificityScore:(CGFloat)arg11 heuristicOption:(NSInteger)arg12 ;


@end


#endif