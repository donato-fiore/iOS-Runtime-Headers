// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBVIDEOFULLSCREENCONTROLLER_H
#define WEBVIDEOFULLSCREENCONTROLLER_H


#import <Foundation/Foundation.h>


@interface WebVideoFullscreenController : NSObject {
    RefPtr<VideoFullscreenControllerContext, WTF::RawPtrTraits<VideoFullscreenControllerContext>, WTF::DefaultRefDerefTraits<VideoFullscreenControllerContext>> _context;
    RefPtr<WebCore::HTMLVideoElement, WTF::RawPtrTraits<WebCore::HTMLVideoElement>, WTF::DefaultRefDerefTraits<WebCore::HTMLVideoElement>> _videoElement;
}




-(id)init;
-(struct NakedPtr<WebCore::HTMLVideoElement> )videoElement;
-(void)didFinishFullscreen:(*void)arg0 ;
-(void)enterFullscreen:(id)arg0 mode:(unsigned int)arg1 ;
-(void)exitFullscreen;
-(void)requestHideAndExitFullscreen;
-(void)setVideoElement:(struct NakedPtr<WebCore::HTMLVideoElement> )arg0 ;


@end


#endif