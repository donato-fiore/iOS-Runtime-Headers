// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKAVATARTITLECOLLECTIONREUSABLEVIEW_H
#define CKAVATARTITLECOLLECTIONREUSABLEVIEW_H

@class UICollectionReusableView, UIImageView, NSMutableArray;
@protocol CKAvatarTitleCollectionReusableViewDelegate;


#import "CKLabel.h"

@interface CKAvatarTitleCollectionReusableView : UICollectionReusableView

@property (nonatomic, getter=isAvatarPickerActive) BOOL avatarPickerActive; // ivar: _avatarPickerActive
@property (nonatomic) NSInteger avatarTitleAccessoryImageType; // ivar: _avatarTitleAccessoryImageType
@property (nonatomic, getter=isChevronHidden) BOOL chevronHidden; // ivar: _chevronHidden
@property (retain, nonatomic) UIImageView *chevronImageView; // ivar: _chevronImageView
@property (weak, nonatomic) NSObject<CKAvatarTitleCollectionReusableViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSMutableArray *pendingTitles; // ivar: _pendingTitles
@property (retain, nonatomic) UIImageView *statusIndicatorImageView; // ivar: _statusIndicatorImageView
@property (nonatomic) NSInteger statusIndicatorType; // ivar: _statusIndicatorType
@property (nonatomic) NSInteger style; // ivar: _style
@property (retain, nonatomic) CKLabel *titleLabel; // ivar: _titleLabel


+(id)reuseIdentifier;
+(id)supplementaryViewKind;
-(BOOL)isLTR;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_animateFromQueue;
-(void)_rotateChevronImageView;
-(void)configureChevronImageView;
-(void)configureWithTitle:(id)arg0 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg0 animated:(BOOL)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif