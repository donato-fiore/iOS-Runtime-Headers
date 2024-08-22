// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXVIDEOSESSIONUIVIEW_H
#define PXVIDEOSESSIONUIVIEW_H

@class UIView, UIImageView, NSString, UIImage;
@protocol PXVideoViewDelegate, PXChangeObserver, PXVideoSessionUIViewDelegate;


#import "PXVideoView.h"
#import "PXVideoSession.h"

@interface PXVideoSessionUIView : UIView <PXVideoViewDelegate, PXChangeObserver>

 {
    UIView *_videoContainerView;
    PXVideoView *_adoptedVideoView;
    UIImageView *_placeholderImageView;
}


@property (nonatomic) BOOL allowsEdgeAntialiasing; // ivar: _allowsEdgeAntialiasing
@property (nonatomic) CGRect contentsRect; // ivar: _contentsRect
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXVideoSessionUIViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isVideoLayerReadyForDisplay;
@property (retain, nonatomic) UIImage *placeholderImage; // ivar: _placeholderImage
@property (nonatomic) BOOL placeholderVisible; // ivar: _placeholderVisible
@property (readonly) Class superclass;
@property (nonatomic) BOOL toneMapToStandardDynamicRange; // ivar: _toneMapToStandardDynamicRange
@property (copy, nonatomic) NSString *videoGravity; // ivar: _videoGravity
@property (retain, nonatomic) PXVideoSession *videoSession; // ivar: _videoSession
@property (readonly, nonatomic) UIView *viewForSnapshotting;


-(id)generateSnapshotImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateEdgeAntialiasing;
-(void)_updatePlaceholderVisibility;
-(void)_updateVideoViewFrame;
-(void)dealloc;
-(void)layoutSubviews;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)setContentMode:(NSInteger)arg0 ;
-(void)videoViewReadinessDidChange:(id)arg0 ;


@end


#endif