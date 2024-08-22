// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICDOCCAMSHUTTERBUTTON_H
#define ICDOCCAMSHUTTERBUTTON_H

@class UIButton;



@interface ICDocCamShutterButton : UIButton

@property (nonatomic, getter=isPseudoDisabled) BOOL pseudoDisabled; // ivar: _pseudoDisabled


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)innerCircle;
-(id)outerRingImage;
-(void)commonInit;


@end


#endif