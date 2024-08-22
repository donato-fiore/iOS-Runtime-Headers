// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UILAYOUTARRANGEMENT_H
#define _UILAYOUTARRANGEMENT_H

@class NSMutableSet, NSMutableArray, NSSet, NSString, NSArray;
@protocol _UILAPropertySource;

#import <Foundation/Foundation.h>

#import "_UILAConfigurationHistory.h"
#import "_UILayoutSpacer.h"
#import "UIView.h"

@interface _UILayoutArrangement : NSObject <_UILAPropertySource>

 {
    NSMutableSet *_incomingItems;
    NSMutableSet *_outgoingItems;
    NSMutableSet *_hiddenItems;
    NSMutableSet *_newlyHiddenItems;
    NSMutableSet *_newlyUnhiddenItems;
    NSMutableArray *_canvasConnectionConstraints;
}


@property (readonly, nonatomic) BOOL _awaitingAnimationLayoutPass; // ivar: _awaitingAnimationLayoutPass
@property (readonly, retain, nonatomic) _UILAConfigurationHistory *_configurationHistory; // ivar: _configurationHistory
@property (readonly, nonatomic) NSSet *_hiddenItems;
@property (readonly, nonatomic) NSSet *_incomingItems;
@property (retain, nonatomic, setter=_setMutableItems:) NSMutableArray *_mutableItems; // ivar: _mutableItems
@property (readonly, nonatomic) NSSet *_newlyHiddenItems;
@property (readonly, nonatomic) NSSet *_newlyUnhiddenItems;
@property (readonly, nonatomic) NSSet *_outgoingItems;
@property (readonly, nonatomic) NSObject<_UILAPropertySource> *_propertySource;
@property (readonly, retain, nonatomic) _UILayoutSpacer *_spanningLayoutGuide; // ivar: _spanningLayoutGuide
@property (retain, nonatomic, setter=_setUnanimatedConfigurationTarget:) _UILAConfigurationHistory *_unanimatedConfigurationTarget; // ivar: _unanimatedConfigurationTarget
@property (nonatomic) NSInteger axis; // ivar: _axis
@property (weak, nonatomic) UIView *canvas; // ivar: _canvas
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *invalidBaselineConstraints; // ivar: _invalidBaselineConstraints
@property (readonly, copy, nonatomic) NSArray *items;
@property (nonatomic) BOOL layoutFillsCanvas; // ivar: _layoutFillsCanvas
@property (nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling; // ivar: _layoutUsesCanvasMarginsWhenFilling
@property (readonly) Class superclass;


-(BOOL)_allItemsHidden;
-(BOOL)_configurationRequiresCanvasConnectionFittingConstraint;
-(BOOL)_hasStaleConfiguration;
-(BOOL)_itemWantsLayoutAsIfVisible:(id)arg0 ;
-(BOOL)_monitorsSystemLayoutFittingSizeForItem:(id)arg0 ;
-(BOOL)_requiresNotificationForHasBaselinePropertyChanges;
-(BOOL)_spanningGuideConstraintsNeedUpdate;
-(BOOL)_usesCenteringConnectionConstraint;
-(BOOL)_usesInequalitySpanningConstraintForAttribute:(NSInteger)arg0 ;
-(NSInteger)_centerAttributeForCanvasConnections;
-(NSInteger)_dimensionAttributeForCurrentAxis;
-(NSInteger)_layoutRelationForCanvasConnectionForAttribute:(NSInteger)arg0 ;
-(NSInteger)_minAttributeForCanvasConnections;
-(NSUInteger)_indexOfItemForLocationAttribute:(NSInteger)arg0 ;
-(id)_baselineDependentConstraints;
-(id)_identifierForSpanningLayoutGuide;
-(id)_viewOrGuideForLocationAttribute:(NSInteger)arg0 ;
-(id)init;
-(id)initWithItems:(id)arg0 ;
-(id)initWithItems:(id)arg0 onAxis:(NSInteger)arg1 ;
-(void)_clearAllConstraintsArrays;
-(void)_clearCanvasConnectionConstraints;
-(void)_createSpanningLayoutGuide;
-(void)_createUnanimatedConfigurationTargetIfNecessary;
-(void)_didEvaluateMultilineHeightForView:(id)arg0 ;
-(void)_hasBaselineChangedNotification:(id)arg0 ;
-(void)_hasBaselineChangedNotificationRequirementDidChange;
-(void)_intrinsicContentSizeInvalidatedForItem:(id)arg0 ;
-(void)_invalidateBaselineConstraint:(id)arg0 ;
-(void)_registerAnimationRequest;
-(void)_removeSpanningLayoutGuide;
-(void)_respondToChangesWithIncomingItem:(id)arg0 outgoingItem:(id)arg1 newlyHiddenItem:(id)arg2 newlyUnhiddenItem:(id)arg3 ;
-(void)_systemLayoutFittingSizeDidChangeForItem:(id)arg0 ;
-(void)_trackChangesWithConfigBlock:(id)arg0 ;
-(void)_updateArrangementConstraints;
-(void)_updateCanvasConnectionConstraintsIfNecessary;
-(void)_updateConfigurationHistory;
-(void)_updateSpanningLayoutGuideConstraintsIfNecessary;
-(void)_visibilityParameterChangedForItem:(id)arg0 ;
-(void)addItem:(id)arg0 ;
-(void)insertItem:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)removeItem:(id)arg0 ;


@end


#endif