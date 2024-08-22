// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKMAPIMAGECANVAS_H
#define VKMAPIMAGECANVAS_H

@class NSString;
@protocol VKMapModelDelegate, MDSnapshotMap;


#import "VKImageCanvas.h"
#import "VKMapModel.h"

@interface VKMapImageCanvas : VKImageCanvas <VKMapModelDelegate, MDSnapshotMap>

 {
    VKMapModel *_mapModel;
    *void _mapEngine;
    _retain_ptr<VKManifestTileGroupObserverProxy *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> _manifestTileGroupObserverProxy;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithMapEngine:(*void)arg0 ;
-(void)cancelTileRequests;
-(void)clearScene;
-(void)dealloc;
-(void)mapModel:(id)arg0 labelMarkerDidChangeState:(*void)arg1 ;
-(void)mapModel:(id)arg0 selectedLabelMarkerWillDisappear:(*void)arg1 ;
-(void)mapModelDidUpdateMinMaxZoomLevel:(id)arg0 ;
-(void)mapModelLabelsDidLayout:(id)arg0 ;
-(void)resetCameraController;
-(void)setMapType:(int)arg0 ;
-(void)tileGroupDidChange;
-(void)updateWithTimestamp:(CGFloat)arg0 withContext:(*void)arg1 ;


@end


#endif