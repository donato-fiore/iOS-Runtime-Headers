// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPHOTOSLIDERTILEPROVIDER_H
#define MUPHOTOSLIDERTILEPROVIDER_H

@class MKMapItem, NSArray;

#import <Foundation/Foundation.h>


@interface MUPhotoSliderTileProvider : NSObject {
    MKMapItem *_mapItem;
}


@property (readonly, nonatomic) NSInteger displayType;
@property (readonly, nonatomic) NSArray *photos; // ivar: _photos
@property (readonly, nonatomic) BOOL shouldRouteToPhotoThumbnailGallery;
@property (readonly, nonatomic) BOOL showARPCallToActionAttributionAtEndOfSlider;
@property (readonly, nonatomic) BOOL showFullScreen; // ivar: _showFullScreen
@property (readonly, nonatomic) BOOL showMorePhotoPunchoutAtEndOfSlider;
@property (readonly, nonatomic) BOOL showPhotoAttributionAtEndOfSlider;


-(BOOL)_canShowARPCallToAction;
-(NSUInteger)numberOfPhotos;
-(id)_albumOverlayForPhoto:(id)arg0 ;
-(id)_flatListOverlayForPhoto:(id)arg0 ;
-(id)_photoAlbumForPhoto:(id)arg0 ;
-(id)albumIdForPhoto:(id)arg0 ;
-(id)initWithMapItem:(id)arg0 ;
-(id)overlayForPhoto:(id)arg0 ;
-(id)photoItemAtIndex:(NSUInteger)arg0 ;
-(id)yourPhotosTileOverlay;
-(void)_setup;
-(void)_setupForFlatPhotoList;
-(void)_setupForPhotoAlbums;


@end


#endif