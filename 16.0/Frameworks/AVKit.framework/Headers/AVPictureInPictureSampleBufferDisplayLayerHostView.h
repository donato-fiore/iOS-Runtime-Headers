// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVPICTUREINPICTURESAMPLEBUFFERDISPLAYLAYERHOSTVIEW_H
#define AVPICTUREINPICTURESAMPLEBUFFERDISPLAYLAYERHOSTVIEW_H

@class UIView;


#import "AVPictureInPictureCALayerHostView.h"

@interface AVPictureInPictureSampleBufferDisplayLayerHostView : UIView

@property (nonatomic) CGFloat beginTime;
@property (nonatomic) CGSize contentDimensions; // ivar: _contentDimensions
@property (nonatomic) unsigned int contextId;
@property (nonatomic, getter=isDeferringGeometryUpdates) BOOL deferringGeometryUpdates; // ivar: _deferringGeometryUpdates
@property (readonly, nonatomic) AVPictureInPictureCALayerHostView *hostView; // ivar: _hostView
@property (nonatomic) CGSize imageQueueSize; // ivar: _imageQueueSize
@property (nonatomic) CGRect lastKnownBounds; // ivar: _lastKnownBounds
@property (nonatomic) CGRect lastKnownFrame; // ivar: _lastKnownFrame
@property (nonatomic) BOOL needsGeometryUpdate; // ivar: _needsGeometryUpdate


+(Class)layerClass;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateGeometryIfNeeded;
-(void)layoutSubviews;
-(void)setFrame:(struct CGRect )arg0 contentDimensions:(struct CGSize )arg1 imageQueueSize:(struct CGSize )arg2 ;


@end


#endif