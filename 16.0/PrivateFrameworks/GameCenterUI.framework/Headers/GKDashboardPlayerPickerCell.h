// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKDASHBOARDPLAYERPICKERCELL_H
#define GKDASHBOARDPLAYERPICKERCELL_H

@class NSLayoutConstraint, UIView, UIButton, UIImageView;


#import "GKDashboardPlayerCell.h"

@interface GKDashboardPlayerPickerCell : GKDashboardPlayerCell

@property (weak, nonatomic) NSLayoutConstraint *nameConstraint; // ivar: _nameConstraint
@property (nonatomic) CGFloat nameInitialConstant; // ivar: _nameInitialConstant
@property (weak, nonatomic) UIView *ringView; // ivar: _ringView
@property (nonatomic, getter=isSelectable) BOOL selectable; // ivar: _selectable
@property (weak, nonatomic) UIButton *selectionButton; // ivar: _selectionButton
@property (weak, nonatomic) NSLayoutConstraint *selectionHorizontalConstraint; // ivar: _selectionHorizontalConstraint
@property (nonatomic) CGFloat selectionInitialHorizontalConstant; // ivar: _selectionInitialHorizontalConstant
@property (nonatomic) CGFloat selectionInitialVerticalConstant; // ivar: _selectionInitialVerticalConstant
@property (weak, nonatomic) NSLayoutConstraint *selectionVerticalConstraint; // ivar: _selectionVerticalConstraint
@property (weak, nonatomic) UIImageView *selectionView; // ivar: _selectionView
@property (nonatomic) BOOL showsLastPlayedStatusText; // ivar: _showsLastPlayedStatusText
@property (nonatomic) BOOL showsMessagesHandleInStatusText; // ivar: _showsMessagesHandleInStatusText
@property (weak, nonatomic) NSLayoutConstraint *statusHeightConstraint; // ivar: _statusHeightConstraint
@property (nonatomic) CGFloat statusInitialConstant; // ivar: _statusInitialConstant


+(struct CGSize )defaultSize;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)awakeFromNib;
-(void)setPlayer:(id)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setStatusText:(id)arg0 ;
-(void)setStatusWithAchievementEarnedPoints:(NSInteger)arg0 andDate:(id)arg1 ;


@end


#endif