// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PKFLATINKCOLORBUTTON_H
#define _PKFLATINKCOLORBUTTON_H

@class CAShapeLayer;


#import "PKInkColorButton.h"

@interface _PKFlatInkColorButton : PKInkColorButton

@property (retain, nonatomic) CAShapeLayer *fillShapeLayer; // ivar: _fillShapeLayer
@property (retain, nonatomic) CAShapeLayer *strokeShapeLayer; // ivar: _strokeShapeLayer


-(id)initWithColor:(id)arg0 isCompact:(BOOL)arg1 ;
-(void)layoutSubviews;


@end


#endif