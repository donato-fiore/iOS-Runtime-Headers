// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHTAGGINGVIEWAUTOSHADOWLAYER_H
#define SHTAGGINGVIEWAUTOSHADOWLAYER_H

@class CALayer, CAShapeLayer;



@interface SHTaggingViewAutoShadowLayer : CALayer

@property (retain, nonatomic) CALayer *autoShadowBackgroundLayer; // ivar: _autoShadowBackgroundLayer
@property (retain, nonatomic) CAShapeLayer *autoShadowOuterLayer; // ivar: _autoShadowOuterLayer


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)layoutSublayers;
-(void)setupSublayers;


@end


#endif