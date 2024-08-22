// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPLACESMAPPINRENDERER_H
#define PXPLACESMAPPINRENDERER_H

@class NSString;
@protocol PXPlacesMapAnnotationRenderer, PXPlacesMapPipelineComponentProvider;

#import <Foundation/Foundation.h>


@interface PXPlacesMapPinRenderer : NSObject <PXPlacesMapAnnotationRenderer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) UIEdgeInsets minimumEdgeInsets;
@property (weak, nonatomic) NSObject<PXPlacesMapPipelineComponentProvider> *pipelineComponentProvider; // ivar: pipelineComponentProvider
@property (readonly) Class superclass;


-(BOOL)supportsMoveAnimations;
-(NSInteger)annotationType;
-(id)annotationForGeotaggables:(id)arg0 initialCoordinate:(struct CLLocationCoordinate2D )arg1 ;
-(id)viewForAnnotation:(id)arg0 andMapView:(id)arg1 ;
-(void)reset;


@end


#endif