// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUAVALANCHESTACKVIEW_H
#define PUAVALANCHESTACKVIEW_H

@class UIView, CALayer;



@interface PUAvalancheStackView : UIView

@property (nonatomic) NSInteger contentMode; // ivar: _contentMode
@property (retain, nonatomic) CALayer *imageLayer; // ivar: _imageLayer
@property (retain, nonatomic) CALayer *stackLayer0; // ivar: _stackLayer0
@property (retain, nonatomic) CALayer *stackLayer1; // ivar: _stackLayer1


-(id)init;
-(struct CGRect )_imageContentFrame;
-(void)layoutSubviews;
-(void)setImage:(id)arg0 ;


@end


#endif