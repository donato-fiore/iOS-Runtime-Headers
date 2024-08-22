// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSTROKEPATH_H
#define PKSTROKEPATH_H

@class NSUUID, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PKStrokePath : NSObject <NSCopying>

 {
    PKStrokePathPointsPrivate _strokeDataPointsPrivate;
    shared_ptr<PKProtobufUnknownFields> _unknownFields;
    BOOL _didValidateTimestamps;
    BOOL _hasValidTimestampData;
    CGFloat _cachedMaxWidth;
}


@property (readonly, nonatomic) NSUInteger _immutablePointsCount; // ivar: _immutablePointsCount
@property (readonly, nonatomic) NSInteger _inputType; // ivar: _inputType
@property (readonly, nonatomic) NSUInteger _pointsCount;
@property (readonly, nonatomic) NSUInteger _startIndex; // ivar: _startIndex
@property (readonly, nonatomic) NSUUID *_strokeDataUUID; // ivar: _strokeDataUUID
@property (readonly, nonatomic) CGFloat _timestamp;
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) BOOL hasValidPointTimestampData;


+(id)strokeDataFromDataArchive:(*void)arg0 ;
+(void)_calculateOffsets:(*NSUInteger)arg0 sizes:(*NSUInteger)arg1 ;
+(void)calculateOffsets;
-(BOOL)canApplyDelta:(id)arg0 ;
-(BOOL)inflight;
-(BOOL)saveToDataArchive:(*void)arg0 ;
-(CGFloat)_maxWidth;
-(CGFloat)interpolatedTimeoffsetAt:(CGFloat)arg0 ;
-(CGFloat)parametricValue:(CGFloat)arg0 offsetByDistance:(CGFloat)arg1 ;
-(CGFloat)parametricValue:(CGFloat)arg0 offsetByTime:(CGFloat)arg1 ;
-(CGFloat)radiusAtIndex:(NSUInteger)arg0 ;
-(CGFloat)timestampAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataApplying:(id)arg0 ;
-(id)deltaTo:(id)arg0 ;
-(id)init;
-(id)initWithControlPoints:(id)arg0 creationDate:(id)arg1 ;
-(id)initWithData:(id)arg0 range:(struct _NSRange )arg1 UUID:(id)arg2 ;
-(id)initWithPoints:(struct PKCompressedStrokePoint *)arg0 count:(NSUInteger)arg1 immutableCount:(NSUInteger)arg2 inputType:(NSInteger)arg3 timestamp:(CGFloat)arg4 UUID:(id)arg5 ;
-(id)initWithRawValue:(id)arg0 ;
-(id)interpolatedPointAt:(CGFloat)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)pointAtIndex:(NSUInteger)arg0 ;
-(id)rawValue;
-(struct CGPath *)_newPathRepresentation;
-(struct CGPoint )interpolatedLocationAt:(CGFloat)arg0 ;
-(struct CGPoint )locationAtIndex:(NSUInteger)arg0 ;
-(struct CGPoint )locationOnSegment:(NSUInteger)arg0 t:(CGFloat)arg1 ;
-(struct PKCompressedStrokePoint )_compressedPointAt:(NSUInteger)arg0 ;
-(struct _PKStrokePoint )decompressedPointAt:(NSUInteger)arg0 ;
-(unsigned int)_legacyRandomSeed;
// -(void)_enumerateInterpolatedPointsInRange:(id)arg0 incrementBlock:(id)arg1 usingBlock:(unk)arg2  ;
-(void)enumerateInterpolatedPointsInRange:(id)arg0 strideByDistance:(CGFloat)arg1 usingBlock:(id)arg2 ;
-(void)enumerateInterpolatedPointsInRange:(id)arg0 strideByParametricStep:(CGFloat)arg1 usingBlock:(id)arg2 ;
-(void)enumerateInterpolatedPointsInRange:(id)arg0 strideByTime:(CGFloat)arg1 usingBlock:(id)arg2 ;
-(void)readStrokeDataFromArchive:(*void)arg0 ;
-(void)setLocation:(struct CGPoint )arg0 atIndex:(NSUInteger)arg1 ;
-(void)setPoints:(struct PKCompressedStrokePoint *)arg0 pointsCount:(NSUInteger)arg1 timestamp:(CGFloat)arg2 ;
-(void)setPointsFrom:(id)arg0 range:(struct _NSRange )arg1 ;


@end


#endif