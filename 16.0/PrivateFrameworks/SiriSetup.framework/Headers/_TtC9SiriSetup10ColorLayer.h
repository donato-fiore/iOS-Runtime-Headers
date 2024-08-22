// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9SIRISETUP10COLORLAYER_H
#define _TTC9SIRISETUP10COLORLAYER_H

@class CAShapeLayer;



@interface _TtC9SiriSetup10ColorLayer : CAShapeLayer {
    ? layerRedColor;
    ? layerBlueColor;
    ? layerBackgroundColor;
}


@property (nonatomic) CGFloat phase;


+(BOOL)needsDisplayForKey:(id)arg0 ;
-(id)actionForKey:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLayer:(id)arg0 ;
-(void)display;


@end


#endif