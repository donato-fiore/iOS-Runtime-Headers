// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAUITRANSPORTBUTTON_H
#define CAUITRANSPORTBUTTON_H

@class UIButton;



@interface CAUITransportButton : UIButton {
    int drawingStyle;
    *CGColor fillColor;
    CGRect imageRect;
}


@property int drawingStyle;
@property *CGColor fillColor;


+(Class)layerClass;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPath *)newPathRefForStyle:(int)arg0 ;
-(void)flash;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif