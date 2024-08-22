// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RCWAVEFORM_H
#define RCWAVEFORM_H

@class NSArray;
@protocol NSMutableCopying, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RCWaveform : NSObject <NSMutableCopying, NSCopying, NSSecureCoding>

 {
    NSUInteger _decodedVersion;
}


@property (readonly, nonatomic) NSUInteger averagePowerLevelsRate;
@property (readonly) NSUInteger segmentCount;
@property (retain) NSArray *segments; // ivar: _segments
@property (readonly) NSArray *segmentsCopy;
@property (readonly, nonatomic) ? timeRange;


+(BOOL)supportsSecureCoding;
+(id)_mutableSegmentsByClippingToTimeRange:(struct ? )arg0 withSegments:(id)arg1 ;
+(id)_mutableSegmentsIntersectingTimeRange:(struct ? )arg0 intersectionRange:(struct _NSRange *)arg1 withSegments:(id)arg2 ;
+(id)waveformURLForAVURL:(id)arg0 ;
+(id)waveformWithContentsOfURL:(id)arg0 minimumRequiredVersion:(NSUInteger)arg1 ;
+(struct _NSRange )rangeOfSegmentsIntersectingTimeRange:(struct ? )arg0 withSegments:(id)arg1 ;
+(void)_mergeBoundarySegmentsInArray:(id)arg0 ;
+(void)initialize;
-(BOOL)hasUniformPowerLevel:(float)arg0 ;
-(BOOL)isWaveformDataEqualToDataInWaveform:(id)arg0 ;
-(BOOL)saveContentsToURL:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSegments:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)segmentsByClippingToTimeRange:(struct ? )arg0 ;
-(id)segmentsIntersectingTimeRange:(struct ? )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif