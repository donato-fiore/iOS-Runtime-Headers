// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISEARCHBARSEARCHCONTAINERLAYOUT_H
#define _UISEARCHBARSEARCHCONTAINERLAYOUT_H

@class UISearchBarLayoutBase;
@protocol _UISearchBarContainerSublayoutDelegate;


#import "UIView.h"
#import "UISearchBarTextField.h"

@interface _UISearchBarSearchContainerLayout : UISearchBarLayoutBase {
    ? _searchContainerLayoutFlags;
    CGFloat _searchFieldForegroundFadeAlpha;
    CGFloat _searchFieldBackgroundFadeAlpha;
}


@property (nonatomic) CGFloat additionalPaddingForCancelButtonAtLeadingEdge; // ivar: _additionalPaddingForCancelButtonAtLeadingEdge
@property (nonatomic) CGFloat additionalPaddingForSearchFieldAtLeadingEdge; // ivar: _additionalPaddingForSearchFieldAtLeadingEdge
@property (nonatomic) BOOL allowSearchFieldShrinkage;
@property (retain, nonatomic) UIView *cancelButton; // ivar: _cancelButton
@property (readonly, nonatomic) CGRect cancelButtonLayoutFrame; // ivar: _cancelButtonLayoutFrame
@property (weak, nonatomic) NSObject<_UISearchBarContainerSublayoutDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) id *delegateSearchFieldFrameForProposedFrame; // ivar: _delegateSearchFieldFrameForProposedFrame
@property (retain, nonatomic) UIView *deleteButton; // ivar: _deleteButton
@property (readonly, nonatomic) CGRect deleteButtonLayoutFrame; // ivar: _deleteButtonLayoutFrame
@property (nonatomic) BOOL hasCancelButton;
@property (nonatomic) BOOL hasDeleteButton;
@property (nonatomic) BOOL hasLeftButton;
@property (copy, nonatomic) id *layoutCustomizationDelegateSearchFieldContainerWillLayoutSubviewsCallback; // ivar: _layoutCustomizationDelegateSearchFieldContainerWillLayoutSubviewsCallback
@property (retain, nonatomic) UIView *leftButton; // ivar: _leftButton
@property (readonly, nonatomic) CGRect leftButtonLayoutFrame; // ivar: _leftButtonLayoutFrame
@property (readonly, nonatomic) CGFloat naturalBarHeight;
@property (readonly, nonatomic) CGFloat naturalSearchFieldHeight;
@property (nonatomic) CGFloat searchBarReadableWidth; // ivar: _searchBarReadableWidth
@property (retain, nonatomic) UISearchBarTextField *searchField; // ivar: _searchField
@property (nonatomic) UIOffset searchFieldBackgroundPositionAdjustment; // ivar: _searchFieldBackgroundPositionAdjustment
@property (nonatomic) BOOL searchFieldEffectivelySupportsDynamicType;
@property (readonly, nonatomic) CGRect searchFieldLayoutFrame; // ivar: _searchFieldLayoutFrame
@property (nonatomic) BOOL searchFieldRespectsReadableWidth;
@property (nonatomic) BOOL searchFieldUsesCustomBackgroundImage;
@property (readonly, nonatomic) BOOL searchFieldWidthIsReduced;
@property (readonly, nonatomic) CGRect visibleCancelButtonSearchFieldLayoutFrame; // ivar: _visibleCancelButtonSearchFieldLayoutFrame


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)applyLayout;
-(void)sendWillLayoutSubviewsForSearchFieldContainerView:(id)arg0 ;
-(void)updateLayout;


@end


#endif