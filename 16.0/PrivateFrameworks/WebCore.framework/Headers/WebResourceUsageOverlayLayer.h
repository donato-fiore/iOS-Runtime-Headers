// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBRESOURCEUSAGEOVERLAYLAYER_H
#define WEBRESOURCEUSAGEOVERLAYLAYER_H

@class CALayer;



@interface WebResourceUsageOverlayLayer : CALayer {
    *void m_overlay;
}




-(id)initWithResourceUsageOverlay:(*void)arg0 ;
-(void)drawInContext:(struct CGContext *)arg0 ;


@end


#endif