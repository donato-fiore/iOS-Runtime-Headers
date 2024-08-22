// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFPOSTERGALLERYVIEWSPEC_H
#define PBFPOSTERGALLERYVIEWSPEC_H

@class UIColor, UIFont;

#import <Foundation/Foundation.h>


@interface PBFPosterGalleryViewSpec : NSObject

@property (readonly, nonatomic) CGFloat groupSpacing; // ivar: _groupSpacing
@property (readonly, nonatomic) CGSize posterContentSize; // ivar: _posterContentSize
@property (readonly, nonatomic) CGFloat posterCornerRadius; // ivar: _posterCornerRadius
@property (readonly, nonatomic) CGSize posterEditingConfirmationContentSize; // ivar: _posterEditingConfirmationContentSize
@property (readonly, nonatomic) CGSize posterHeroContentSize; // ivar: _posterHeroContentSize
@property (readonly, nonatomic) UIColor *previewCellDescriptionLabelColor; // ivar: _previewCellDescriptionLabelColor
@property (readonly, nonatomic) UIFont *previewCellDescriptionLabelFont; // ivar: _previewCellDescriptionLabelFont
@property (readonly, nonatomic) UIColor *previewCellLabelColor; // ivar: _previewCellLabelColor
@property (readonly, nonatomic) UIFont *previewCellLabelFont; // ivar: _previewCellLabelFont
@property (readonly, nonatomic) CGFloat previewCellLabelToImageVerticalSpacing; // ivar: _previewCellLabelToImageVerticalSpacing
@property (readonly, nonatomic) CGFloat previewSmartAlbumCellAdditionalTopMargin; // ivar: _previewSmartAlbumCellAdditionalTopMargin
@property (readonly, nonatomic) CGFloat sectionHeaderBottomSpacing; // ivar: _sectionHeaderBottomSpacing
@property (readonly, nonatomic) UIColor *sectionHeaderSubtitleColor; // ivar: _sectionHeaderSubtitleColor
@property (readonly, nonatomic) UIFont *sectionHeaderSubtitleFont; // ivar: _sectionHeaderSubtitleFont
@property (readonly, nonatomic) CGFloat sectionHeaderSubtitleTopMargin; // ivar: _sectionHeaderSubtitleTopMargin
@property (readonly, nonatomic) UIColor *sectionHeaderTitleColor; // ivar: _sectionHeaderTitleColor
@property (readonly, nonatomic) UIFont *sectionHeaderTitleFont; // ivar: _sectionHeaderTitleFont
@property (readonly, nonatomic) CGFloat sectionHeaderTopSpacing; // ivar: _sectionHeaderTopSpacing
@property (readonly, nonatomic) CGFloat sectionHorizontalMargin; // ivar: _sectionHorizontalMargin
@property (readonly, nonatomic) CGFloat sectionVerticalMargin; // ivar: _sectionVerticalMargin
@property (readonly, nonatomic) CGFloat standardSpacing; // ivar: _standardSpacing


+(id)specForScreen:(id)arg0 ;
-(id)initWithScreen:(id)arg0 ;


@end


#endif