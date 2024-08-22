// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUPHOTOSLIDERTILEPROVIDER_H
#define MUPHOTOSLIDERTILEPROVIDER_H

@class MKMapItem, NSArray;

#import <Foundation/Foundation.h>


@interface MUPhotoSliderTileProvider : NSObject {
    MKMapItem *_mapItem;
}


@property (readonly, nonatomic) NSInteger displayType;
@property (readonly, nonatomic) BOOL isShowingBothVendorAndCallToActionFloatingAttributions;
@property (readonly, nonatomic) NSArray *photos; // ivar: _photos
@property (readonly, nonatomic) BOOL shouldRouteToPhotoThumbnailGallery;
@property (readonly, nonatomic) BOOL showARPCallToActionAttributionAtEndOfSlider;
@property (readonly, nonatomic) BOOL showFullScreen; // ivar: _showFullScreen
@property (readonly, nonatomic) BOOL showMorePhotoPunchoutAtEndOfSlider;
@property (readonly, nonatomic) BOOL showPhotoAttributionAtEndOfSlider;
@property (readonly, nonatomic) BOOL showSmallARPCallToActionFloatingAttribution;
@property (readonly, nonatomic) BOOL showSmallFloatingAttribution;


-(BOOL)_canShowARPCallToAction;
-(BOOL)supportsShowingSliderWithPhotoFrameSize:(struct CGSize )arg0 ;
-(NSUInteger)numberOfPhotos;
-(id)_albumOverlayForIndex:(NSUInteger)arg0 ;
-(id)_flatListOverlayForIndex:(NSUInteger)arg0 ;
-(id)initWithMapItem:(id)arg0 ;
-(id)photoItemAtIndex:(NSUInteger)arg0 ;
-(id)photoOverlayAtIndex:(NSUInteger)arg0 ;
-(void)_setup;
-(void)_setupForFlatPhotoList;
-(void)_setupForPhotoAlbums;


@end


#endif