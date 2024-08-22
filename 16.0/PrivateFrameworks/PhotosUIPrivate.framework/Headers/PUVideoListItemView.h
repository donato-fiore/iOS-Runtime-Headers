// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUVIDEOLISTITEMVIEW_H
#define PUVIDEOLISTITEMVIEW_H

@class UIView, UIImageView, NSLocale, NSDateFormatter, PHImageRequestOptions, NSArray, NSString, UILabel, UIImage;



@interface PUVideoListItemView : UIView {
    UIImageView *_videoThumbnailView;
    NSLocale *_locale;
    NSDateFormatter *_dateFormatter;
    BOOL _needsUpdateConstraints;
    BOOL _isPerformingUpdates;
}


@property (readonly, nonatomic) PHImageRequestOptions *_imageRequestOptions; // ivar: __imageRequestOptions
@property (copy, nonatomic, setter=_setConstraints:) NSArray *constraints; // ivar: _constraints
@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (copy, nonatomic) NSString *sizeInGB; // ivar: _sizeInGB
@property (retain, nonatomic) UILabel *sizeLabel; // ivar: _sizeLabel
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) UIImage *videoThumbnail; // ivar: _videoThumbnail
@property (readonly, nonatomic) UIImageView *videoThumbnailView;


-(id)_createTextLabel;
-(id)_currentLocale;
-(id)_dateFormatter;
-(id)_subtitleForAsset:(id)arg0 ;
-(id)_titleFromDate:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_invalidateConstraints;
-(void)_updateConstraintsIfNeeded;
-(void)updateConstraints;
-(void)updateItemViewWithAsset:(id)arg0 ;


@end


#endif