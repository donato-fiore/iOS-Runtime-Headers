// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHTAGGINGVIEWOUTERCIRCLELAYER_H
#define SHTAGGINGVIEWOUTERCIRCLELAYER_H

@class CALayer;



@interface SHTaggingViewOuterCircleLayer : CALayer

@property (retain, nonatomic) CALayer *circleContainerLayer; // ivar: _circleContainerLayer
@property (retain, nonatomic) CALayer *circleLayer; // ivar: _circleLayer


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)layoutSublayers;
-(void)setup;


@end


#endif