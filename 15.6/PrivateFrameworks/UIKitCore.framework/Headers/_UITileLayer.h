// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UITILELAYER_H
#define _UITILELAYER_H

@class CALayer;


#import "UIBezierPath.h"

@interface _UITileLayer : CALayer {
    UIBezierPath *maskPath;
    uint8_t pendingDeferredOffscreenSetNeedsDisplay;
}




-(id)actionForKey:(id)arg0 ;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)setNeedsDisplay;


@end


#endif