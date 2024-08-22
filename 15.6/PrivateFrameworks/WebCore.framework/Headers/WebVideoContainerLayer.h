// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBVIDEOCONTAINERLAYER_H
#define WEBVIDEOCONTAINERLAYER_H

@class CALayer, AVPlayerLayer;



@interface WebVideoContainerLayer : CALayer {
    RetainPtr<AVPlayerLayer> _playerLayer;
}


@property (retain, nonatomic) AVPlayerLayer *playerLayer;


-(void)setBounds:(struct CGRect )arg0 ;
-(void)setPosition:(struct CGPoint )arg0 ;


@end


#endif