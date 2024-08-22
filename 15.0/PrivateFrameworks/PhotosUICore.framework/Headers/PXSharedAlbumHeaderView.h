// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSHAREDALBUMHEADERVIEW_H
#define PXSHAREDALBUMHEADERVIEW_H

@class UIView, UIImageView, UIImage, UILabel;


#import "PXFeedSectionInfo.h"

@interface PXSharedAlbumHeaderView : UIView

@property (retain, nonatomic) UIImageView *chevronView; // ivar: _chevronView
@property (retain, nonatomic) UIImage *headerImage; // ivar: _headerImage
@property (nonatomic) NSUInteger headerImageTag; // ivar: _headerImageTag
@property (retain, nonatomic) UIImageView *headerImageView; // ivar: _headerImageView
@property (nonatomic) BOOL isNew; // ivar: _isNew
@property (nonatomic) BOOL isObservingLastExitedForYou; // ivar: _isObservingLastExitedForYou
@property (nonatomic) NSUInteger layoutStyle; // ivar: _layoutStyle
@property (retain, nonatomic) PXFeedSectionInfo *sectionInfo; // ivar: _sectionInfo
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (nonatomic) NSUInteger tappableArea; // ivar: _tappableArea
@property (nonatomic) NSUInteger textColorStyle; // ivar: _textColorStyle
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (nonatomic) BOOL useInPopover; // ivar: _useInPopover


+(void)preloadResources;
-(BOOL)_showChevron;
-(BOOL)_showSubtitle;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)init;
-(struct CGSize )_performLayoutInRect:(struct CGRect )arg0 updateSubviewFrames:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)_handleHeaderImage:(id)arg0 imageTag:(NSUInteger)arg1 ;
-(void)_lastExitedForYouDateDidChange:(id)arg0 ;
-(void)_updateAvatar:(NSUInteger)arg0 ;
-(void)_updateBackgroundColor;
-(void)_updateHeaderImage;
-(void)_updateIsNew;
-(void)_updateSubtitle;
-(void)_updateTitle;
-(void)_updateUI;
-(void)layoutSubviews;


@end


#endif