// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKDASHBOARDPICKERPLAYERCELL_H
#define GKDASHBOARDPICKERPLAYERCELL_H

@class UIView, NSString, NSLayoutConstraint, UILabel;


#import "GKFocusHighlightingCollectionViewCell.h"
#import "GKDashboardPlayerPhotoView.h"

@interface GKDashboardPickerPlayerCell : GKFocusHighlightingCollectionViewCell

@property (weak, nonatomic) UIView *backView; // ivar: _backView
@property (weak, nonatomic) UIView *bottomLine; // ivar: _bottomLine
@property (weak, nonatomic) UIView *container; // ivar: _container
@property (nonatomic) BOOL lineVisible;
@property (weak, nonatomic) UIView *monogramColorView; // ivar: _monogramColorView
@property (retain, nonatomic) NSString *originalSubtitle; // ivar: _originalSubtitle
@property (retain, nonatomic) GKDashboardPlayerPhotoView *playerView; // ivar: _playerView
@property (retain, nonatomic) NSLayoutConstraint *playerViewHeightConstraint; // ivar: _playerViewHeightConstraint
@property (weak, nonatomic) UIView *ringView; // ivar: _ringView
@property (nonatomic) BOOL selectable; // ivar: _selectable
@property (weak, nonatomic) UILabel *subtitle; // ivar: _subtitle
@property (weak, nonatomic) UILabel *title; // ivar: _title
@property (nonatomic) BOOL usesClearBackground; // ivar: _usesClearBackground


+(struct CGSize )defaultSize;
-(BOOL)canBecomeFocused;
-(void)awakeFromNib;
-(void)configureWithPlayer:(id)arg0 isCoreRecent:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)updateCellBackground;
-(void)updateLayerMask:(id)arg0 ;


@end


#endif