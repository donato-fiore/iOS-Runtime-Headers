// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSTROKE_H
#define PKSTROKE_H

@class NSUUID, UIBezierPath, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PKStrokeRenderMask.h"
#import "PKStrokePath.h"
#import "PKInk.h"

@interface PKStroke : NSObject <NSCopying>



@property (nonatomic, setter=_setBounds:) CGRect _bounds;
@property (nonatomic, getter=_isInProgressScribbleStroke, setter=_setIsInProgressScribbleStroke:) BOOL _isInProgressScribbleStroke;
@property (readonly, nonatomic) BOOL _isInternal;
@property (nonatomic, getter=_isNewCopy, setter=_setIsNewCopy:) BOOL _isNewCopy;
@property (nonatomic, setter=_setRandomSeed:) unsigned int _randomSeed;
@property (copy, nonatomic, setter=_setRenderMask:) PKStrokeRenderMask *_renderMask;
@property (retain, nonatomic) PKStrokePath *_strokeData;
@property (readonly, nonatomic) NSUUID *_strokeDataUUID;
@property (nonatomic, setter=_setTransform:) CGAffineTransform _transform;
@property (readonly, nonatomic) CGRect _untransformedBounds;
@property (retain, nonatomic) PKInk *ink;
@property (readonly, nonatomic) UIBezierPath *mask;
@property (readonly, nonatomic) NSArray *maskedPathRanges;
@property (readonly, nonatomic) PKStrokePath *path;
@property (readonly, nonatomic) CGRect renderBounds;
@property (readonly, nonatomic) CGAffineTransform transform;


+(NSInteger)_asciiBitfieldIndexForX:(NSInteger)arg0 y:(NSInteger)arg1 width:(NSInteger)arg2 ;
+(NSInteger)_asciiDimensionForBoundsDimension:(CGFloat)arg0 ;
+(id)_testStrokeFromPoints:(struct PKCompressedStrokePoint *)arg0 length:(NSInteger)arg1 ink:(id)arg2 ;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)copyStrokes:(id)arg0 hidden:(BOOL)arg1 ;
+(id)sliceWithEraser:(*void)arg0 toClip:(id)arg1 ;
+(id)sliceWithEraser:(*void)arg0 toClip:(id)arg1 clipType:(int)arg2 ;
+(struct CGRect )_calculateBounds:(id)arg0 transform:(struct CGAffineTransform )arg1 ink:(id)arg2 strokePath:(id)arg3 ;
+(struct PKCompressedStrokePoint )_compressStrokePoint:(struct _PKStrokePoint )arg0 withTimestamp:(CGFloat)arg1 ;
+(struct _PKStrokePoint )_decompressStrokePoint:(struct PKCompressedStrokePoint )arg0 withTimestamp:(CGFloat)arg1 ;
// +(void)_consumeRenderVertexes:(id)arg0 ink:(unk)arg1 strokePath:(id)arg2  ;
-(*BOOL)_newAsciiBitfield;
-(*BOOL)_newAsciiBitfieldWithWidth:(NSInteger)arg0 height:(NSInteger)arg1 ;
-(*void)newOutlinePaths;
-(BOOL)_containsSamePointsAsStroke:(id)arg0 ;
-(BOOL)_isHidden;
-(BOOL)_shouldBeClippedAgainstLegacyCanvas;
// -(BOOL)_visitVisibleSubstrokes:(id)arg0 inDrawing:(unk)arg1  ;
-(BOOL)hasSubstrokes;
-(BOOL)intersectsClosedStroke:(id)arg0 ;
-(BOOL)intersectsClosedStrokeMasked:(id)arg0 ;
-(BOOL)intersectsLineFrom:(struct CGPoint )arg0 to:(struct CGPoint )arg1 minThreshold:(CGFloat)arg2 ;
-(BOOL)intersectsLineFromMasked:(struct CGPoint )arg0 to:(struct CGPoint )arg1 minThreshold:(CGFloat)arg2 ;
-(BOOL)intersectsPoint:(struct CGPoint )arg0 ;
-(BOOL)intersectsPoint:(struct CGPoint )arg0 boundsOutset:(CGFloat)arg1 minimumStrokeThreshold:(CGFloat)arg2 ;
-(BOOL)intersectsPointMasked:(struct CGPoint )arg0 ;
-(BOOL)intersectsPointMasked:(struct CGPoint )arg0 boundsOutset:(CGFloat)arg1 minimumStrokeThreshold:(CGFloat)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)_maxWidthForStroke;
-(CGFloat)_thresholdForPoint:(struct _PKStrokePoint )arg0 ;
-(CGFloat)_timestamp;
-(CGFloat)_timestampAtIndex:(NSUInteger)arg0 ;
-(CGFloat)endTimestamp;
-(CGFloat)startTimestamp;
-(CGFloat)timestamp;
-(CGFloat)timestampAtIndex:(NSUInteger)arg0 ;
-(NSInteger)_inputType;
-(NSInteger)_shapeType;
-(NSInteger)_visibleSubstrokeCountInDrawing:(id)arg0 ;
-(NSInteger)compareToStroke:(id)arg0 ;
-(NSUInteger)_pointsCount;
-(NSUInteger)hash;
-(id)_ascii;
-(id)_clipPlane;
-(id)_groupID;
-(id)_initWithPath:(struct CGPath *)arg0 ink:(id)arg1 inputScale:(CGFloat)arg2 ;
-(id)_initWithPath:(struct CGPath *)arg0 ink:(id)arg1 maxSegmentLength:(CGFloat)arg2 inputScale:(CGFloat)arg3 velocityForDistanceFunction:(id)arg4 ;
-(id)_initWithStroke:(id)arg0 strokeData:(id)arg1 ;
-(id)_mergeWithStroke:(id)arg0 inDrawing:(id)arg1 ;
-(id)_newStrokeWithSubstrokes:(id)arg0 inDrawing:(id)arg1 ;
// -(id)_sliceWithSlicingBlock:(id)arg0 inDrawing:(unk)arg1 newRootStroke:(id)arg2  ;
-(id)_strokeMask;
-(id)_strokeUUID;
-(id)_substrokeWithRange:(struct _NSRange )arg0 ;
-(id)_substrokesInDrawing:(id)arg0 ;
// -(id)_updateStroke:(id)arg0 inDrawing:(unk)arg1  ;
-(id)copyForMutation;
-(id)copyForSubstroke;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataRepresentation;
-(id)debugQuickLookObject;
-(id)deltaTo:(id)arg0 ;
-(id)description;
-(id)descriptionAtDepth:(NSInteger)arg0 ;
-(id)initWithArchive:(*void)arg0 error:(*id)arg1 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithData:(id)arg0 id:(id)arg1 flags:(struct ? )arg2 ink:(id)arg3 transform:(struct CGAffineTransform )arg4 substrokes:(id)arg5 ;
-(id)initWithData:(id)arg0 id:(id)arg1 hidden:(BOOL)arg2 ink:(id)arg3 transform:(struct CGAffineTransform )arg4 substrokes:(id)arg5 ;
-(id)initWithInk:(id)arg0 strokePath:(id)arg1 transform:(struct CGAffineTransform )arg2 mask:(id)arg3 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)parentStrokeForInsertionInDrawing:(id)arg0 ;
-(id)sliceIdentifierForTStart:(CGFloat)arg0 tEnd:(CGFloat)arg1 ;
-(id)sliceWithEraser:(*void)arg0 ;
-(id)sliceWithMask:(*void)arg0 ;
-(id)strokeApplying:(id)arg0 ;
-(id)substrokeWithRange:(struct _NSRange )arg0 ;
-(struct ? )_flags;
-(struct CGPath *)_newPathRepresentation;
-(struct CGPath *)newPathRepresentation;
-(struct CGPath *)newPathRepresentationMasked;
-(struct CGPath *)newSelectionPathRepresentationWithPointsCount:(*int)arg0 ;
-(struct CGPath *)newSelectionPathRepresentationWithPointsCountMasked:(*int)arg0 ;
-(struct CGPoint )_locationAtIndex:(NSUInteger)arg0 ;
-(struct CGPoint )_locationAtIndex:(NSUInteger)arg0 applyStrokeTransform:(BOOL)arg1 ;
-(struct CGPoint )intersectionFromPoint:(struct CGPoint )arg0 toPoint:(struct CGPoint )arg1 ;
-(struct CGPoint )locationAtIndex:(NSUInteger)arg0 ;
-(struct CGRect )_calculateBounds;
-(struct CGRect )bounds;
-(struct unique_ptr<std::vector<PKCompressedStrokePoint>, std::default_delete<std::vector<PKCompressedStrokePoint>>> )_compressedStrokePoints;
-(void)_addVisibleSubstrokesTo:(id)arg0 inDrawing:(id)arg1 ;
-(void)_appendPointsOfInterestForSelection:(*void)arg0 ;
-(void)_appendPointsOfInterestForSelectionMasked:(*void)arg0 ;
-(void)_applyTransform:(struct CGAffineTransform )arg0 ;
-(void)_setClipPlane:(id)arg0 ;
-(void)_setFlags:(struct ? )arg0 ;
-(void)_setGroupID:(id)arg0 ;
-(void)_setHidden:(BOOL)arg0 ;
-(void)_setShapeType:(NSInteger)arg0 ;
-(void)_setStrokeMask:(id)arg0 ;
-(void)_setStrokeUUID:(id)arg0 ;
-(void)debugRender:(struct CGContext *)arg0 ;
-(void)debugRenderMasked:(struct CGContext *)arg0 ;
-(void)didUpdateInDrawing:(id)arg0 ;
-(void)didUpdateSubstrokesInDrawing:(id)arg0 ;
-(void)enumeratePointsWithDistanceStep:(CGFloat)arg0 usingBlock:(id)arg1 ;
-(void)enumeratePointsWithTimestep:(CGFloat)arg0 usingBlock:(id)arg1 ;
-(void)generateClipPaths:(*void)arg0 transform:(struct CGAffineTransform )arg1 ;
-(void)generateMask;
-(void)interpolatePointDataWithStep:(CGFloat)arg0 from:(CGFloat)arg1 to:(CGFloat)arg2 usingBlock:(id)arg3 ;
-(void)interpolatePointDataWithStep:(CGFloat)arg0 usingBlock:(id)arg1 ;
-(void)saveToArchive:(*void)arg0 ;


@end


#endif