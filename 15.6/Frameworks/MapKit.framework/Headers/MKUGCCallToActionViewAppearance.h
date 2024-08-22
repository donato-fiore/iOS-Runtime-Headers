// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKUGCCALLTOACTIONVIEWAPPEARANCE_H
#define MKUGCCALLTOACTIONVIEWAPPEARANCE_H

@class NSAttributedString, NSString;

#import <Foundation/Foundation.h>


@interface MKUGCCallToActionViewAppearance : NSObject {
    id *_ctaTextBlock;
}


@property (readonly, nonatomic) NSAttributedString *callToActionText;
@property (readonly, nonatomic) NSString *leadingGlyphName; // ivar: _leadingGlyphName
@property (nonatomic) NSUInteger numberOfPhotosAdded; // ivar: _numberOfPhotosAdded
@property (nonatomic) NSInteger ratingState; // ivar: _ratingState
@property (readonly, nonatomic) NSString *trailingGlyphName; // ivar: _trailingGlyphName
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)_editSubmissionCallToActionViewWithTextRefreshBlock:(id)arg0 ;
// +(id)_photosCallToActionViewWithTextRefreshBlock:(id)arg0 hasPhotoLibraryEmphasis:(unk)arg1  ;
+(id)_ratingsCallToActionViewWithTextRefreshBlock:(id)arg0 ;
+(id)activeAddPhotosAppearanceForThirdPartyPlacecardWithNumberOfPhotos:(NSUInteger)arg0 ;
+(id)activeThumbsUpAppearanceForThirdPartyPlacecard;
+(id)headerAppearanceForFirstPartyPlacecardWithMapItem:(id)arg0 ;
+(id)passiveAddPhotosAppearanceForThirdPartyPlacecard;
+(id)passiveThumbsUpAppearanceForThirdPartyPlacecard;
+(id)userRecommendedAppearanceForNumberOfPhotosAdded:(NSUInteger)arg0 ;
+(id)userRecommendedAppearanceForRatingState:(NSInteger)arg0 ;
+(id)userRecommendedAppearanceForRatingState:(NSInteger)arg0 numberOfPhotosAdded:(NSUInteger)arg1 ;
+(id)userRecommendedFailureAppearance;
+(id)userRecommendedLoadingAppearance;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithType:(NSInteger)arg0 callToActionTextRefreshBlock:(id)arg1 ;
// -(id)initWithType:(NSInteger)arg0 callToActionTextRefreshBlock:(id)arg1 leadingGlpyhName:(unk)arg2  ;
// -(id)initWithType:(NSInteger)arg0 callToActionTextRefreshBlock:(id)arg1 leadingGlpyhName:(unk)arg2 trailingGlyphName:(id)arg3  ;


@end


#endif