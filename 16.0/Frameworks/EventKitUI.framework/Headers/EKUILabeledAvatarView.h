// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKUILABELEDAVATARVIEW_H
#define EKUILABELEDAVATARVIEW_H

@class UIView, CNAvatarView, UIImageView, CNContact, UILabel, UIViewController;
@protocol EKUILabeledAvatarViewDelegate;



@interface EKUILabeledAvatarView : UIView

@property (retain) CNAvatarView *avatar; // ivar: _avatar
@property (retain) UIImageView *badge; // ivar: _badge
@property (nonatomic) NSUInteger badgeType; // ivar: _badgeType
@property (retain) CNContact *contact;
@property (weak, nonatomic) NSObject<EKUILabeledAvatarViewDelegate> *delegate; // ivar: _delegate
@property (retain) UILabel *label; // ivar: _label
@property NSUInteger labelPlacement; // ivar: _labelPlacement
@property (nonatomic) BOOL loadContactsAsynchronously; // ivar: _loadContactsAsynchronously
@property NSUInteger options; // ivar: _options
@property (retain) UIView *pressedAccentOverlay; // ivar: _pressedAccentOverlay
@property (nonatomic) NSUInteger selectionState; // ivar: _selectionState
@property (weak) UIViewController *viewController; // ivar: _viewController


+(id)_createAvatarView;
+(id)sortedAvatarListFromParticipants:(id)arg0 ;
-(id)init;
-(id)initWithContact:(id)arg0 placement:(NSUInteger)arg1 options:(NSUInteger)arg2 ;
-(id)initWithEmail:(id)arg0 fullName:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 placement:(NSUInteger)arg4 options:(NSUInteger)arg5 ;
-(id)initWithIdentity:(id)arg0 placement:(NSUInteger)arg1 options:(NSUInteger)arg2 ;
-(id)initWithPlacement:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
-(void)didLongPress;
-(void)didTap;
-(void)setup;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)updateAvatarViewWithAddress:(id)arg0 fullName:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 ;
-(void)updateLabel;
-(void)updateWithAddress:(id)arg0 fullName:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 ;
-(void)updateWithContacts:(id)arg0 ;
-(void)updateWithParticipant:(id)arg0 ;


@end


#endif