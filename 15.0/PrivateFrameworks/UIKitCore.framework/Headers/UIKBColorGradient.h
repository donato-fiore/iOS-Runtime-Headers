// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKBCOLORGRADIENT_H
#define UIKBCOLORGRADIENT_H



#import "UIKBGradient.h"
#import "UIColor.h"

@interface UIKBColorGradient : UIKBGradient {
    UIColor *_color;
}




+(id)gradientWithUIColor:(id)arg0 ;
-(id)initWithUIColor:(id)arg0 ;
-(struct CGGradient *)CGGradient;
-(void)dealloc;


@end


#endif