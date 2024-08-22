// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKDRAWINGCOHERENCE_H
#define PKDRAWINGCOHERENCE_H

@class PKDrawing, NSArray, NSUUID;
@protocol PKDrawingVersion;



@interface PKDrawingCoherence : PKDrawing {
    ? model;
}


@property (nonatomic) CGRect _canvasBounds;
@property (nonatomic, readonly) NSArray *_rootStrokes;
@property (nonatomic, readonly) NSInteger _rootStrokesCount;
@property (nonatomic, readonly) CGRect bounds;
@property (nonatomic, readonly) NSInteger hash;
@property (nonatomic, readonly) Class strokeClass;
@property (nonatomic, readonly) Class strokeSelectionClass;
@property (nonatomic, copy) NSUUID *uuid;
@property (nonatomic, readonly) NSObject<PKDrawingVersion> *version;


+(id)fileType;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)mergeWithDrawing:(id)arg0 ;
-(id)_strokeForIdentifier:(id)arg0 ;
-(id)copyWithoutInternalStrokes;
-(id)dataRepresentation;
-(id)drawingByApplyingTransform:(struct CGAffineTransform )arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithData:(id)arg0 loadNonInkingStrokes:(BOOL)arg1 error:(*id)arg2 ;
-(id)initWithDrawing:(id)arg0 ;
-(id)initWithStrokes:(id)arg0 fromDrawing:(id)arg1 ;
-(id)newStroke;
-(id)serializeTransiently;
-(id)serializeWithVersion:(NSInteger)arg0 ;
-(id)setStroke:(id)arg0 hidden:(BOOL)arg1 ;
-(id)undoableAddNewStrokes:(id)arg0 ;
-(id)undoableDeleteStrokes:(id)arg0 ;
-(id)undoableSetStrokes:(id)arg0 groupID:(id)arg1 actionName:(id)arg2 ;
-(id)undoableSetStrokes:(id)arg0 inks:(id)arg1 ;
-(id)undoableTransformStrokes:(id)arg0 withTransform:(struct CGAffineTransform )arg1 concat:(BOOL)arg2 ;
-(id)updateFromSlicedIntersectingIndexes:(*NSInteger)arg0 resultNewRoots:(*id)arg1 resultUpdatedStrokes:(*id)arg2 count:(NSInteger)arg3 ;
-(id)visibleStrokeForInsertingStroke:(id)arg0 ;
-(void)_setUUID:(id)arg0 ;
-(void)addNewStroke:(id)arg0 ;
-(void)deleteStrokes:(id)arg0 ;
-(void)invalidateVisibleStrokes;
-(void)setStrokes:(id)arg0 groupID:(id)arg1 ;
-(void)setStrokes:(id)arg0 inks:(id)arg1 ;
-(void)transformStrokes:(id)arg0 withTransform:(struct CGAffineTransform )arg1 concat:(BOOL)arg2 ;
-(void)updateStroke:(id)arg0 indexHint:(NSInteger)arg1 ;


@end


#endif