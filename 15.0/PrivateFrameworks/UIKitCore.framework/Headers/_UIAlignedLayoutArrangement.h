// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIALIGNEDLAYOUTARRANGEMENT_H
#define _UIALIGNEDLAYOUTARRANGEMENT_H

@class UILayoutArrangement, NSMutableDictionary, NSSet, NSString;
@protocol _UIALAPropertySource;



@interface _UIAlignedLayoutArrangement : UILayoutArrangement <_UIALAPropertySource>

 {
    NSMutableDictionary *_alignmentConstraints;
}


@property (readonly, nonatomic) NSSet *_newlyHiddenItems;
@property (readonly, nonatomic) NSSet *_newlyUnhiddenItems;
@property (nonatomic) NSUInteger alignment; // ivar: _alignment
@property (nonatomic) NSInteger axis;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *invalidBaselineConstraints;
@property (nonatomic) BOOL layoutFillsCanvas;
@property (nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling;
@property (readonly) Class superclass;


+(Class)_configurationHistoryClass;
-(BOOL)_canvasConnectionConstraintsNeedUpdatePass;
-(BOOL)_hasStaleConfiguration;
-(BOOL)_requiresNotificationForHasBaselinePropertyChanges;
-(BOOL)_spanningGuideConstraintsNeedUpdate;
-(BOOL)_usesCenteringConnectionConstraint;
-(BOOL)_usesInequalitySpanningConstraintForAttribute:(NSInteger)arg0 ;
-(BOOL)_wantsAmbiguitySuppressionConstraints;
-(BOOL)_wantsConstraintsForAttribute:(NSInteger)arg0 ;
-(BOOL)_wantsConstraintsUsingAttributesForAxis:(NSInteger)arg0 ;
-(NSInteger)_attributeForConstraintGroupName:(id)arg0 ;
-(NSInteger)_layoutRelationForCanvasConnectionForAttribute:(NSInteger)arg0 ;
-(NSUInteger)_indexOfItemForLocationAttribute:(NSInteger)arg0 ;
-(id)_baselineDependentConstraints;
-(id)_identifierForSpanningLayoutGuide;
-(id)initWithItems:(id)arg0 ;
-(void)_addConstraintGroupsAsNecessary;
-(void)_addIndividualConstraintsIfPossible;
-(void)_clearAllConstraintsArrays;
-(void)_removeConstraintGroupsAsNecessary;
-(void)_removeIndividualConstraintsAsNecessary;
-(void)_setUpConstraintForItem:(id)arg0 referenceItem:(id)arg1 attribute:(NSInteger)arg2 inConstraintsTable:(id)arg3 ;
-(void)_updateArrangementConstraints;
-(void)_updateConfigurationHistory;


@end


#endif