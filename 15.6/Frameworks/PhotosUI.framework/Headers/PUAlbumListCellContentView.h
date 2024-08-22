// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUALBUMLISTCELLCONTENTVIEW_H
#define PUALBUMLISTCELLCONTENTVIEW_H

@class UIView, PXUIButton, UILabel, UITextField, NSString, PXFocusInfo, UIFont;
@protocol UITextFieldDelegate, UIGestureRecognizerDelegate, PUAlbumListCellDelegate;


#import "PUPeopleAvatarView.h"
#import "PUStackView.h"

@interface PUAlbumListCellContentView : UIView <UITextFieldDelegate, UIGestureRecognizerDelegate>



@property (retain, nonatomic, setter=_setDeleteButton:) PXUIButton *_deleteButton; // ivar: __deleteButton
@property (nonatomic, setter=_setShowsTitleAndSubtitle:) BOOL _showsTitleAndSubtitle; // ivar: __showsTitleAndSubtitle
@property (retain, nonatomic, setter=_setSubtitleLabel:) UILabel *_subtitleLabel; // ivar: __subtitleLabel
@property (retain, nonatomic, setter=_setTitleLabel:) UILabel *_titleLabel; // ivar: __titleLabel
@property (retain, nonatomic, setter=_setTitleTextField:) UITextField *_titleTextField; // ivar: __titleTextField
@property (retain, nonatomic) PUPeopleAvatarView *avatarView; // ivar: _avatarView
@property (nonatomic) BOOL combinesPhotoDecorations; // ivar: _combinesPhotoDecorations
@property (retain, nonatomic) UIView *customImageView; // ivar: _customImageView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUAlbumListCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger editCapabilities; // ivar: _editCapabilities
@property (nonatomic, getter=isEditing) BOOL editing; // ivar: _editing
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) PXFocusInfo *focusInfo;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (nonatomic) NSInteger layout; // ivar: _layout
@property (nonatomic) BOOL shouldCenterTextHorizontally; // ivar: _shouldCenterTextHorizontally
@property (nonatomic) BOOL showsAvatarView; // ivar: _showsAvatarView
@property (nonatomic) BOOL showsDeleteButtonWhenEditing; // ivar: _showsDeleteButtonWhenEditing
@property (readonly, nonatomic) UIView *springLoadingTargetView;
@property (retain, nonatomic, setter=_setStackView:) PUStackView *stackView; // ivar: _stackView
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) UIFont *subtitleFont; // ivar: _subtitleFont
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UIFont *titleFont; // ivar: _titleFont
@property (nonatomic) BOOL topInsetEnabled; // ivar: _topInsetEnabled
@property (nonatomic) BOOL usesLabelForTitle; // ivar: _usesLabelForTitle
@property (nonatomic) CGFloat xInset; // ivar: _xInset


-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg0 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(NSInteger)_titleTextFieldClearButtonModeForLayout:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_deleteAction:(id)arg0 ;
-(void)_updateAvatarView;
-(void)_updateDeleteButtonAnimated:(BOOL)arg0 ;
-(void)_updateStackViewAnimated:(BOOL)arg0 ;
-(void)_updateSubtitleLabelAnimated:(BOOL)arg0 ;
-(void)_updateSubviewOrdering;
-(void)_updateTitleFieldAnimated:(BOOL)arg0 ;
-(void)_updateTitleStyle;
-(void)handleLabelTap:(id)arg0 ;
-(void)handleTransitionFade:(BOOL)arg0 animate:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)setShowsTitle:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)textFieldDidEndEditing:(id)arg0 ;


@end


#endif