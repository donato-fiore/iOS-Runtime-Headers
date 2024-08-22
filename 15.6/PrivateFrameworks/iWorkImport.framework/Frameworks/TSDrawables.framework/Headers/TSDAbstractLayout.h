// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDABSTRACTLAYOUT_H
#define TSDABSTRACTLAYOUT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "TSDLayoutGeometry.h"
#import "TSDAbstractLayout.h"

@interface TSDAbstractLayout : NSObject {
    CGPoint _interimPosition;
    BOOL _interimPositionXSet;
    BOOL _interimPositionYSet;
    BOOL _lastInterimPositionXSet;
    BOOL _lastInterimPositionYSet;
}


@property (readonly, nonatomic) CGRect alignmentFrame;
@property (readonly, nonatomic) CGRect alignmentFrameForInlineLayout;
@property (readonly, nonatomic) CGRect alignmentFrameForInlineLayoutInRoot;
@property (readonly, nonatomic) CGRect alignmentFrameForProvidingGuidesInRoot;
@property (readonly, nonatomic) CGRect alignmentFrameInParent;
@property (readonly, nonatomic) CGRect alignmentFrameInRoot;
@property (readonly, nonatomic) CGPoint alignmentFrameOriginForFixingInterimPosition;
@property (readonly, nonatomic) UIEdgeInsets captionEdgeInsets;
@property (copy, nonatomic) NSArray *children; // ivar: _children
@property (readonly, nonatomic) CGRect clipRect;
@property (readonly, nonatomic) BOOL exclusivelyProvidesGuidesForChildLayouts;
@property (readonly, nonatomic) CGRect frame;
@property (readonly, nonatomic) CGRect frameForCulling;
@property (readonly, nonatomic) CGRect frameInParent;
@property (readonly, nonatomic) CGRect frameInRoot;
@property (copy, nonatomic) TSDLayoutGeometry *geometry; // ivar: _geometry
@property (readonly, nonatomic) TSDLayoutGeometry *geometryForTransforming;
@property (readonly, nonatomic) TSDLayoutGeometry *geometryInParent;
@property (readonly, nonatomic) TSDLayoutGeometry *geometryInRoot;
@property (readonly, nonatomic) CGRect insertionFrame;
@property (readonly, nonatomic) CGRect insertionFrameInRoot;
@property (nonatomic) CGFloat interimPositionX;
@property (nonatomic) CGFloat interimPositionY;
@property (readonly, nonatomic) BOOL isAxisAlignedUnflippedInRoot;
@property (readonly, nonatomic) BOOL isRootLayoutForInspectorGeometry;
@property (readonly, nonatomic) BOOL isRootLevelForInlineGeometry;
@property (readonly, nonatomic) CGPoint lastInterimPosition; // ivar: _lastInterimPosition
@property (readonly, nonatomic) NSArray *layoutsForProvidingGuidesForChildLayouts;
@property (nonatomic) TSDAbstractLayout *parent; // ivar: _parent
@property (readonly, nonatomic) TSDAbstractLayout *parentLayoutForProvidingGuides;
@property (readonly, nonatomic) CGPoint positionInRootForAttachmentPositioner;
@property (readonly, nonatomic) BOOL providesGuidesForChildLayouts;
@property (readonly, nonatomic) TSDAbstractLayout *root;
@property (readonly, nonatomic) BOOL shouldBeIncludedInParentFrameForCulling;
@property (readonly, nonatomic) BOOL shouldSnapWhileResizing;
@property (readonly, nonatomic) BOOL shouldUseCaptionEdgeInsetsInInterimPosition;
@property (readonly, nonatomic) BOOL supportsCalloutAttributes;
@property (readonly, nonatomic) BOOL supportsFlipping;
@property (readonly, nonatomic) BOOL supportsRotation;
@property (readonly, nonatomic) CGAffineTransform transform;
@property (readonly, nonatomic) CGAffineTransform transformForFindHighlightsInRoot;
@property (readonly, nonatomic) CGAffineTransform transformInParent;
@property (readonly, nonatomic) CGAffineTransform transformInRoot;
@property (readonly, nonatomic) NSArray *visibleGeometries;


-(BOOL)canRotateChildLayout:(id)arg0 ;
-(id)additionalDependenciesForChildLayout:(id)arg0 ;
-(id)childLayoutContainingPossibleDescendentLayout:(id)arg0 ;
-(id)geometryInRoot:(id)arg0 ;
-(id)init;
-(struct CGAffineTransform )transformForFindHighlightsOfChild:(id)arg0 ;
-(struct CGRect )clippedRectInRoot:(struct CGRect )arg0 ;
-(struct CGRect )rectInParent:(struct CGRect )arg0 ;
-(struct CGRect )rectInRoot:(struct CGRect )arg0 ;
-(struct CGRect )selectionHighlightFrameFittingParentWidthForChildWithFrame:(struct CGRect )arg0 ;
-(void)addChild:(id)arg0 ;
-(void)addLayoutsInRect:(struct CGRect )arg0 toArray:(id)arg1 deep:(BOOL)arg2 ;
-(void)dealloc;
-(void)exchangeChildAtIndex:(NSUInteger)arg0 withChildAtIndex:(NSUInteger)arg1 ;
-(void)fixTransformFromInterimPosition;
-(void)fixTransformFromLastInterimPosition;
-(void)insertChild:(id)arg0 above:(id)arg1 ;
-(void)insertChild:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertChild:(id)arg0 below:(id)arg1 ;
-(void)p_clearParentPointerForDealloc;
-(void)p_fixTransformFromInterimPosition:(struct CGPoint )arg0 interimPositionXSet:(BOOL)arg1 interimPositionYSet:(BOOL)arg2 ;
-(void)removeFromParent;
-(void)replaceChild:(id)arg0 with:(id)arg1 ;


@end


#endif