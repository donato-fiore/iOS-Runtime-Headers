// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDRAWING_H
#define PKDRAWING_H

@class NSArray, NSUUID, NSMutableArray, NSString, NSMapTable, CHRecognitionSession;
@protocol CHQueryDelegate, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKRecognitionSessionManager.h"
#import "PKVisualizationManager.h"

@interface PKDrawing : NSObject <CHQueryDelegate, NSCopying, NSSecureCoding>

 {
    BOOL _recognitionEnabled;
    NSArray *_forcedRecognitionLocales;
    NSUUID *_listenerID;
}


@property (retain, nonatomic) NSMutableArray *_cachedVisibleStrokes; // ivar: _cachedVisibleStrokes
@property (nonatomic) NSInteger _orientation;
@property (readonly, nonatomic) CGRect bounds;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMapTable *ongoingQueries; // ivar: _ongoingQueries
@property (retain, nonatomic) PKRecognitionSessionManager *recognitionManager; // ivar: _recognitionManager
@property (retain, nonatomic) CHRecognitionSession *recognitionSession; // ivar: _recognitionSession
@property (readonly, nonatomic) NSArray *strokes;
@property (readonly) Class superclass;
@property (retain, nonatomic, setter=_setUUID:) NSUUID *uuid;
@property (retain, nonatomic) PKVisualizationManager *visualizationManager; // ivar: _visualizationManager


+(BOOL)supportsSecureCoding;
+(Class)drawingClassForPaper;
+(NSInteger)_currentSerializationVersion;
+(id)_findLeftmostStrokes:(id)arg0 ;
+(id)_findRightmostStrokes:(id)arg0 ;
+(id)_otherStrokesCloseToLeft:(BOOL)arg0 forStrokes:(id)arg1 withClosestStroke:(id)arg2 ;
+(id)_upgradeDrawingData:(id)arg0 queue:(id)arg1 completionBlock:(id)arg2 ;
+(id)_uuidDescriptionForStrokes:(id)arg0 ;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)drawingStrokesFromStrokes:(id)arg0 inDrawing:(id)arg1 ;
+(id)drawingWithData:(id)arg0 ;
+(id)fileType;
+(id)visibleStrokesFromStrokes:(id)arg0 inDrawing:(id)arg1 ;
+(struct CGRect )_boundingBoxForStrokeArray:(id)arg0 ;
+(struct CGRect )_boundingBoxForStrokes:(id)arg0 ;
+(void)sortStrokes:(id)arg0 ;
-(*BOOL)_newAsciiBitfield;
-(BOOL)containsInternalStrokes;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)recognitionEnabled;
-(Class)classForCoder;
-(Class)strokeClass;
-(Class)strokeSelectionClass;
-(NSInteger)_minimumSerializationVersion;
-(NSInteger)_rootStrokesCount;
-(NSUInteger)mergeWithDrawing:(id)arg0 ;
-(id)CHDrawing;
-(id)_addStroke:(id)arg0 ;
-(id)_allStrokes;
-(id)_ascii;
-(id)_clipAgainstLegacyCanvas:(id)arg0 ;
-(id)_clipStroke:(id)arg0 againstPaths:(*void)arg1 ;
-(id)_clipStroke:(id)arg0 newRootStroke:(*id)arg1 ;
-(id)_copyAndAddStroke:(id)arg0 transform:(struct CGAffineTransform )arg1 ;
-(id)_copyAndAddStroke:(id)arg0 transform:(struct CGAffineTransform )arg1 ink:(id)arg2 newParent:(*id)arg3 ;
-(id)_rootStrokes;
-(id)_strokeForIdentifier:(id)arg0 ;
-(id)_strokesIntersectedByPoint:(struct CGPoint )arg0 prevPoint:(struct CGPoint )arg1 transform:(struct CGAffineTransform )arg2 ;
-(id)_unclippedStroke:(id)arg0 ;
-(id)_visibleStrokeForIdentifier:(id)arg0 ;
-(id)_visibleStrokes;
-(id)clipStroke:(id)arg0 onPlane:(id)arg1 renderMask:(id)arg2 ;
-(id)copyAndAddStroke:(id)arg0 transform:(struct CGAffineTransform )arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithoutInternalStrokes;
-(id)data;
-(id)dataRepresentation;
-(id)debugQuickLookObject;
-(id)drawingByAppendingDrawing:(id)arg0 ;
-(id)drawingByAppendingStrokes:(id)arg0 ;
-(id)drawingByApplyingTransform:(struct CGAffineTransform )arg0 ;
-(id)forcedRecognitionLocales;
-(id)imageFromRect:(struct CGRect )arg0 scale:(CGFloat)arg1 ;
-(id)indexableContent;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithData:(id)arg0 loadNonInkingStrokes:(BOOL)arg1 error:(*id)arg2 ;
-(id)initWithDrawing:(id)arg0 ;
-(id)initWithStrokes:(id)arg0 ;
-(id)initWithStrokes:(id)arg0 fromDrawing:(id)arg1 ;
-(id)insertNewTestStroke;
-(id)intersectedStrokesAtPoint:(struct CGPoint )arg0 selectionType:(NSInteger)arg1 inputType:(NSInteger)arg2 visibleOnscreenStrokes:(id)arg3 ;
-(id)intersectedStrokesFromStroke:(id)arg0 visibleOnscreenStrokes:(id)arg1 ;
-(id)newStroke;
-(id)setStroke:(id)arg0 hidden:(BOOL)arg1 ;
-(id)setStroke:(id)arg0 ink:(id)arg1 ;
-(id)setStroke:(id)arg0 transform:(struct CGAffineTransform )arg1 concat:(BOOL)arg2 ;
-(id)sliceWithEraseStroke:(id)arg0 ;
-(id)strokesIntersectedByPoint:(struct CGPoint )arg0 prevPoint:(struct CGPoint )arg1 minThreshold:(CGFloat)arg2 transform:(struct CGAffineTransform )arg3 onscreenVisibleStrokes:(id)arg4 ;
-(id)strokesIntersectedByPoint:(struct CGPoint )arg0 prevPoint:(struct CGPoint )arg1 onscreenVisibleStrokes:(id)arg2 ;
-(id)undoableAddNewStrokes:(id)arg0 ;
-(id)undoableDeleteStrokes:(id)arg0 ;
-(id)undoableSetStrokes:(id)arg0 groupID:(id)arg1 actionName:(id)arg2 ;
-(id)undoableSetStrokes:(id)arg0 inks:(id)arg1 ;
-(id)undoableTransformStrokes:(id)arg0 withTransform:(struct CGAffineTransform )arg1 concat:(BOOL)arg2 ;
-(id)updateFromSlicedIntersectingIndexes:(*NSInteger)arg0 resultNewRoots:(*id)arg1 resultUpdatedStrokes:(*id)arg2 count:(NSInteger)arg3 ;
-(id)updateStroke:(id)arg0 updater:(id)arg1 ;
-(id)version;
-(id)visibleStrokeForInsertingStroke:(id)arg0 ;
-(id)visibleStrokes;
-(struct CGAffineTransform )_transformForImageWithSize:(struct CGSize )arg0 ;
-(struct CGRect )_canvasBounds;
-(struct CGRect )_eraserStrokeBounds;
-(struct CGRect )calculateStrokeBounds;
-(struct CGRect )strokeBounds;
-(struct CGSize )_orientedDrawingSize;
-(void)_copyAndAddStrokes:(id)arg0 transform:(struct CGAffineTransform )arg1 ;
-(void)_imageInRect:(struct CGRect )arg0 scale:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)_removeStroke:(id)arg0 ;
-(void)_setAllStrokes:(id)arg0 ;
-(void)_teardownRecognitionObjects;
-(void)_transformAllStrokes:(struct CGAffineTransform )arg0 ;
-(void)_updateRecognitionSession;
-(void)_upgradeLegacyPenInks;
-(void)addNewStroke:(id)arg0 ;
-(void)cancelOngoingRecognitionRequests;
-(void)clipStrokesIfNeededOnQueue:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)deleteStrokes:(id)arg0 ;
-(void)didUpdate;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fetchIntersectedStrokesBetweenPoint:(struct CGPoint )arg0 otherPoint:(struct CGPoint )arg1 visibleOnscreenStrokes:(id)arg2 completion:(id)arg3 ;
-(void)invalidateVisibleStrokes;
-(void)performSearchQuery:(id)arg0 withBlock:(id)arg1 ;
-(void)queryDidUpdateResult:(id)arg0 ;
-(void)setForcedRecognitionLocales:(id)arg0 ;
-(void)setNeedsRecognitionUpdate;
-(void)setRecognitionEnabled:(BOOL)arg0 ;
-(void)setStrokeSubstrokes:(id)arg0 ;
-(void)set_canvasBounds:(struct CGRect )arg0 ;
-(void)transformStrokes:(id)arg0 withTransform:(struct CGAffineTransform )arg1 concat:(BOOL)arg2 ;
-(void)updateStroke:(id)arg0 indexHint:(NSUInteger)arg1 ;
-(void)updateStrokes:(id)arg0 ;


@end


#endif