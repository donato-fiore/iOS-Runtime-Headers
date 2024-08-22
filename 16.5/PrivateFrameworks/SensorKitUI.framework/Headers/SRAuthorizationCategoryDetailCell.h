// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SRAUTHORIZATIONCATEGORYDETAILCELL_H
#define SRAUTHORIZATIONCATEGORYDETAILCELL_H

@class UITableViewCell, UILabel, UIStackView, UIFont, NSArray, UIColor;



@interface SRAuthorizationCategoryDetailCell : UITableViewCell

@property (nonatomic) BOOL OBKStyle; // ivar: _OBKStyle
@property (readonly, nonatomic) UILabel *appUsageBodyLabel; // ivar: _appUsageBodyLabel
@property (retain, nonatomic) UIStackView *appUsageStack; // ivar: _appUsageStack
@property (readonly, nonatomic) UILabel *appUsageTitleLabel; // ivar: _appUsageTitleLabel
@property (retain, nonatomic) UIFont *bodyFont; // ivar: _bodyFont
@property (retain, nonatomic) UIStackView *categoryStack; // ivar: _categoryStack
@property (readonly, nonatomic) UILabel *categorySubTitleLabel; // ivar: _categorySubTitleLabel
@property (readonly, nonatomic) UILabel *categoryTitleLabel; // ivar: _categoryTitleLabel
@property (retain, nonatomic) NSArray *collectedLabels; // ivar: _collectedLabels
@property (readonly, nonatomic) UILabel *collectedTitleLabel; // ivar: _collectedTitleLabel
@property (retain, nonatomic) UIColor *fontColor; // ivar: _fontColor
@property (retain, nonatomic) NSArray *notCollectedLabels; // ivar: _notCollectedLabels
@property (readonly, nonatomic) UILabel *notCollectedTitleLabel; // ivar: _notCollectedTitleLabel
@property (nonatomic) NSInteger numberOfCollectedLabels; // ivar: _numberOfCollectedLabels
@property (nonatomic) NSInteger numberOfNotCollectedLabels; // ivar: _numberOfNotCollectedLabels
@property (nonatomic) NSInteger numberOfWhenSharedLabels; // ivar: _numberOfWhenSharedLabels
@property (nonatomic) BOOL showAppUsage; // ivar: _showAppUsage
@property (retain, nonatomic) UIStackView *stacks; // ivar: _stacks
@property (retain, nonatomic) UIFont *titleFont; // ivar: _titleFont
@property (retain, nonatomic) NSArray *whenSharedLabels; // ivar: _whenSharedLabels
@property (readonly, nonatomic) UILabel *whenSharedTitleLabel; // ivar: _whenSharedTitleLabel


+(id)categoryDetailCellForAuthGroup:(id)arg0 bundle:(id)arg1 titleFont:(id)arg2 bodyFont:(id)arg3 textColor:(id)arg4 OBKStyle:(BOOL)arg5 ;
-(id)addBulletStackViewForTitleLabel:(id)arg0 count:(NSInteger)arg1 ;
-(id)dynamicHeightLabel;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 titleFont:(id)arg2 bodyFont:(id)arg3 fontColor:(id)arg4 OBKStyle:(BOOL)arg5 ;
-(id)stackViewForSubviews:(id)arg0 spacing:(CGFloat)arg1 ;
-(void)dealloc;


@end


#endif