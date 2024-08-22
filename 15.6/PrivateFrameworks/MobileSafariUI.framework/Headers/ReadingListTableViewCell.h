// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef READINGLISTTABLEVIEWCELL_H
#define READINGLISTTABLEVIEWCELL_H

@class UILabel, _SFSiteIconView, NSString;


#import "VibrantTableViewCell.h"
#import "VibrantLabelView.h"

@interface ReadingListTableViewCell : VibrantTableViewCell {
    VibrantLabelView *_detailTextLabel;
    UILabel *_siteNameLabel;
    UILabel *_textLabel;
    BOOL _wantsSelectedAppearance;
    NSInteger _dragState;
    _SFSiteIconView *_imageView;
}


@property (readonly, nonatomic) int bookmarkID; // ivar: _bookmarkID
@property (copy, nonatomic) NSString *fetchingStatusText; // ivar: _fetchingStatusText
@property (nonatomic) BOOL hasImage; // ivar: _hasImage
@property (copy, nonatomic) NSString *previewText; // ivar: _previewText
@property (copy, nonatomic) NSString *siteName; // ivar: _siteName


+(CGFloat)minimumCellHeight;
-(id)_detailLabelFont;
-(id)_scaledFontForTextStyle:(id)arg0 addingSymbolicTraits:(unsigned int)arg1 ;
-(id)_titleLabelFont;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_createImageViewIfNeeded;
-(void)_initializeAutoLayoutConstraints;
-(void)_setOpaque:(BOOL)arg0 forSubview:(id)arg1 ;
-(void)_updateNumberOfLines;
-(void)_updateSelectedAnimated:(BOOL)arg0 ;
-(void)_updateVibrantEffect;
-(void)dealloc;
-(void)displayThumbnailIconForBookmark:(id)arg0 synchronously:(BOOL)arg1 ;
-(void)dragStateDidChange:(NSInteger)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setAlpha:(CGFloat)arg0 ;
-(void)setBookmark:(id)arg0 ;
-(void)setBookmark:(id)arg0 isArchiving:(BOOL)arg1 ;
-(void)setReadingListIcon:(id)arg0 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setUsesVibrantEffect:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif