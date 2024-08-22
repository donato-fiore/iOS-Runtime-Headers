// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPLACESMAPPOINTANNOTATION_H
#define PXPLACESMAPPOINTANNOTATION_H

@class NSString, NSOrderedSet;
@protocol MKAnnotation, PXPlacesMapRenderable, PXPlacesMapRenderer, PXPlacesMapSelectionHandler;

#import <Foundation/Foundation.h>


@interface PXPlacesMapPointAnnotation : NSObject <MKAnnotation, PXPlacesMapRenderable>



@property (nonatomic) CLLocationCoordinate2D coordinate; // ivar: coordinate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSOrderedSet *geotaggables; // ivar: geotaggables
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger index; // ivar: index
@property (weak) NSObject<PXPlacesMapRenderer> *renderer; // ivar: renderer
@property (weak) NSObject<PXPlacesMapSelectionHandler> *selectionHandler; // ivar: selectionHandler
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title;




@end


#endif