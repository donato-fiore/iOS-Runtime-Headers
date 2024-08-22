// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKTITLEDBUDDYVIEWCONTROLLER_H
#define HKTITLEDBUDDYVIEWCONTROLLER_H

@class UIScrollView, UIStackView, UIVisualEffectView, NSArray, NSString, UIActivityIndicatorView;
@protocol HKTitledBuddyHeaderViewDelegate;


#import "HKViewController.h"
#import "HKTitledLogoBuddyHeaderView.h"

@interface HKTitledBuddyViewController : HKViewController <HKTitledBuddyHeaderViewDelegate>

 {
    UIScrollView *_scrollView;
    UIStackView *_bodyStackView;
    UIVisualEffectView *_anchoredButtonContainerView;
    UIStackView *_containerStackView;
    HKTitledLogoBuddyHeaderView *_header;
    NSArray *_buttons;
    NSArray *_buttonStackConstraints;
}


@property (readonly, nonatomic) NSArray *buttons;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIActivityIndicatorView *loadingIndicator; // ivar: _loadingIndicator
@property (readonly) Class superclass;


+(id)embedView:(id)arg0 inContainerViewWithMinimumEdgeInsets:(struct UIEdgeInsets )arg1 ;
-(BOOL)shouldCustomizeNavigationBar;
-(BOOL)shouldHideNavigationBar;
-(NSInteger)bodyTextAlignment;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_createHeaderView;
-(id)bodyString;
-(id)bottomAnchoredButtons;
-(id)headerView;
-(id)init;
-(id)linkButtonTitle;
-(id)subsequentViews;
-(id)titleImage;
-(id)titleString;
-(void)_anchoredButtonTapped:(id)arg0 ;
-(void)_createAnchoredButtons;
-(void)_updateForCurrentSizeCategory;
-(void)buttonAtIndexTapped:(NSInteger)arg0 ;
-(void)linkButtonTapped:(id)arg0 ;
-(void)reloadViews;
-(void)titledBuddyHeaderViewDidTapLinkButton:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateBodyTextAttributesWithMutableString:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif