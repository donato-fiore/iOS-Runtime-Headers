// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSTRACKLISTHEADERVIEW_H
#define MSTRACKLISTHEADERVIEW_H

@class UIView, UILabel, SUReflectionImageView, SUItemOfferButton, SUTouchCaptureView, UIImage, SUItem;
@protocol MSTrackListHeaderDelegate;



@interface MSTrackListHeaderView : UIView {
    UILabel *_albumLabel;
    UILabel *_artistLabel;
    UILabel *_disclaimerLabel;
    UILabel *_itemCountLabel;
    UILabel *_releaseDateLabel;
    SUReflectionImageView *_artworkView;
    SUItemOfferButton *_offerButton;
    SUTouchCaptureView *_touchCaptureView;
}


@property (retain, nonatomic) UIImage *artworkImage; // ivar: _artworkImage
@property (nonatomic) NSObject<MSTrackListHeaderDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) SUItem *item; // ivar: _item


-(id)_newGenericSmallFontLabel;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_sizeThatFitsLabel:(id)arg0 size:(struct CGSize )arg1 numberOfLines:(NSInteger)arg2 ;
-(void)_hidePurchaseConfirmation;
-(void)_offerButtonAction:(id)arg0 ;
-(void)_performPurchaseAnimation;
-(void)_purchasesChangedNotification:(id)arg0 ;
-(void)_reloadAlbumLabel;
-(void)_reloadArtistLabel;
-(void)_reloadArtworkView;
-(void)_reloadDisclaimerLabel;
-(void)_reloadItemCountLabel;
-(void)_reloadOfferButton;
-(void)_reloadReleaseDateLabel;
-(void)_setShowingPurchaseConfirmation:(BOOL)arg0 ;
-(void)_showPurchaseConfirmation;
-(void)_touchCaptureAction:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)reloadView;
-(void)setBackgroundColor:(id)arg0 ;
-(void)sizeToFit;


@end


#endif