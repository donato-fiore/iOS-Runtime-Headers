// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIPARALLAXCOMPOUNDLAYERSTACKREQUEST_H
#define PIPARALLAXCOMPOUNDLAYERSTACKREQUEST_H

@class NURenderRequest, NSMutableArray, NSError, PFParallaxLayout;
@protocol PISegmentationItem;


#import "PIParallaxStyle.h"

@interface PIParallaxCompoundLayerStackRequest : NURenderRequest {
    NSMutableArray *_requests;
    NSMutableArray *_results;
    NSError *_error;
}


@property (nonatomic) NSUInteger layerStackOptions; // ivar: _layerStackOptions
@property (retain, nonatomic) PFParallaxLayout *layout; // ivar: _layout
@property (readonly, nonatomic) NSObject<PISegmentationItem> *segmentationItem; // ivar: _segmentationItem
@property (retain, nonatomic) PIParallaxStyle *style; // ivar: _style
@property (nonatomic) BOOL updateClockAreaLuminance; // ivar: _updateClockAreaLuminance
@property (nonatomic) BOOL updateClockZPosition; // ivar: _updateClockZPosition
@property (nonatomic) BOOL updateInactiveFrame; // ivar: _updateInactiveFrame


-(NSInteger)mediaComponentType;
-(id)_responseWithLayerStack:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithComposition:(id)arg0 ;
-(id)initWithSegmentationItem:(id)arg0 ;
-(id)newRenderJob;
-(void)_recordError:(id)arg0 ;
-(void)_recordResult:(id)arg0 ;
-(void)_submit:(id)arg0 ;
-(void)_submitClockMaterialRequestWithLayerStack:(id)arg0 completion:(id)arg1 ;
-(void)_submitClockOverlapRequestWithLayout:(id)arg0 completion:(id)arg1 ;
-(void)_submitInactiveLayoutRequest:(id)arg0 ;
-(void)_submitLayerStackRequestForMode:(NSInteger)arg0 layout:(id)arg1 completion:(id)arg2 ;
-(void)_submitLayerStackRequestsWithLayout:(id)arg0 completion:(id)arg1 ;
-(void)cancel;
-(void)submit:(id)arg0 ;


@end


#endif