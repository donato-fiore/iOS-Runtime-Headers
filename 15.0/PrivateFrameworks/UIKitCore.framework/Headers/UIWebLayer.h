// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIWEBLAYER_H
#define UIWEBLAYER_H

@class CALayer;



@interface UIWebLayer : CALayer {
    BOOL _layoutsSuspended;
}




-(void)setLayoutsSuspended:(BOOL)arg0 ;
-(void)setNeedsLayout;


@end


#endif