// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXVIDEOFILLVIEW_H
#define SXVIDEOFILLVIEW_H

@class NSString;
@protocol SXViewportChangeListener;


#import "SXFillView.h"
#import "SXClippingView.h"
#import "SXImageResource.h"
#import "SXImageView.h"
#import "SXVideoFillPlayerView.h"
#import "SXVideoFill.h"

@interface SXVideoFillView : SXFillView <SXViewportChangeListener>



@property (retain, nonatomic) SXClippingView *clippingView; // ivar: _clippingView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SXImageResource *imageResource; // ivar: _imageResource
@property (readonly, nonatomic) SXImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) SXVideoFillPlayerView *playerView; // ivar: _playerView
@property (readonly) Class superclass;
@property (readonly, nonatomic) SXVideoFill *videoFill; // ivar: _videoFill


-(BOOL)accessibilityIgnoresInvertColors;
-(id)initWithVideoFill:(id)arg0 DOMObjectProvider:(id)arg1 imageViewFactory:(id)arg2 ;
-(struct CGRect )contentFrame;
-(struct CGRect )fillFrameWithBoundingSize:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)load;
-(void)pause;
-(void)play;
-(void)reset;
-(void)setContentFrame:(struct CGRect )arg0 ;


@end


#endif