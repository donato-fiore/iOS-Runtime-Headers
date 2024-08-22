// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCPERSONALIZATIONCOHORTCONFIG_H
#define FCPERSONALIZATIONCOHORTCONFIG_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FCPersonalizationCohortConfig : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL considerPublisherTopicAggregates; // ivar: _considerPublisherTopicAggregates
@property (nonatomic) CGFloat democratizationFactor; // ivar: _democratizationFactor
@property (nonatomic) CGFloat dilutionFactor; // ivar: _dilutionFactor
@property (nonatomic) BOOL enableUndampening; // ivar: _enableUndampening
@property (nonatomic) CGFloat exponentialFavoritedBoost; // ivar: _exponentialFavoritedBoost
@property (nonatomic) CGFloat favoritedBoost; // ivar: _favoritedBoost
@property (nonatomic) CGFloat globalWeight; // ivar: _globalWeight
@property (nonatomic) CGFloat globalWeightHalfLife; // ivar: _globalWeightHalfLife
@property (nonatomic) CGFloat globalWeightInitialMultiplier; // ivar: _globalWeightInitialMultiplier
@property (nonatomic) CGFloat paddingFactor; // ivar: _paddingFactor
@property (nonatomic) CGFloat postBaselineCurvature; // ivar: _postBaselineCurvature
@property (nonatomic) CGFloat preBaselineCurvature; // ivar: _preBaselineCurvature
@property (nonatomic) BOOL undampenOnlyAboveBaselineMembership; // ivar: _undampenOnlyAboveBaselineMembership
@property (nonatomic) BOOL useExponentialFavoritedBoost; // ivar: _useExponentialFavoritedBoost
@property (nonatomic) BOOL useRelativePersonalizationValue; // ivar: _useRelativePersonalizationValue
@property (nonatomic) CGFloat userBaseline; // ivar: _userBaseline


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfigDictionary:(id)arg0 ;
-(id)initWithConsiderPublisherTopicAggregates:(BOOL)arg0 democratizationFactor:(CGFloat)arg1 dilutionFactor:(CGFloat)arg2 enableUndampening:(BOOL)arg3 favoritedBoost:(CGFloat)arg4 exponentialFavoritedBoost:(CGFloat)arg5 globalWeight:(CGFloat)arg6 globalWeightHalfLife:(CGFloat)arg7 globalWeightInitialMultiplier:(CGFloat)arg8 paddingFactor:(CGFloat)arg9 preBaselineCurvature:(CGFloat)arg10 postBaselineCurvature:(CGFloat)arg11 undampenOnlyAboveBaselineMembership:(BOOL)arg12 userBaseline:(CGFloat)arg13 useRelativePersonalizationValue:(BOOL)arg14 useExponentialFavoritedBoost:(BOOL)arg15 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif