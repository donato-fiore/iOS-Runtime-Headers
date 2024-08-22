// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGVIDEOPLAYERVIEW_H
#define PXGVIDEOPLAYERVIEW_H

@class UIView;
@protocol PXGReusableView, NSCopying;


#import "PXVideoSession.h"
#import "PXVideoSessionUIView.h"

@interface PXGVideoPlayerView : UIView <PXGReusableView>



@property (nonatomic) CGRect clippingRect; // ivar: _clippingRect
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (copy, nonatomic) NSObject<NSCopying> *userData; // ivar: _userData
@property (retain, nonatomic) PXVideoSession *videoSession; // ivar: _videoSession
@property (readonly, nonatomic) PXVideoSessionUIView *videoSessionView; // ivar: _videoSessionView


-(id)init;
-(void)becomeReusable;
-(void)prepareForReuse;


@end


#endif