// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPLACESMAPPASSTHROUGHSELECTIONHANDLER_H
#define PXPLACESMAPPASSTHROUGHSELECTIONHANDLER_H

@class NSString;
@protocol PXPlacesMapSelectionHandler, PXPlacesMapPipelineComponentProvider;

#import <Foundation/Foundation.h>


@interface PXPlacesMapPassthroughSelectionHandler : NSObject <PXPlacesMapSelectionHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PXPlacesMapPipelineComponentProvider> *pipelineComponentProvider; // ivar: pipelineComponentProvider
@property (readonly) Class superclass;


-(id)selectedGeotaggablesForRenderable:(id)arg0 mapView:(id)arg1 ;
-(void)reset;


@end


#endif