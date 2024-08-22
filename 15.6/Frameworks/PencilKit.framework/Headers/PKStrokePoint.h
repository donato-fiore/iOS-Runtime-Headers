// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSTROKEPOINT_H
#define PKSTROKEPOINT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PKStrokePoint : NSObject <NSCopying>

 {
    PKStrokePathPointsPrivate _strokeDataPointsPrivate;
}


@property (readonly, nonatomic) CGFloat altitude;
@property (readonly, nonatomic) CGFloat azimuth;
@property (readonly, nonatomic) CGFloat force;
@property (readonly, nonatomic) CGPoint location;
@property (readonly, nonatomic) CGFloat opacity;
@property (readonly, nonatomic) CGSize size;
@property (readonly, nonatomic) CGFloat timeOffset;


+(?)_sharedConstantData;
-(*void)_strokeDataPointsPrivate;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithLocation:(struct CGPoint )arg0 timeOffset:(CGFloat)arg1 size:(struct CGSize )arg2 opacity:(CGFloat)arg3 force:(CGFloat)arg4 azimuth:(CGFloat)arg5 altitude:(CGFloat)arg6 ;
-(id)initWithSlice:(*void)arg0 index:(NSInteger)arg1 ;
-(struct PKCompressedStrokePoint )_compressedPoint;


@end


#endif