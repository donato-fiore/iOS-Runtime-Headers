// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPLACESMAPTHUMBNAILRENDERER_H
#define PXPLACESMAPTHUMBNAILRENDERER_H

@class NSString;
@protocol PXPlacesMapAnnotationPopoverImageRenderer, PXPlacesMapGeotaggableInfoDelegate, PXPlacesMapPipelineComponentProvider;

#import <Foundation/Foundation.h>

#import "PKExtendedTraitCollection.h"

@interface PXPlacesMapThumbnailRenderer : NSObject <PXPlacesMapAnnotationPopoverImageRenderer, PXPlacesMapGeotaggableInfoDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) PKExtendedTraitCollection *extendedTraitCollection; // ivar: _extendedTraitCollection
@property (retain) id *extendedTraitObserver; // ivar: _extendedTraitObserver
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger imageOptions; // ivar: _imageOptions
@property (retain) NSObject<PXPlacesMapGeotaggableInfoDelegate> *informationDelegate; // ivar: _informationDelegate
@property (readonly) UIEdgeInsets minimumEdgeInsets;
@property (weak, nonatomic) NSObject<PXPlacesMapPipelineComponentProvider> *pipelineComponentProvider; // ivar: pipelineComponentProvider
@property (readonly) NSUInteger popoverImageType; // ivar: _popoverImageType
@property (readonly) Class superclass;


-(BOOL)supportsMoveAnimations;
-(NSInteger)annotationType;
-(id)annotationForGeotaggables:(id)arg0 initialCoordinate:(struct CLLocationCoordinate2D )arg1 ;
-(id)initWithTraitCollection:(id)arg0 andInforamtionDelegate:(id)arg1 popoverImageType:(NSUInteger)arg2 ;
-(id)initWithTraitCollection:(id)arg0 andInforamtionDelegate:(id)arg1 popoverImageType:(NSUInteger)arg2 popoverImageOptions:(NSUInteger)arg3 ;
-(id)viewForAnnotation:(id)arg0 andMapView:(id)arg1 ;
-(void)dealloc;
-(void)imageForGeotaggable:(id)arg0 ofSize:(struct CGSize )arg1 networkAccessAllowed:(BOOL)arg2 andCompletion:(id)arg3 ;
-(void)reset;


@end


#endif