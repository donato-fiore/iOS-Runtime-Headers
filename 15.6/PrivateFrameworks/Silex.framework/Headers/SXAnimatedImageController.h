// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXANIMATEDIMAGECONTROLLER_H
#define SXANIMATEDIMAGECONTROLLER_H

@class NSString;
@protocol SXViewportChangeListener;

#import <Foundation/Foundation.h>

#import "SXViewport.h"
#import "SXImageView.h"
#import "SXComponentView.h"

@interface SXAnimatedImageController : NSObject <SXViewportChangeListener>

 {
    BOOL _isReceivingViewportChanges;
    SXViewport *_viewport;
    SXImageView *_imageView;
    CGFloat _previousYOffset;
    SXComponentView *_componentView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)viewport:(id)arg0 dynamicBoundsDidChangeFromBounds:(struct CGRect )arg1 ;


@end


#endif