// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXINBOXTABLEVIEWCELL_H
#define PXINBOXTABLEVIEWCELL_H

@class UITableViewCell, UIImageView, NSAttributedString, UILabel;
@protocol PXInboxModel;


#import "PXRoundedCornerOverlayView.h"
#import "PXInboxTableViewCellLayoutCoordinator.h"
#import "PXBadgedThumbnailView.h"

@interface PXInboxTableViewCell : UITableViewCell

@property (retain, nonatomic) PXRoundedCornerOverlayView *cornerOverlayView; // ivar: _cornerOverlayView
@property (retain, nonatomic) PXInboxTableViewCellLayoutCoordinator *layoutCoordinator; // ivar: _layoutCoordinator
@property (copy, nonatomic) NSObject<PXInboxModel> *model; // ivar: _model
@property (retain, nonatomic) UIImageView *placeholderImageView; // ivar: _placeholderImageView
@property (retain, nonatomic) NSAttributedString *subtitle;
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) PXBadgedThumbnailView *thumbnailView; // ivar: _thumbnailView
@property (retain, nonatomic) NSAttributedString *title; // ivar: _title
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (nonatomic, getter=isUnseen) BOOL unseen; // ivar: _unseen


+(id)placeholderEmptyImage;
+(id)thumbnailBadgeImageForTintColor:(id)arg0 ;
+(id)unseenHighlightColor;
+(void)preloadResources;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)_updateTitle;
-(void)_updateTitleLabel;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif