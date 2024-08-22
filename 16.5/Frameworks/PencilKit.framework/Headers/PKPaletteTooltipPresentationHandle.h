// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPALETTETOOLTIPPRESENTATIONHANDLE_H
#define PKPALETTETOOLTIPPRESENTATIONHANDLE_H

@class UIView;

#import <Foundation/Foundation.h>


@interface PKPaletteTooltipPresentationHandle : NSObject {
    UIView *_hostingView;
    UIView *_floatingLabel;
}




-(id)initWithHostingView:(id)arg0 ;
-(void)hideFloatingLabel;
-(void)showWithText:(id)arg0 fromView:(id)arg1 rect:(struct CGRect )arg2 atEdge:(NSUInteger)arg3 offset:(CGFloat)arg4 traitCollection:(id)arg5 ;


@end


#endif