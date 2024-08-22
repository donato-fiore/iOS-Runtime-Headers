// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCREDENTIALREQUESTPANEVIEWCONTROLLER_H
#define ASCREDENTIALREQUESTPANEVIEWCONTROLLER_H

@class UIViewController, UIVisualEffectView, NSLayoutConstraint, NSString, UIStackView, UITableView;
@protocol UITableViewDelegate, ASCredentialRequestPaneViewControllerDelegate;


#import "ASCredentialRequestPaneContext.h"

@interface ASCredentialRequestPaneViewController : UIViewController <UITableViewDelegate>

 {
    BOOL _isTableViewRequired;
    UIVisualEffectView *_blurryTray;
    NSLayoutConstraint *_headerWidthConstraint;
    NSLayoutConstraint *_footerWidthConstraint;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ASCredentialRequestPaneViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) ASCredentialRequestPaneContext *footerPaneContext; // ivar: _footerPaneContext
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ASCredentialRequestPaneContext *headerPaneContext; // ivar: _headerPaneContext
@property (readonly, nonatomic) NSInteger numberOfTableRows;
@property (readonly, nonatomic) UIStackView *paneFooterStackView; // ivar: _paneFooterStackView
@property (readonly, nonatomic) UIStackView *paneHeaderStackView; // ivar: _paneHeaderStackView
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


-(BOOL)_isContentUnderTray;
-(CGFloat)_blurryTrayMinimumHeight;
-(CGFloat)_intrinsicContentHeight;
-(CGFloat)_maximumContentHeight;
-(CGFloat)_navigationBarHeaderHeight;
-(NSInteger)_safeIndexWithCount:(NSInteger)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_indexPathForLastRow;
-(id)_newContainerView;
-(id)_newStackView;
-(id)initRequiringTableView:(BOOL)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_adjustForPositionOfScrollView:(id)arg0 ;
-(void)_setCompressedHeightForView:(id)arg0 ;
-(void)_setUpContexts;
-(void)_updateBlurForTray;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)sizeToFitPaneContent;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif