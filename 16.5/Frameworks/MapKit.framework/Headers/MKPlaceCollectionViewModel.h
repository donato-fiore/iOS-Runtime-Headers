// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKPLACECOLLECTIONVIEWMODEL_H
#define MKPLACECOLLECTIONVIEWMODEL_H

@class UIFont, UIImage, UIColor, NSAttributedString, GEOPlaceCollection;
@protocol OS_dispatch_queue, MKCuratedCollectionsSyncCoordinator;

#import <Foundation/Foundation.h>


@interface MKPlaceCollectionViewModel : NSObject {
    NSInteger _context;
    UIFont *_titleFont;
    CGFloat _screenScale;
    UIImage *_collectionImage;
    BOOL _isUsingInjectedFont;
    NSObject<OS_dispatch_queue> *_imageLoadingQueue;
    NSObject<OS_dispatch_queue> *_publisherLogoImageQueue;
}


@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) NSAttributedString *collectionLongTitle; // ivar: _collectionLongTitle
@property (retain, nonatomic) NSAttributedString *collectionTitle; // ivar: _collectionTitle
@property (nonatomic) BOOL isSaved; // ivar: _isSaved
@property (nonatomic) CGSize photoSize; // ivar: _photoSize
@property (readonly, nonatomic) GEOPlaceCollection *placeCollection; // ivar: _placeCollection
@property (retain) UIImage *publisherLogoImage; // ivar: _publisherLogoImage
@property (retain, nonatomic) NSAttributedString *secondaryCollectionTitle; // ivar: _secondaryCollectionTitle
@property (retain, nonatomic) NSObject<MKCuratedCollectionsSyncCoordinator> *syncCoordinator; // ivar: _syncCoordinator


-(BOOL)shouldDisplayMetadata;
-(id)description;
-(id)initWithGEOPlaceCollection:(id)arg0 usingSyncCoordinator:(id)arg1 inContext:(NSInteger)arg2 usingTitleFont:(id)arg3 ;
-(void)_publisherImageWithIdentifier:(unsigned int)arg0 completion:(id)arg1 ;
-(void)collectionImageForSize:(struct CGSize )arg0 onCompletion:(id)arg1 ;
-(void)contentCategorySizeDidChange;
-(void)initializeFonts;
-(void)publisherIconImageWithCompletion:(id)arg0 ;
-(void)publisherLogoImageWithCompletion:(id)arg0 ;


@end


#endif