// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CCUICUSTOMCONTENTMODULEBACKGROUNDVIEWCONTROLLER_H
#define CCUICUSTOMCONTENTMODULEBACKGROUNDVIEWCONTROLLER_H

@class UIViewController, UILabel, UIImageView, NSMutableDictionary, NSArray, UIView, NSString;
@protocol CCUIContentModuleBackgroundViewController;


#import "CCUICAPackageView.h"

@interface CCUICustomContentModuleBackgroundViewController : UIViewController <CCUIContentModuleBackgroundViewController>

 {
    UILabel *_headerTitleLabel;
    UIImageView *_headerImageView;
    CCUICAPackageView *_packageView;
    NSMutableDictionary *_categoriesToVisualStylingProviders;
    NSArray *_footerButtons;
    UIView *_customHeaderView;
    UIView *_customFooterView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat expandedContentModuleHeight; // ivar: _expandedContentModuleHeight
@property (nonatomic) CGFloat expandedContentModuleWidth; // ivar: _expandedContentModuleWidth
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL positionHeaderToRightInLandscapeRight; // ivar: _positionHeaderToRightInLandscapeRight
@property (readonly) Class superclass;


-(BOOL)_shouldLimitContentSizeCategory;
-(id)_titleFont;
-(id)requiredVisualStyleCategories;
-(id)visualStylingProviderForCategory:(NSInteger)arg0 ;
-(struct CGPoint )_footerCenterForBounds:(struct CGRect )arg0 ;
-(struct CGPoint )_headerCenterForBounds:(struct CGRect )arg0 ;
-(struct CGRect )effectiveContentFrameForContainerFrame:(struct CGRect )arg0 ;
-(void)_contentSizeCategoryDidChange;
-(void)_updateCustomFooterViewLayoutIfNecessary;
-(void)_updateCustomHeaderViewLayoutIfNecessary;
-(void)_updateFooterButtonsLayoutIfNecessary;
-(void)_updateHeaderGlyphVisualStylingWithProvider:(id)arg0 ;
-(void)_updateHeaderLayoutIfNecessary;
-(void)_updateTitleFont;
-(void)_visualStylingProvider:(id)arg0 didChangeForCategory:(NSInteger)arg1 outgoingVisualStylingProvider:(id)arg2 ;
-(void)setCustomFooterView:(id)arg0 ;
-(void)setCustomHeaderView:(id)arg0 ;
-(void)setFooterButtons:(id)arg0 ;
-(void)setGlyphImage:(id)arg0 ;
-(void)setGlyphPackageDescription:(id)arg0 ;
-(void)setGlyphState:(id)arg0 ;
-(void)setHeaderGlyphImage:(id)arg0 ;
-(void)setHeaderGlyphPackageDescription:(id)arg0 ;
-(void)setHeaderGlyphState:(id)arg0 ;
-(void)setHeaderTitle:(id)arg0 ;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;


@end


#endif