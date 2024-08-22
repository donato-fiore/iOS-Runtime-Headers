// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKNICKNAMEBANNERVIEW_H
#define CKNICKNAMEBANNERVIEW_H

@class NSString, NSArray, UIButton;
@protocol UITextViewDelegate, CKNicknameBannerViewDelegate;


#import "CKUpdateBannerView.h"

@interface CKNicknameBannerView : CKUpdateBannerView <UITextViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKNicknameBannerViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *nicknameUpdates; // ivar: _nicknameUpdates
@property (readonly) Class superclass;
@property (retain, nonatomic) UIButton *updateButton; // ivar: _updateButton


-(BOOL)_allowUpdateForStyle:(NSUInteger)arg0 ;
-(BOOL)isLTR;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(CGFloat)maxLabelWidthForSize:(struct CGSize )arg0 ;
-(CGFloat)titleLabelAlignmentX;
-(id)_avatarContactForUpdate:(id)arg0 ;
-(id)actionButtonString;
-(id)attributedSubtitleTextBasedOnBannerStyle:(NSUInteger)arg0 ;
-(id)cancelGlyph;
-(id)catalystAttributedSubtitleTextBasedOnBannerStyle:(NSUInteger)arg0 ;
-(id)contactStore;
-(id)createContactForOutgoingShare;
-(id)createContactFromNickname:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSUInteger)arg1 updates:(id)arg2 useNamedTitles:(BOOL)arg3 inUpdatesMode:(BOOL)arg4 ;
-(id)nicknameController;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateActionButton;
-(void)_updateAvatarView;
-(void)_updateCatalystActionButton;
-(void)_updateSubtitleLabel;
-(void)_updateTitleLabel;
-(void)cancelButtonTapped:(id)arg0 ;
-(void)layoutSubviews;
-(void)setupViews;
-(void)updateButtonTapped:(id)arg0 ;


@end


#endif