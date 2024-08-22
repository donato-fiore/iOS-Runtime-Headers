// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKPOIENRICHMENTAVAILIBILITY_H
#define MKPOIENRICHMENTAVAILIBILITY_H


#import <Foundation/Foundation.h>


@interface MKPOIEnrichmentAvailibility : NSObject



+(BOOL)_isMapsApplication;
+(BOOL)_shouldAllowUserToAddContributionsForMapItem:(id)arg0 ;
+(BOOL)shouldShowAddPhotoButtonOnEndOfPhotoSliderForMapItem:(id)arg0 ;
+(BOOL)shouldShowAddPhotoButtonOnMorePhotosGalleryForMapItem:(id)arg0 usingAttributionsByProviderIds:(id)arg1 ;
+(BOOL)shouldShowAddPhotoButtonsOnSingleFullScreenPhotoViewerForMapItem:(id)arg0 photoAttribution:(id)arg1 ;
+(BOOL)shouldShowAppleRatingsForMapItem:(id)arg0 ;
+(BOOL)shouldShowCallToActionForMapItem:(id)arg0 ;
+(BOOL)shouldShowCallToActionForMapItem:(id)arg0 options:(NSUInteger)arg1 ;
+(BOOL)shouldShowMorePhotosGalleryForMapItem:(id)arg0 ;
+(BOOL)shouldShowPhotosCallToActionForMapItem:(id)arg0 ;
+(BOOL)shouldShowRatingInfoCallToActionOnPlaceCardHeaderForMapItem:(id)arg0 ;
+(BOOL)shouldShowRatingsCallToActionForMapItem:(id)arg0 ;
+(BOOL)shouldShowReportAnIssueOnPhotoGalleryForMapItem:(id)arg0 photoAttribution:(id)arg1 ;


@end


#endif