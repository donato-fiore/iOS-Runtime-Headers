// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUIMAGELOADER_H
#define MRUIMAGELOADER_H

@class MPArtworkCatalog, UIView;
@protocol MPArtworkDataSourceVisualIdenticality;

#import <Foundation/Foundation.h>


@interface MRUImageLoader : NSObject

@property (nonatomic) BOOL cacheImages; // ivar: _cacheImages
@property (retain, nonatomic) MPArtworkCatalog *catalog; // ivar: _catalog
@property (readonly, weak, nonatomic) UIView *destination; // ivar: _destination
@property (nonatomic) CGSize effectiveScaledFittingSizeForConfiguration; // ivar: _effectiveScaledFittingSizeForConfiguration
@property (nonatomic) NSInteger failedLoadingCount; // ivar: _failedLoadingCount
@property (nonatomic) CGSize fittingSize; // ivar: _fittingSize
@property (nonatomic) BOOL formatImages; // ivar: _formatImages
@property (readonly, nonatomic) id *imageHandler; // ivar: _imageHandler
@property (retain, nonatomic) NSObject<MPArtworkDataSourceVisualIdenticality> *lastFailedArtworkIdentifier; // ivar: _lastFailedArtworkIdentifier
@property (retain, nonatomic) NSObject<MPArtworkDataSourceVisualIdenticality> *lastLoadedArtworkIdentifier; // ivar: _lastLoadedArtworkIdentifier
@property (nonatomic) CGSize lastVendedScaledFittingSize; // ivar: _lastVendedScaledFittingSize
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (nonatomic) NSInteger state; // ivar: _state


-(BOOL)vendCachedImageIfPossible;
-(BOOL)wouldLoadNewImageForCatalog:(id)arg0 ;
-(id)initWithDestination:(id)arg0 imageHandler:(id)arg1 ;
-(void)configureCatalog;
-(void)dealloc;
-(void)updateCatalog:(id)arg0 ;
-(void)updateFittingSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;


@end


#endif