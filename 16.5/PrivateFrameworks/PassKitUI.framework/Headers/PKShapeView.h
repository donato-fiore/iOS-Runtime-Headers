// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSHAPEVIEW_H
#define PKSHAPEVIEW_H

@class UIView, CAShapeLayer;



@interface PKShapeView : UIView {
    CAShapeLayer *_shapeLayer;
}


@property (readonly, nonatomic) CAShapeLayer *shapeLayer;


+(Class)layerClass;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif