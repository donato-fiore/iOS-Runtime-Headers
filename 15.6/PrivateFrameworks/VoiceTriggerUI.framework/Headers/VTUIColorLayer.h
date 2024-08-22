// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VTUICOLORLAYER_H
#define VTUICOLORLAYER_H

@class CAShapeLayer, UIColor;



@interface VTUIColorLayer : CAShapeLayer {
    UIColor *_redColor;
    UIColor *_blueColor;
    UIColor *_backgroundColor;
}


@property float phase;


+(BOOL)needsDisplayForKey:(id)arg0 ;
-(id)actionForKey:(id)arg0 ;
-(id)init;
-(void)display;


@end


#endif