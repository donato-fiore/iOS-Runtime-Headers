// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUILOCKUPITEMCELLLAYOUT_H
#define SKUILOCKUPITEMCELLLAYOUT_H

@class UILabel, NSString, UIImage;


#import "SKUIItemCellLayout.h"
#import "SKUILockupMetadataView.h"
#import "SKUIEmbeddedMediaView.h"

@interface SKUILockupItemCellLayout : SKUIItemCellLayout {
    UILabel *_itemOfferTextLabel;
    SKUILockupMetadataView *_metadataView;
    SKUIEmbeddedMediaView *_videoThumbnailView;
}


@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *categoryString;
@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (copy, nonatomic) NSString *editorialBadgeString;
@property (nonatomic) CGSize imageBoundingSize; // ivar: _imageBoundingSize
@property (copy, nonatomic) NSString *itemCountString;
@property (nonatomic) NSInteger itemOfferStyle; // ivar: _itemOfferStyle
@property (nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle
@property (nonatomic) NSInteger lockupSize; // ivar: _lockupSize
@property (nonatomic) NSInteger numberOfUserRatings;
@property (nonatomic) BOOL playsInlineVideo; // ivar: _playsInlineVideo
@property (copy, nonatomic) NSString *releaseDateString;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) float userRating;
@property (nonatomic) NSInteger verticalAlignment; // ivar: _verticalAlignment
@property (retain, nonatomic) UIImage *videoThumbnailImage;
@property (nonatomic) CGSize videoThumbnailSize; // ivar: _videoThumbnailSize
@property (nonatomic) NSUInteger visibleFields;


+(CGFloat)heightForLockupComponent:(id)arg0 clientContext:(id)arg1 ;
+(CGFloat)heightForLockupStyle:(struct SKUILockupStyle )arg0 item:(id)arg1 editorial:(id)arg2 clientContext:(id)arg3 ;
+(struct CGSize )videoThumbnailSizeForVideo:(id)arg0 clientContext:(id)arg1 ;
-(BOOL)_isItemOfferHidden;
-(id)_itemOfferTextLabel;
-(id)initWithCollectionViewCell:(id)arg0 ;
-(id)initWithParentView:(id)arg0 ;
-(id)initWithTableViewCell:(id)arg0 ;
-(struct CGRect )_layoutIconImageView;
-(void)_beginVideoPlaybackAction:(id)arg0 ;
-(void)_initSKUILockupItemCellLayout;
-(void)_layoutHorizontal;
-(void)_layoutVertical;
-(void)dealloc;
-(void)endVideoPlaybackAnimated:(BOOL)arg0 ;
-(void)layoutForItemOfferChange;
-(void)layoutSubviews;
-(void)playInlineVideoWithURL:(id)arg0 ;
-(void)prepareForReuse;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setClientContext:(id)arg0 ;
-(void)setColoringWithColorScheme:(id)arg0 ;
-(void)setIconImage:(id)arg0 ;


@end


#endif