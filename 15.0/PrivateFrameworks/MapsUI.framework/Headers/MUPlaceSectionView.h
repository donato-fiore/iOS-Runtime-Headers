// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUPLACESECTIONVIEW_H
#define MUPLACESECTIONVIEW_H

@class UIView, UILayoutGuide, UIFocusGuide, NSString, NSArray;
@protocol MKActivityObserving, UIFocusItem;


#import "MUPlaceSectionHeaderView.h"
#import "MUHairlineView.h"
#import "MUPlaceSectionFooterViewModel.h"
#import "MUPlaceSectionHeaderViewModel.h"

@interface MUPlaceSectionView : UIView <MKActivityObserving>

 {
    MUPlaceSectionHeaderView *_headerView;
    UILayoutGuide *_contentLayoutGuide;
    UIFocusGuide *_contentFocusGuide;
    UIFocusGuide *_footerFocusGuide;
    id<UIFocusItem> *_lastFocusItem;
    MUHairlineView *_hairlineView;
    UIView *_footerView;
    BOOL _alwaysHideSeparators;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *focusItems; // ivar: _focusItems
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *footerViewModel; // ivar: _footerViewModel
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *headerViewModel; // ivar: _headerViewModel
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;


+(id)cardShadowSectionViewForContentView:(id)arg0 sectionHeaderViewModel:(id)arg1 ;
+(id)cardShadowSectionViewForContentView:(id)arg0 sectionHeaderViewModel:(id)arg1 sectionFooterViewModel:(id)arg2 ;
-(id)initWithStyle:(NSInteger)arg0 alwaysHideSeparators:(BOOL)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 alwaysHideSeparators:(BOOL)arg1 sectionHeaderViewModel:(id)arg2 sectionFooterViewModel:(id)arg3 ;
-(id)initWithStyle:(NSInteger)arg0 sectionHeaderViewModel:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 sectionHeaderViewModel:(id)arg1 sectionFooterViewModel:(id)arg2 ;
-(void)_setupConstraints;
-(void)_setupSubviews;
-(void)attachViewToContentView:(id)arg0 ;
-(void)beginAnimatingActivityIndicator;
-(void)configureWithSectionController:(id)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)endAnimatingActivityIndicatorWithError:(id)arg0 ;
-(void)hideBottomSeperator;


@end


#endif