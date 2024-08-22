// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPLACESMAPTHUMBNAILANNOTATIONVIEW_H
#define PXPLACESMAPTHUMBNAILANNOTATIONVIEW_H

@class MKAnnotationView, UILabel, UIImageView, NSString;
@protocol PXPlacesMapAnnotationViewFadable;


#import "PKExtendedTraitCollection.h"
#import "PXPlacesImageCache.h"

@interface PXPlacesMapThumbnailAnnotationView : MKAnnotationView <PXPlacesMapAnnotationViewFadable>

 {
    NSInteger _geotaggablesCount;
}


@property (retain, nonatomic) UILabel *countLabel; // ivar: _countLabel
@property (retain, nonatomic) UIImageView *countLabelBackgroundImageView; // ivar: _countLabelBackgroundImageView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *displayCompletion; // ivar: _displayCompletion
@property (retain, nonatomic) PKExtendedTraitCollection *extendedTraitCollection; // ivar: _extendedTraitCollection
@property (retain, nonatomic) id *extendedTraitObserver; // ivar: _extendedTraitObserver
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXPlacesImageCache *imageCache; // ivar: _imageCache
@property (nonatomic) BOOL imageIsPlaceholder; // ivar: _imageIsPlaceholder
@property (readonly) Class superclass;


+(id)_thumbnailCreationOperationQueue;
+(id)_thumbnailFetchOperationQueue;
-(id)initWithAnnotation:(id)arg0 reuseIdentifier:(id)arg1 extendedTraitCollection:(id)arg2 imageCache:(id)arg3 ;
-(id)primaryGeotaggable;
-(id)renderToImage;
-(id)userCacheKey;
-(void)_fetchImageWithNetworkAccessAllowed:(BOOL)arg0 ;
-(void)_hideCountLabel;
-(void)_processGeotaggable:(id)arg0 withImage:(struct CGImage *)arg1 popoverImageType:(NSUInteger)arg2 imageOptions:(NSUInteger)arg3 shouldCache:(BOOL)arg4 ;
-(void)_processPlaceHolderForGeotaggable:(id)arg0 ;
-(void)_processPostImage;
-(void)_reloadCount:(NSInteger)arg0 ;
-(void)_reloadData:(BOOL)arg0 ;
-(void)_showCountLabel;
-(void)_updatePlaceholderImageIfNeeded;
-(void)dealloc;
-(void)prepareForReuse;
-(void)setAnnotation:(id)arg0 ;
-(void)setImage:(id)arg0 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif