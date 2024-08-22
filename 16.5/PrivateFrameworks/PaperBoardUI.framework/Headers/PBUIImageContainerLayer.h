// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBUIIMAGECONTAINERLAYER_H
#define PBUIIMAGECONTAINERLAYER_H

@class CALayer;



@interface PBUIImageContainerLayer : CALayer

@property (retain, nonatomic) CALayer *imageLayer; // ivar: _imageLayer


+(id)layer;
-(id)animationForKey:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLayer:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSublayers;


@end


#endif