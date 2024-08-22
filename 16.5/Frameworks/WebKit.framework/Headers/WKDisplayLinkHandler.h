// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKDISPLAYLINKHANDLER_H
#define WKDISPLAYLINKHANDLER_H

@class CADisplayLink;

#import <Foundation/Foundation.h>


@interface WKDisplayLinkHandler : NSObject {
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