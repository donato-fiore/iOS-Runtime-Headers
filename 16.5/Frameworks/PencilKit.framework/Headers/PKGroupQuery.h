// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKGROUPQUERY_H
#define PKGROUPQUERY_H

@class NSArray, NSString, CHStrokeGroupQuery;
@protocol CHQueryDelegate, OS_dispatch_queue;


#import "PKQuery.h"
#import "PKDrawing.h"

@interface PKGroupQuery : PKQuery <CHQueryDelegate>

 {
    NSObject<OS_dispatch_queue> *_intersectionQueue;
    NSObject<OS_dispatch_queue> *_strokeGroupComputationQueue;
    NSArray *_strokeGroups;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PKDrawing *drawing; // ivar: _drawing
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CHStrokeGroupQuery *strokeGroupQuery; // ivar: _strokeGroupQuery
@property (readonly) Class superclass;


+(id)_strokesInLine:(id)arg0 inDrawing:(id)arg1 ;
-(BOOL)_strokes:(id)arg0 containsAnyStrokes:(id)arg1 ;
-(NSInteger)_firstLineIndexFromInitialStrokes:(id)arg0 ;
-(NSInteger)_lastLineIndexFromInitialStrokes:(id)arg0 ;
-(NSInteger)_tokenizationLevelForSelectionType:(NSInteger)arg0 ;
-(NSInteger)contentTypeForIntersectedStrokes:(id)arg0 ;
-(id)_closestLineToPoint:(struct CGPoint )arg0 isTop:(BOOL)arg1 ;
-(id)_lines:(id)arg0 containingStrokes:(id)arg1 ;
-(id)_strokesAtLineIndex:(NSInteger)arg0 containingStrokes:(id)arg1 ;
-(id)_strokesForIdentifiers:(id)arg0 inDrawing:(id)arg1 ;
-(id)_strokesInLine:(id)arg0 leftOf:(BOOL)arg1 point:(struct CGPoint )arg2 ;
-(id)firstStrokesInStrokes:(id)arg0 isRTL:(BOOL)arg1 ;
-(id)initWithRecognitionSessionManager:(id)arg0 ;
-(id)lastStrokesInStrokes:(id)arg0 isRTL:(BOOL)arg1 ;
-(id)strokeGroups;
-(void)_precalculateStrokeGroupProperties:(id)arg0 ;
-(void)dealloc;
-(void)pause;
-(void)q_fetchStrokesAmbiguouslyBelowAndAboveInsertSpaceHandleWithStrokes:(id)arg0 completion:(id)arg1 ;
-(void)q_fetchStrokesBetweenTopPoint:(struct CGPoint )arg0 bottomPoint:(struct CGPoint )arg1 isRTL:(BOOL)arg2 completion:(id)arg3 ;
-(void)q_fetchStrokesForPoint:(struct CGPoint )arg0 selectionType:(NSInteger)arg1 inputType:(NSInteger)arg2 visibleOnscreenStrokes:(id)arg3 completion:(id)arg4 ;
-(void)queryDidUpdateResult:(id)arg0 ;
-(void)setStrokeGroups:(id)arg0 ;
-(void)start;
-(void)teardown;


@end


#endif