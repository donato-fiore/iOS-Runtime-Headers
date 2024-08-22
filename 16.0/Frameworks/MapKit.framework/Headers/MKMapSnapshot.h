// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKMAPSNAPSHOT_H
#define MKMAPSNAPSHOT_H

@class VKMapSnapshot, NSArray, UIImage, UITraitCollection;

#import <Foundation/Foundation.h>


@interface MKMapSnapshot : NSObject {
    VKMapSnapshot *_snapshot;
    NSArray *_allTraitCollections;
    NSArray *_allImages;
}


@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection


+(id)createSnapshotWithOptions:(id)arg0 timeoutInSeconds:(NSInteger)arg1 ;
-(BOOL)_hasNoDataPlaceholders;
-(id)_initWithSnapshot:(id)arg0 traitCollection:(id)arg1 ;
-(id)_statsMemoryUsage;
-(id)snapshotWithAnnotationView:(id)arg0 atCoordinate:(struct CLLocationCoordinate2D )arg1 ;
-(id)snapshotWithAnnotationView:(id)arg0 atPoint:(struct CGPoint )arg1 ;
-(struct CGPoint )pointForCoordinate:(struct CLLocationCoordinate2D )arg0 ;
-(struct CLLocationCoordinate2D )_coordinateForPoint:(struct CGPoint )arg0 ;
// -(void)_compositeOnImages:(id)arg0 drawQueue:(unk)arg1 callbackQueue:(id)arg2 completionHandler:(id)arg3  ;
-(void)_displayAppleLogoForMapType:(NSUInteger)arg0 callbackQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)_prepareForRenderWithAnnotationViews:(id)arg0 workQueue:(id)arg1 annotationViewDrawingQueue:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif