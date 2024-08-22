// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDLIBRARYFACETILEIMAGEPROVIDER_H
#define PXSHAREDLIBRARYFACETILEIMAGEPROVIDER_H

@class CNContact, UIImage, NSString;
@protocol PXChangeObserver;


#import "PXObservable.h"
#import "PXFaceTileImageCombiner.h"
#import "PXFaceTileImageCombinerContext.h"
#import "PXSharedLibraryFaceTileImageProviderModel.h"

@interface PXSharedLibraryFaceTileImageProvider : PXObservable <PXChangeObserver>

 {
    CNContact *_meContact;
    PXFaceTileImageCombiner *_faceTileImageCombiner;
    PXFaceTileImageCombinerContext *_context;
}


@property (readonly, copy, nonatomic) UIImage *combinedImage; // ivar: _combinedImage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXSharedLibraryFaceTileImageProviderModel *providerModel; // ivar: _providerModel
@property (readonly) Class superclass;


-(id)init;
-(void)_setMeContact:(id)arg0 ;
-(void)_updateCombinedImage;
-(void)_updateContext;
-(void)_updateIncludeMeContact;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif