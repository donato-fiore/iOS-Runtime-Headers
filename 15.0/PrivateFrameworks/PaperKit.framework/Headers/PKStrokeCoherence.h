// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSTROKECOHERENCE_H
#define PKSTROKECOHERENCE_H

@class _PKStrokeClipPlane, NSUUID, PKStrokeMask, PKInk, PKStrokePath;


#import "PKStrokeCoherenceBase.h"

@interface PKStrokeCoherence : PKStrokeCoherenceBase {
    ? model;
    ? _path;
    ? resolvedProperties;
    ? inheritedProperties;
}


@property (nonatomic) CGRect _bounds;
@property (nonatomic, retain) _PKStrokeClipPlane *_clipPlane;
@property (nonatomic) ? _flags;
@property (nonatomic, copy) NSUUID *_groupID;
@property (nonatomic) NSInteger _shapeType;
@property (nonatomic, retain) PKStrokeMask *_strokeMask;
@property (nonatomic, copy) NSUUID *_strokeUUID;
@property (nonatomic) CGAffineTransform _transform;
@property (nonatomic, readonly) BOOL hasSubstrokes;
@property (nonatomic, copy) PKInk *ink;
@property (nonatomic, copy) PKStrokePath *path;
@property (nonatomic, readonly) CGRect renderBounds;


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compareToStroke:(id)arg0 ;
-(id)_substrokesInDrawing:(id)arg0 ;
-(id)copyForMutation;
-(id)copyForSubstroke;
-(id)init;
-(id)initWithInk:(id)arg0 strokePath:(id)arg1 transform:(struct CGAffineTransform )arg2 mask:(id)arg3 ;
-(id)mutableCopyWithZone:(*void)arg0 ;
-(id)parentStrokeForInsertionInDrawing:(id)arg0 ;
-(id)sliceIdentifierForTStart:(CGFloat)arg0 tEnd:(CGFloat)arg1 ;
-(void)_setClipPlane:(id)arg0 ;
-(void)_setFlags:(struct ? )arg0 ;
-(void)_setGroupID:(id)arg0 ;
-(void)_setShapeType:(NSInteger)arg0 ;
-(void)_setStrokeMask:(id)arg0 ;
-(void)_setStrokeUUID:(id)arg0 ;
-(void)_setTransform:(struct CGAffineTransform )arg0 ;


@end


#endif