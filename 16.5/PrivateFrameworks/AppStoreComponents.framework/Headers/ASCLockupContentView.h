// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCLOCKUPCONTENTVIEW_H
#define ASCLOCKUPCONTENTVIEW_H

@class UIControl, NSString, UILabel, UIColor;
@protocol ASCOfferButtonDelegate, ASCLockupPresenterView, ASCOfferPresenterView, ASCLockupTheme;


#import "ASCLockupDisplayContext.h"
#import "ASCArtworkView.h"
#import "ASCOfferButton.h"
#import "ASCOfferTheme.h"
#import "ASCSkeletonLabel.h"

@interface ASCLockupContentView : UIControl <ASCOfferButtonDelegate, ASCLockupPresenterView, ASCOfferPresenterView>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) ASCLockupDisplayContext *displayContext; // ivar: _displayContext
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UILabel *headingLabel;
@property (readonly, nonatomic) UILabel *headingLabelIfLoaded; // ivar: _headingLabelIfLoaded
@property (readonly, nonatomic) ASCArtworkView *iconArtworkView; // ivar: _iconArtworkView
@property (readonly, nonatomic) BOOL isOfferButtonOnlyLockup;
@property (copy, nonatomic) UIColor *loadingColor;
@property (retain, nonatomic) NSObject<ASCLockupTheme> *lockupTheme; // ivar: _lockupTheme
@property (readonly, nonatomic) ASCOfferButton *offerButton; // ivar: _offerButton
@property (readonly, nonatomic) UILabel *offerStatusLabel;
@property (readonly, nonatomic) UILabel *offerStatusLabelIfLoaded; // ivar: _offerStatusLabelIfLoaded
@property (copy, nonatomic) ASCOfferTheme *offerTheme; // ivar: _offerTheme
@property (readonly, nonatomic) CGSize preferredIconSize;
@property (retain, nonatomic) NSString *size; // ivar: _size
@property (readonly, nonatomic) ASCSkeletonLabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly) Class superclass;
@property (readonly, nonatomic) ASCSkeletonLabel *titleLabel; // ivar: _titleLabel


+(BOOL)isOfferButtonFixedHeightForSize:(id)arg0 ;
+(BOOL)isSmallOfferButtonLockupForSize:(id)arg0 ;
+(BOOL)offerButtonShouldExpandBackgroundForSize:(id)arg0 ;
+(BOOL)offerButtonShouldTopAlignForSize:(id)arg0 ;
+(CGFloat)offerButtonTopPaddingForSize:(id)arg0 ;
-(BOOL)isMiniLockup;
-(BOOL)isSmallOfferButtonOnlyLockup;
-(BOOL)shouldHideHeading;
-(BOOL)shouldHideIconArtwork;
-(BOOL)shouldHideOfferStatus;
-(BOOL)shouldHideSubtitle;
-(BOOL)shouldHideTitle;
-(CGFloat)minimumLockupHeight;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)makeLayout;
-(id)saveOfferState;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)addOfferTarget:(id)arg0 action:(SEL)arg1 ;
-(void)beginOfferModalStateWithCancelBlock:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endOfferModalState;
-(void)invalidateIntrinsicContentSize;
-(void)layoutSubviews;
-(void)offerButton:(id)arg0 willTransitionToMetadata:(id)arg1 usingAnimator:(id)arg2 ;
-(void)removeOfferTarget:(id)arg0 action:(SEL)arg1 ;
-(void)setHeading:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setIconImage:(id)arg0 withDecoration:(id)arg1 ;
-(void)setLoading:(BOOL)arg0 ;
-(void)setOfferEnabled:(BOOL)arg0 ;
-(void)setOfferInteractive:(BOOL)arg0 ;
-(void)setOfferMetadata:(id)arg0 ;
-(void)setOfferStatus:(id)arg0 ;
-(void)setPrefersRightToLeftLayout:(BOOL)arg0 ;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;
-(void)setSubtitle:(id)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif