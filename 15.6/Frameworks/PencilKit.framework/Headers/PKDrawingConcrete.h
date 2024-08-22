// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDRAWINGCONCRETE_H
#define PKDRAWINGCONCRETE_H

@class NSUUID, NSMutableDictionary, NSMutableArray;


#import "PKDrawing.h"
#import "PKVectorTimestamp.h"

@interface PKDrawingConcrete : PKDrawing {
    CGRect __canvasBounds;
    CGRect __bounds;
    shared_ptr<PKProtobufUnknownFields> _unknownFields;
    NSUUID *_uuid;
    NSMutableDictionary *_strokesIdentifierMap;
    NSMutableArray *_allStrokes;
}


@property (retain, nonatomic, setter=_setAllStrokes:) NSMutableArray *_allStrokes;
@property (readonly, nonatomic) BOOL _hasReplicaUUID;
@property (nonatomic) _PKStrokeID boundsVersion; // ivar: _boundsVersion
@property (readonly, nonatomic) NSUUID *replicaUUID; // ivar: _replicaUUID
@property (retain, nonatomic) PKVectorTimestamp *version; // ivar: _version


+(struct CGAffineTransform )_orientationTransform:(NSInteger)arg0 size:(struct CGSize )arg1 ;
+(struct _PKStrokeID )newStrokeIDGreaterThan:(struct _PKStrokeID )arg0 forUUID:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(Class)strokeClass;
-(Class)strokeSelectionClass;
-(NSInteger)_orientation;
-(NSUInteger)hash;
-(NSUInteger)mergeWithDrawing:(id)arg0 ;
-(id)_data;
-(id)_dataInUnknownFields;
-(id)_initWithUnzippedData:(id)arg0 error:(*id)arg1 ;
-(id)_initWithUnzippedData:(id)arg0 loadNonInkingStrokes:(BOOL)arg1 error:(*id)arg2 ;
-(id)_newStroke:(id)arg0 withGroupID:(id)arg1 ;
-(id)_newStroke:(id)arg0 withInk:(id)arg1 ;
-(id)_rootStrokes;
-(id)_stroke:(id)arg0 transformed:(struct CGAffineTransform )arg1 concat:(BOOL)arg2 ;
-(id)_strokeForIdentifier:(id)arg0 ;
-(id)_strokesIdentifierMap;
-(id)_upgradeOnQueue:(id)arg0 isLegacyDrawing:(BOOL)arg1 completionBlock:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithoutInternalStrokes;
-(id)data;
-(id)dataRepresentation;
-(id)init;
-(id)initWithArchive:(*void)arg0 loadNonInkingStrokes:(BOOL)arg1 error:(*id)arg2 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithData:(id)arg0 loadNonInkingStrokes:(BOOL)arg1 error:(*id)arg2 ;
-(id)initWithDrawing:(id)arg0 ;
-(id)initWithLegacyArchive:(*void)arg0 ;
-(id)initWithLegacyData:(id)arg0 ;
-(id)initWithStrokes:(id)arg0 fromDrawing:(id)arg1 ;
-(id)initWithV1Archive:(*void)arg0 loadNonInkingStrokes:(BOOL)arg1 ;
-(id)initWithV1Data:(id)arg0 loadNonInkingStrokes:(BOOL)arg1 ;
-(id)newStroke;
-(id)serialize;
-(id)serializeTransiently;
-(id)serializeWithVersion:(NSInteger)arg0 ;
-(id)undoableAddNewStrokes:(id)arg0 ;
-(id)undoableDeleteStrokes:(id)arg0 ;
-(id)undoableSetStrokes:(id)arg0 groupID:(id)arg1 actionName:(id)arg2 ;
-(id)undoableSetStrokes:(id)arg0 inks:(id)arg1 ;
-(id)undoableTransformStrokes:(id)arg0 withTransform:(struct CGAffineTransform )arg1 concat:(BOOL)arg2 ;
-(id)updateFromSlicedIntersectingIndexes:(*NSInteger)arg0 resultNewRoots:(*id)arg1 resultUpdatedStrokes:(*id)arg2 count:(NSInteger)arg3 ;
-(id)uuid;
-(id)v1SerializeWithPathData:(BOOL)arg0 ;
-(id)v1SerializeWithPathData:(BOOL)arg0 toVersion:(*unsigned int)arg1 ;
-(id)visibleStrokeForInsertingStroke:(id)arg0 ;
-(struct ? )_drawingStrokeInfoIsLegacyDrawing:(BOOL)arg0 ;
-(struct CGAffineTransform )_transformForImageWithSize:(struct CGSize )arg0 ;
-(struct CGRect )_canvasBounds;
-(struct CGRect )bounds;
-(struct CGSize )_orientedDrawingSize;
-(struct CGSize )_unscaledOrientedDrawingSize;
-(struct _PKStrokeID )newStrokeIDGreaterThan:(struct _PKStrokeID )arg0 ;
-(unsigned int)saveToV1Archive:(*void)arg0 withPathData:(BOOL)arg1 ;
-(void)_addTestDataToUnknownFields;
-(void)_collectAllStrokesIn:(id)arg0 into:(id)arg1 ;
-(void)_mergeStroke:(id)arg0 ;
-(void)_removeHiddenAndEraserStrokes;
-(void)_removeInvisibleStrokes;
-(void)_setUUID:(id)arg0 ;
-(void)_updateStrokes:(id)arg0 updateBlock:(id)arg1 ;
-(void)_upgradeLegacyPenInks;
-(void)addNewStroke:(id)arg0 ;
-(void)dealloc;
-(void)deleteStrokes:(id)arg0 ;
-(void)didMergeWithDrawing:(id)arg0 ;
-(void)didUpdate;
-(void)invalidateStrokeBounds;
-(void)invalidateVisibleStrokes;
-(void)normalizeUUIDsWithDrawing:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 withPathData:(BOOL)arg1 ;
-(void)setStrokeSortIDForInsertion:(id)arg0 ;
-(void)setStrokes:(id)arg0 groupID:(id)arg1 ;
-(void)setStrokes:(id)arg0 hidden:(BOOL)arg1 ;
-(void)setStrokes:(id)arg0 inks:(id)arg1 ;
-(void)set_canvasBounds:(struct CGRect )arg0 ;
-(void)set_orientation:(NSInteger)arg0 ;
-(void)transformStrokes:(id)arg0 withTransform:(struct CGAffineTransform )arg1 concat:(BOOL)arg2 ;
-(void)updateStroke:(id)arg0 indexHint:(NSUInteger)arg1 ;
-(void)updateStrokes:(id)arg0 ;
-(void)willMergeWithDrawing:(id)arg0 ;


@end


#endif