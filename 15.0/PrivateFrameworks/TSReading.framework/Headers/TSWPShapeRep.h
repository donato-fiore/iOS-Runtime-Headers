// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPSHAPEREP_H
#define TSWPSHAPEREP_H

@class CALayer, NSString;
@protocol CALayerDelegate, TSDContainerRep, TSWPShapeLayoutDelegate, TSDContainerInfo;


#import "TSDShapeRep.h"
#import "TSWPRep.h"

@interface TSWPShapeRep : TSDShapeRep <CALayerDelegate, TSDContainerRep, TSWPShapeLayoutDelegate>

 {
    BOOL _editingContainedRep;
    CALayer *_overflowGlyphLayer;
}


@property (readonly, nonatomic) TSWPRep *containedRep; // ivar: _containedRep
@property (readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canBeginEditingChildRepOnDoubleTap:(id)arg0 ;
-(BOOL)canSelectChildRep:(id)arg0 ;
-(BOOL)handleSingleTapAtPoint:(struct CGPoint )arg0 ;
-(BOOL)isDraggable;
-(BOOL)isEditingChildRep;
-(BOOL)isInvisible;
-(BOOL)mustDrawTilingLayerOnMainThread:(id)arg0 ;
-(BOOL)p_shouldShowTextOverflowGlyph;
-(BOOL)shapeLayoutShouldUpdateInstructionalText:(id)arg0 ;
-(BOOL)shouldIgnoreEditMenuTapAtPoint:(struct CGPoint )arg0 withRecognizer:(id)arg1 ;
-(BOOL)shouldShowKnobs;
-(BOOL)shouldShowSelectionHighlight;
-(BOOL)wantsToHandleTapsOnContainingGroup;
-(BOOL)wantsToHandleTapsWhenLocked;
-(CGFloat)pParagraphAlignmentOffset;
-(NSUInteger)enabledKnobMask;
-(id)actionForLayer:(id)arg0 forKey:(id)arg1 ;
-(id)additionalLayersOverLayer;
-(id)childReps;
-(id)hitRep:(struct CGPoint )arg0 ;
-(id)hitReps:(struct CGPoint )arg0 withSlop:(struct CGSize )arg1 ;
-(id)hyperlinkRegions;
-(id)initWithLayout:(id)arg0 canvas:(id)arg1 ;
-(id)overlayLayers;
-(id)p_overflowKnobImage;
-(int)dragTypeAtCanvasPoint:(struct CGPoint )arg0 ;
-(void)addAdditionalChildLayersToArray:(id)arg0 ;
-(void)dealloc;
-(void)p_resetOverflowGlyphLayerIfNecessary;
-(void)processChangedProperty:(int)arg0 ;
-(void)selectChildRep:(id)arg0 ;
-(void)shapeLayoutDidChangeContainedStorage:(id)arg0 ;
-(void)updateChildrenFromLayout;
-(void)willBeRemoved;
-(void)willBeginEditingContainedRep;
-(void)willEndEditingContainedRep;


@end


#endif