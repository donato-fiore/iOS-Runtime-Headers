// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXZOOMABLEPHOTOSBODYLAYOUTPROVIDER_H
#define PXZOOMABLEPHOTOSBODYLAYOUTPROVIDER_H

@class NSString;
@protocol PXChangeObserver, PXPhotosSectionBodyLayoutProvider, PXPhotosSectionBodyLayoutProviderInvalidationDelegate;

#import <Foundation/Foundation.h>

#import "PXZoomablePhotosLayout.h"
#import "PXPhotosViewModel.h"
#import "PXZoomablePhotosViewModel.h"

@interface PXZoomablePhotosBodyLayoutProvider : NSObject <PXChangeObserver, PXPhotosSectionBodyLayoutProvider>

 {
    PXZoomablePhotosLayout *_zoomablePhotosLayout;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PXPhotosSectionBodyLayoutProviderInvalidationDelegate> *invalidationDelegate; // ivar: invalidationDelegate
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXPhotosViewModel *viewModel; // ivar: _viewModel
@property (readonly, nonatomic) PXZoomablePhotosViewModel *zoomablePhotosViewModel; // ivar: _zoomablePhotosViewModel


-(BOOL)shouldPreventFaultOutOfBodyLayout:(id)arg0 inAssetSectionLayout:(id)arg1 ;
-(id)createInteraction;
-(id)createSectionBodyLayoutForSectionedLayout:(id)arg0 dataSource:(id)arg1 sectionIndexPath:(struct PXSimpleIndexPath )arg2 spec:(id)arg3 outWantsDecoration:(*BOOL)arg4 ;
-(id)init;
-(id)initWithViewModel:(id)arg0 ;
-(void)_configureZoomableLayoutDecorations:(id)arg0 fromAssetSectionLayout:(id)arg1 ;
-(void)_updatePhotosViewModelWithChanges:(NSUInteger)arg0 ;
-(void)_updateZoomableViewModelWithChanges:(NSUInteger)arg0 ;
-(void)configureSectionBodyLayout:(id)arg0 inAssetSectionLayout:(id)arg1 forSectionedLayout:(id)arg2 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)sectionedLayout:(id)arg0 bodyLayout:(id)arg1 didChangeDataSource:(id)arg2 sectionIndexPath:(struct PXSimpleIndexPath )arg3 hasSectionChanges:(BOOL)arg4 ;


@end


#endif