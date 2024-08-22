// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PKSTROKECONCRETE_H
#define _PKSTROKECONCRETE_H

@class NSUUID, NSArray;


#import "PKStroke.h"
#import "PKInk.h"
#import "PKStrokePath.h"
#import "_PKStrokeClipPlane.h"
#import "PKStrokeMask.h"

@interface _PKStrokeConcrete : PKStroke {
    shared_ptr<PKProtobufUnknownFields> _unknownFields;
    CGRect _cachedBounds;
    PKInk *_ink;
    ? _flags;
    NSUUID *_strokeUUID;
    PKStrokePath *_strokeData;
    _PKStrokeClipPlane *_clipPlane;
    PKStrokeMask *_strokeMask;
    NSUUID *_groupID;
    NSInteger _shapeType;
    CGAffineTransform _transform;
    CGAffineTransform _inkTransform;
}


@property (readonly, nonatomic) BOOL _isFullyHidden;
@property (nonatomic) _PKStrokeID _sortID; // ivar: _sortID
@property (retain, nonatomic) NSArray *_substrokes; // ivar: _substrokes
@property (nonatomic) _PKStrokeID _substrokesVersion; // ivar: _substrokesVersion
@property (nonatomic) _PKStrokeID _version; // ivar: _version


-(BOOL)hasSubstrokes;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_shapeType;
-(NSInteger)compareToStroke:(id)arg0 ;
-(id)_clipPlane;
-(id)_dataInUnknownFields;
-(id)_groupID;
-(id)_mergeUnparentedWithStroke:(id)arg0 inDrawing:(id)arg1 ;
-(id)_mergeWithStroke:(id)arg0 inDrawing:(id)arg1 ;
-(id)_newStrokeWithSubstrokes:(id)arg0 inDrawing:(id)arg1 ;
-(id)_strokeMask;
-(id)_strokeUUID;
-(id)_substrokesInDrawing:(id)arg0 ;
// -(id)_updateStroke:(id)arg0 inDrawing:(unk)arg1  ;
-(id)_updateWithParent:(id)arg0 inDrawing:(id)arg1 ;
-(id)copyForMutation;
-(id)copyForSubstroke;
-(id)dataRepresentation;
-(id)deltaTo:(id)arg0 ;
-(id)init;
-(id)initWithArchive:(*void)arg0 error:(*id)arg1 ;
-(id)initWithArchive:(*void)arg0 sortedUUIDs:(id)arg1 inks:(id)arg2 parent:(id)arg3 isHidden:(BOOL)arg4 transientArchiveDictionary:(id)arg5 ;
-(id)initWithArchive:(*void)arg0 sortedUUIDs:(id)arg1 inks:(id)arg2 transientArchiveDictionary:(id)arg3 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithData:(id)arg0 id:(id)arg1 flags:(struct ? )arg2 ink:(id)arg3 transform:(struct CGAffineTransform )arg4 substrokes:(id)arg5 ;
-(id)initWithData:(id)arg0 id:(id)arg1 sortID:(struct _PKStrokeID )arg2 flags:(struct ? )arg3 version:(struct _PKStrokeID )arg4 ink:(id)arg5 transform:(struct CGAffineTransform )arg6 substrokes:(id)arg7 substrokesVersion:(struct _PKStrokeID )arg8 ;
-(id)initWithInk:(id)arg0 strokePath:(id)arg1 transform:(struct CGAffineTransform )arg2 mask:(id)arg3 randomSeed:(unsigned int)arg4 ;
-(id)initWithLegacyArchive:(*void)arg0 sortedUUIDs:(id)arg1 ;
-(id)initWithStroke:(id)arg0 hidden:(BOOL)arg1 version:(struct _PKStrokeID )arg2 ink:(id)arg3 transform:(struct CGAffineTransform )arg4 ;
-(id)initWithV1Archive:(*void)arg0 sortedUUIDs:(id)arg1 inks:(id)arg2 ;
-(id)ink;
-(id)mergeArrayOfStrokes:(id)arg0 with:(id)arg1 inDrawing:(id)arg2 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)parentStrokeForInsertionInDrawing:(id)arg0 ;
-(id)path;
-(id)sliceIdentifierForTStart:(CGFloat)arg0 tEnd:(CGFloat)arg1 ;
-(id)strokeApplying:(id)arg0 ;
-(struct ? )_flags;
-(struct CGAffineTransform )_inkTransform;
-(struct CGAffineTransform )_transform;
-(struct CGPoint )readPointFromArchive:(struct Point *)arg0 ;
-(struct CGRect )renderBounds;
-(struct _PKStrokeID )readStrokeIDFromArchive:(struct StrokeID *)arg0 withSortedUUIDs:(id)arg1 ;
-(struct _PKStrokeID )readV1StrokeIDFromArchive:(struct StrokeID *)arg0 withSortedUUIDs:(id)arg1 ;
-(struct _PKStrokePoint )readPointFromLegacyArchive:(struct Point *)arg0 deltaFrom:(struct _PKStrokePoint *)arg1 ;
-(unsigned int)saveToArchive:(*void)arg0 sortedUUIDs:(id)arg1 inks:(id)arg2 withPathData:(BOOL)arg3 parent:(id)arg4 transient:(BOOL)arg5 ;
-(unsigned int)saveToArchive:(*void)arg0 sortedUUIDs:(id)arg1 inks:(id)arg2 withPathData:(BOOL)arg3 transient:(BOOL)arg4 ;
-(unsigned int)saveToV1Archive:(*void)arg0 sortedUUIDs:(id)arg1 inks:(id)arg2 withPathData:(BOOL)arg3 transient:(BOOL)arg4 ;
-(void)_addTestDataToUnknownFields;
-(void)_invalidateBounds;
-(void)_setBounds:(struct CGRect )arg0 ;
-(void)_setClipPlane:(id)arg0 ;
-(void)_setFlags:(struct ? )arg0 ;
-(void)_setGroupID:(id)arg0 ;
-(void)_setInkTransform:(struct CGAffineTransform )arg0 ;
-(void)_setShapeType:(NSInteger)arg0 ;
-(void)_setStrokeMask:(id)arg0 ;
-(void)_setStrokeUUID:(id)arg0 ;
-(void)_setSubstrokes:(id)arg0 ;
-(void)_setTransform:(struct CGAffineTransform )arg0 ;
-(void)didUpdateInDrawing:(id)arg0 ;
-(void)didUpdateSubstrokesInDrawing:(id)arg0 ;
-(void)saveInksTo:(id)arg0 ;
-(void)saveStrokeID:(struct _PKStrokeID *)arg0 toArchive:(struct StrokeID *)arg1 withSortedUUIDs:(id)arg2 ;
-(void)saveToArchive:(*void)arg0 ;
-(void)saveUUIDsTo:(id)arg0 ;
-(void)saveV1StrokeID:(struct _PKStrokeID *)arg0 toArchive:(struct StrokeID *)arg1 withSortedUUIDs:(id)arg2 ;
-(void)setInk:(id)arg0 ;
-(void)setPath:(id)arg0 ;


@end


#endif