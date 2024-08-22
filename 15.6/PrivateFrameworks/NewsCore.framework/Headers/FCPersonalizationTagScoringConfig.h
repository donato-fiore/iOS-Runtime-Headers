// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
@property (nonatomic) CGFloat topicTopicMappingWeight; // ivar: _topicTopicMappingWeight
@property (nonatomic) CGFloat userMembershipWeight; // ivar: _userMembershipWeight


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithChannelTopicMappingWeight:(CGFloat)arg0 democratizationFactor:(CGFloat)arg1 locationScoreDecayFactor:(CGFloat)arg2 locationWeight:(CGFloat)arg3 maxDistanceThreshold:(CGFloat)arg4 maxLocationsToConsider:(NSInteger)arg5 topicTopicMappingWeight:(CGFloat)arg6 userMembershipWeight:(CGFloat)arg7 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfigDictionary:(id)arg0 ;
-(id)initWithConfigDictionary:(id)arg0 defaultConfig:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif