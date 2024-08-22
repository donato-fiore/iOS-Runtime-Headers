// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKFONTMANAGER_H
#define MKFONTMANAGER_H

@class UIFont, NSString;
@protocol MKFontManager;

#import <Foundation/Foundation.h>


@interface MKFontManager : NSObject <MKFontManager>



@property (readonly, nonatomic) UIFont *attributionFont;
@property (readonly, nonatomic) UIFont *bodyFont;
@property (readonly, nonatomic) UIFont *boldBodyFont;
@property (readonly, nonatomic) UIFont *boldSectionHeaderFont;
@property (readonly, nonatomic) UIFont *brandTitleFont;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIFont *largeTitleFont;
@property (readonly, nonatomic) UIFont *largeTitleFontStatic;
@property (readonly, nonatomic) UIFont *largeTitleHeaderFont;
@property (readonly, nonatomic) UIFont *lookAroundAttributionButtonFont;
@property (readonly, nonatomic) UIFont *lookAroundButtonFont;
@property (readonly, nonatomic) UIFont *lookAroundLabelFont;
@property (readonly, nonatomic) UIFont *lookAroundSecondaryLabelFont;
@property (readonly, nonatomic) UIFont *lookAroundTertiaryLabelFont;
@property (readonly, nonatomic) UIFont *mediumBodyFont;
@property (readonly, nonatomic) UIFont *mediumTitleFont;
@property (readonly, nonatomic) UIFont *ratingCallToActionGlyphFont;
@property (readonly, nonatomic) UIFont *ratingCallToActionHeaderLabelFont;
@property (readonly, nonatomic) UIFont *ratingCallToActionLabelFont;
@property (readonly, nonatomic) UIFont *ratingOverallFont;
@property (readonly, nonatomic) UIFont *ratingOverallPercentageFont;
@property (readonly, nonatomic) UIFont *recommendSubtitleFont;
@property (readonly, nonatomic) UIFont *rowButtonFont;
@property (readonly, nonatomic) UIFont *rowGlyphButtonFont;
@property (readonly, nonatomic) UIFont *sectionHeaderButtonFont;
@property (readonly, nonatomic) UIFont *sectionHeaderFont;
@property (readonly, nonatomic) UIFont *semiboldButtonCellFont;
@property (readonly, nonatomic) UIFont *smallAttributionFont;
@property (readonly, nonatomic) UIFont *subtitleFont;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIFont *textBlurbFont;
@property (nonatomic) BOOL useSmallFont; // ivar: _useSmallFont


+(id)sharedManager;
-(id)iconFontToMatch:(id)arg0 ;


@end


#endif