// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKAUTHORIZATIONPANEVIEWCONTROLLER_H
#define AKAUTHORIZATIONPANEVIEWCONTROLLER_H

@class UIViewController, UIVisualEffectView, NSString, NSLayoutConstraint, NSMutableArray, UIStackView, UITableView;
@protocol UITableViewDataSource, UITableViewDelegate, AKAuthorizationEditableDataSources, AKAuthorizationPaneDelegate;


#import "AKAuthorizationPaneContext.h"

@interface AKAuthorizationPaneViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>



@property (retain, nonatomic) UIVisualEffectView *blurryTray; // ivar: _blurryTray
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<AKAuthorizationEditableDataSources> *editableDataSources; // ivar: _editableDataSources
@property (retain, nonatomic) AKAuthorizationPaneContext *footerPaneContext; // ivar: _footerPaneContext
@property (readonly, nonatomic) NSLayoutConstraint *footerWidthConstraint; // ivar: _footerWidthConstraint
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AKAuthorizationPaneContext *headerPaneContext; // ivar: _headerPaneContext
@property (readonly, nonatomic) NSLayoutConstraint *headerWidthConstraint; // ivar: _headerWidthConstraint
@property (readonly, nonatomic) BOOL isWristDetectionEnabled; // ivar: _isWristDetectionEnabled
@property (retain, nonatomic) NSMutableArray *mutableConstraints; // ivar: _mutableConstraints
@property (weak, nonatomic) NSObject<AKAuthorizationPaneDelegate> *paneDelegate; // ivar: _paneDelegate
@property (readonly, nonatomic) UIStackView *paneFooterStackView; // ivar: _paneFooterStackView
@property (readonly, nonatomic) UIStackView *paneHeaderStackView; // ivar: _paneHeaderStackView
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


-(BOOL)_isContentUnderNavigationBar;
-(BOOL)_isContentUnderTray;
-(BOOL)_shouldEmbedContentTray;
-(BOOL)shouldEmbedContentTrayIfNeeded;
-(CGFloat)_contentTrayOffsetAdjustedForScrollInset:(BOOL)arg0 ;
-(CGFloat)_deviceSafeAreaBottomInset;
-(CGFloat)_navigationBarHeaderHeight;
-(CGFloat)contentScrollOffset;
-(CGFloat)intrinsicContentHeight;
-(CGFloat)maximumContentHeight;
-(CGFloat)maximumContentWidth;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)_safeIndexWithCount:(NSInteger)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_indexPathForLastRow;
-(id)_newContainerView;
-(id)_newStackView;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_adjustForPositionOfScrollView:(id)arg0 ;
-(void)_configureContentTrayIfNeeded;
-(void)_setCompressedHeightForView:(id)arg0 ;
-(void)_setupContexts;
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