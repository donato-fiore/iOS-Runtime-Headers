// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMCENROLLMENTTEMPLATETABLEVIEWCONTROLLER_H
#define DMCENROLLMENTTEMPLATETABLEVIEWCONTROLLER_H

@class UITableViewController, UILabel, UIView, NSMutableArray, UIVisualEffectView, NSArray, NSString;


#import "DMCEnrollmentTableViewIconCell.h"
#import "DMCEnrollmentTableViewTextCell.h"
#import "DMCEnrollmentTableViewTitleCell.h"

@interface DMCEnrollmentTemplateTableViewController : UITableViewController

@property (retain, nonatomic) UILabel *bannerLabel; // ivar: _bannerLabel
@property (retain, nonatomic) UIView *bottomContainerView; // ivar: _bottomContainerView
@property (retain, nonatomic) UIView *bottomView; // ivar: _bottomView
@property (retain, nonatomic) NSMutableArray *cellDataCollection; // ivar: _cellDataCollection
@property (retain, nonatomic) UIVisualEffectView *effectView; // ivar: _effectView
@property (retain, nonatomic) UIView *floatyBottomView; // ivar: _floatyBottomView
@property (nonatomic) CGFloat gapBetweenButtons; // ivar: _gapBetweenButtons
@property (nonatomic) NSUInteger headerSection; // ivar: _headerSection
@property (retain, nonatomic) DMCEnrollmentTableViewIconCell *iconCell; // ivar: _iconCell
@property (copy, nonatomic) NSArray *iconNames; // ivar: _iconNames
@property (nonatomic) BOOL inProgress; // ivar: _inProgress
@property (retain, nonatomic) DMCEnrollmentTableViewTextCell *subtitleCell; // ivar: _subtitleCell
@property (copy, nonatomic) NSString *subtitleText; // ivar: _subtitleText
@property (retain, nonatomic) DMCEnrollmentTableViewTitleCell *titleCell; // ivar: _titleCell
@property (copy, nonatomic) NSString *titleText; // ivar: _titleText


-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)_addCellDatas:(id)arg0 createNewSection:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSUInteger)addCellDatas:(id)arg0 animated:(BOOL)arg1 ;
-(NSUInteger)addSectionWithCellDatas:(id)arg0 animated:(BOOL)arg1 ;
-(SEL)_actionSelectorForBarButtonPosition:(NSUInteger)arg0 ;
-(id)initWithIconImages:(id)arg0 title:(id)arg1 subTitle:(id)arg2 ;
-(id)initWithIconNames:(id)arg0 title:(id)arg1 subTitle:(id)arg2 ;
-(id)initWithIconNames:(id)arg0 title:(id)arg1 subTitle:(id)arg2 bannerText:(id)arg3 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_addBottomView:(id)arg0 ;
-(void)_adjustFloatyViewFrameWithKeyboardFrame:(struct CGRect )arg0 animationDuration:(CGFloat)arg1 ;
-(void)_maskNavigationBar;
-(void)_setUpBackdrops;
-(void)_setupBannerViewWithText:(id)arg0 ;
-(void)_setupHeaderSectionWithIconNames:(id)arg0 iconImages:(id)arg1 title:(id)arg2 subTitle:(id)arg3 ;
-(void)_setupNotification;
-(void)_touchViewFrame:(id)arg0 ;
-(void)_updateEffectiveViewVisibility;
-(void)_updateFloatyViewForKeyboardFrame:(struct CGRect )arg0 duration:(CGFloat)arg1 ;
-(void)addBottomView:(id)arg0 ;
-(void)addCellDatas:(id)arg0 toSection:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(void)addFloatyBottomView:(id)arg0 ;
-(void)keyboardDidShow:(id)arg0 ;
-(void)keyboardWillHide:(id)arg0 ;
-(void)keyboardWillShow:(id)arg0 ;
-(void)leftBarButtonTapped:(id)arg0 ;
-(void)removeCellDatas:(id)arg0 fromSection:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(void)rightBarButtonTapped:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)updateContinueButtonStatus;
-(void)updateNavBarButtonType:(NSUInteger)arg0 forButtonPosition:(NSUInteger)arg1 enabled:(BOOL)arg2 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif