// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCPERSONALIZATIONTAGSCORINGCONFIG_H
#define FCPERSONALIZATIONTAGSCORINGCONFIG_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FCPersonalizationTagScoringConfig : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) CGFloat channelTopicMappingWeight; // ivar: _channelTopicMappingWeight
@property (nonatomic) CGFloat democratizationFactor; // ivar: _democratizationFactor
@property (nonatomic) CGFloat locationScoreDecayFactor; // ivar: _locationScoreDecayFactor
@property (nonatomic) CGFloat locationWeight; // ivar: _locationWeight
@property (nonatomic) CGFloat maxDistanceThreshold; // ivar: _maxDistanceThreshold
@property (nonatomic) NSInteger maxLocationsToConsider; // ivar: _maxLocationsToConsider
@property (nonatomic) CGFloat popularityMultiplierBoost; // ivar: _popularityMultiplierBoost
@property (nonatomic) CGFloat popularityMultiplierExponent; // ivar: _popularityMultiplierExponent
@property (nonatomic) CGFloat topicTopicMappingWeight; // ivar: _topicTopicMappingWeight
@property (nonatomic) CGFloat userMembershipWeight; // ivar: _userMembershipWeight


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithChannelTopicMappingWeight:(CGFloat)arg0 democratizationFactor:(CGFloat)arg1 locationScoreDecayFactor:(CGFloat)arg2 locationWeight:(CGFloat)arg3 maxDistanceThreshold:(CGFloat)arg4 maxLocationsToConsider:(NSInteger)arg5 popularityMultiplierBoost:(CGFloat)arg6 popularityMultiplierExponent:(CGFloat)arg7 topicTopicMappingWeight:(CGFloat)arg8 userMembershipWeight:(CGFloat)arg9 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfigDictionary:(id)arg0 ;
-(id)initWithConfigDictionary:(id)arg0 defaultConfig:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif