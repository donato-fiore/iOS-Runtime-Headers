// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKROLLINGBASELINECONFIGURATION_H
#define HKROLLINGBASELINECONFIGURATION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKRollingBaselineConfiguration : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger maximumSampleCount; // ivar: _maximumSampleCount
@property (readonly, nonatomic) CGFloat maximumWindowDuration; // ivar: _maximumWindowDuration
@property (readonly, nonatomic) NSInteger minimumSampleCount; // ivar: _minimumSampleCount
@property (readonly, nonatomic) NSInteger options; // ivar: _options


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMinimumSampleCount:(NSInteger)arg0 maximumSampleCount:(NSInteger)arg1 maximumWindowDuration:(CGFloat)arg2 options:(NSInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif