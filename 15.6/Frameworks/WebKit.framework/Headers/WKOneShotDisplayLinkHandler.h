// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKONESHOTDISPLAYLINKHANDLER_H
#define WKONESHOTDISPLAYLINKHANDLER_H

@class CADisplayLink;

#import <Foundation/Foundation.h>


@interface WKOneShotDisplayLinkHandler : NSObject {
    *void _drawingAreaProxy;
    CADisplayLink *_displayLink;
}




-(id)initWithDrawingAreaProxy:(*void)arg0 ;
-(void)dealloc;
-(void)displayLinkFired:(id)arg0 ;
-(void)invalidate;
-(void)pause;
-(void)schedule;
-(void)setPreferredFramesPerSecond:(NSInteger)arg0 ;


@end


#endif