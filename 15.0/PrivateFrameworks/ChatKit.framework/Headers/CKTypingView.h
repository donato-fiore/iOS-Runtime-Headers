// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKTYPINGVIEW_H
#define CKTYPINGVIEW_H

@class UIView, CALayer<IMTypingIndicatorLayerProtocol>;


#import "CKBaseLayer.h"

@interface CKTypingView : UIView

@property (retain, nonatomic) CKBaseLayer *baseLayer; // ivar: _baseLayer
@property (retain, nonatomic) CALayer<IMTypingIndicatorLayerProtocol> *indicatorLayer; // ivar: _indicatorLayer


-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif