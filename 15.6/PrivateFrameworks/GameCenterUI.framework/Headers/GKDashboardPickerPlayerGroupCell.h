// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKDASHBOARDPICKERPLAYERGROUPCELL_H
#define GKDASHBOARDPICKERPLAYERGROUPCELL_H

@class UICollectionViewCell, UIView, UIImageView, UILongPressGestureRecognizer, NSString, UILabel;
@protocol GKDashboardPickerPlayerGroupCellDelegate;


#import "_TtC12GameCenterUI17GKPlayerGroupView.h"

@interface GKDashboardPickerPlayerGroupCell : UICollectionViewCell

@property (weak, nonatomic) UIView *bottomLine; // ivar: _bottomLine
@property (nonatomic) BOOL canExpand; // ivar: _canExpand
@property (weak, nonatomic) UIImageView *checkmark; // ivar: _checkmark
@property (weak, nonatomic) UIView *container; // ivar: _container
@property (weak, nonatomic) NSObject<GKDashboardPickerPlayerGroupCellDelegate> *groupCellDelegate; // ivar: _groupCellDelegate
@property (weak, nonatomic) UIView *iconContainer; // ivar: _iconContainer
@property (nonatomic) BOOL lineVisible;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer; // ivar: _longPressRecognizer
@property (weak, nonatomic) UIImageView *messageIcon; // ivar: _messageIcon
@property (retain, nonatomic) NSString *originalSubtitle; // ivar: _originalSubtitle
@property (retain, nonatomic) _TtC12GameCenterUI17GKPlayerGroupView *playerGroupView; // ivar: _playerGroupView
@property (weak, nonatomic) UIView *ringView; // ivar: _ringView
@property (retain, nonatomic) NSString *searchText; // ivar: _searchText
@property (weak, nonatomic) UILabel *subtitle; // ivar: _subtitle
@property (weak, nonatomic) UILabel *title; // ivar: _title
@property (nonatomic) BOOL usesClearBackground; // ivar: _usesClearBackground


+(id)reuseIdentifier;
+(id)reuseIdentifierAX;
+(struct CGSize )defaultSize;
-(BOOL)canBecomeFocused;
-(void)awakeFromNib;
-(void)configureWithPlayers:(id)arg0 title:(id)arg1 subtitle:(id)arg2 messagesGroupIdentifier:(id)arg3 source:(NSInteger)arg4 playerSelectionProxy:(id)arg5 ;
-(void)dealloc;
-(void)handleLongPress:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)updateCellBackground;
-(void)updateLayerMask:(id)arg0 ;
-(void)updateTitleForSearchText;


@end


#endif