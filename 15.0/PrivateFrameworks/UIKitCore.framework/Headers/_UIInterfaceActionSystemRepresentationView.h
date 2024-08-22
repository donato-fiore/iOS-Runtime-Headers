// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIINTERFACEACTIONSYSTEMREPRESENTATIONVIEW_H
#define _UIINTERFACEACTIONSYSTEMREPRESENTATIONVIEW_H

@class NSString, NSSet, NSArray;
@protocol UIInterfaceActionDisplayPropertyObserver;


#import "UIInterfaceActionRepresentationView.h"
#import "_UIInterfaceActionLabelsPropertyView.h"
#import "_UIInterfaceActionImagePropertyView.h"

@interface _UIInterfaceActionSystemRepresentationView : UIInterfaceActionRepresentationView <UIInterfaceActionDisplayPropertyObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSSet *displayedViews; // ivar: _displayedViews
@property (readonly, nonatomic) NSArray *displayedViewsPositioningConstraints; // ivar: _displayedViewsPositioningConstraints
@property (readonly, nonatomic) NSArray *displayedViewsSpacingConstraints; // ivar: _displayedViewsSpacingConstraints
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _UIInterfaceActionLabelsPropertyView *labelsView; // ivar: _labelsView
@property (readonly, nonatomic) _UIInterfaceActionImagePropertyView *leadingImageView; // ivar: _leadingImageView
@property (readonly) Class superclass;
@property (readonly, nonatomic) _UIInterfaceActionImagePropertyView *trailingImageView; // ivar: _trailingImageView
@property (retain, nonatomic) NSSet *viewsToDisplayWhenContentsVisible; // ivar: _viewsToDisplayWhenContentsVisible


-(BOOL)_hasLoadedContents;
-(BOOL)_isDisplayingLeadingImageView;
-(BOOL)_isDisplayingTrailingImageView;
-(id)_constraintForBaselineAligningOrVerticallyCenteringImageViewToLabelsView:(id)arg0 ;
-(id)_constraintForVerticallyCenteringLabelsView;
-(id)_constraintsForHorizontallyCenteringLabelsView;
-(id)_constraintsForInsettingImageViewsLeadingAndTrailingEdge;
-(id)_constraintsForInsettingLabelsViewLeadingAndTrailing;
-(id)_constraintsForInsettingLabelsViewLeadingAndTrailingHorizontalEdgeReferenceExact:(BOOL)arg0 ;
-(id)_constraintsForInsettingLabelsViewLeadingAndTrailingToImageViewsExact:(BOOL)arg0 ;
-(id)_constraintsToEnsureContainerHeightTallEnoughForViews:(id)arg0 ;
-(id)_horizontalEdgeReference;
-(id)initWithAction:(id)arg0 ;
-(void)_activateDisplayedViewsConstraints;
-(void)_applyVisualStyle;
-(void)_applyVisualStyleToDisplayedViews;
-(void)_arrangeDisplayedViews;
-(void)_invalidateDisplayedViewsConstraints;
-(void)_loadConstraintsForDisplayedViews;
-(void)_loadConstraintsForLabelsAndImagesDisplay;
-(void)_loadConstraintsForLabelsOnlyDisplay;
-(void)_reloadHierarchyWithViewsToDisplayWhenContentsVisible;
-(void)_reloadViewsToDisplayWhenContentsVisible;
-(void)_removeAllDisplayedViews;
-(void)_updateDisplayedViewsConstraintsVisualStyleConstants;
-(void)interfaceAction:(id)arg0 reloadDisplayedContentActionProperties:(id)arg1 ;
-(void)interfaceAction:(id)arg0 reloadDisplayedContentVisualStyle:(id)arg1 ;
-(void)loadContents;
-(void)updateConstraints;
-(void)updateContentsInsertedIntoHierarchy;


@end


#endif