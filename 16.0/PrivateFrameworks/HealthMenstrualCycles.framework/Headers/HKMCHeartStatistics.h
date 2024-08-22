// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMCHEARTSTATISTICS_H
#define HKMCHEARTSTATISTICS_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HKMCHeartStatistics : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) CGFloat percentileQuantityValue; // ivar: _percentileQuantityValue
@property (readonly, nonatomic) NSInteger sampleCount; // ivar: _sampleCount


+(BOOL)supportsSecureCoding;
+(id)heartStatisticsFromStatistics:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPercentileQuantityValue:(CGFloat)arg0 sampleCount:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif