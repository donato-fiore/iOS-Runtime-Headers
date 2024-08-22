// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NTKCDETAILADDBUTTON_H
#define _NTKCDETAILADDBUTTON_H

@class UIButton, NSString;



@interface _NTKCDetailAddButton : UIButton

@property (readonly, nonatomic) BOOL disabled; // ivar: _disabled
@property (readonly, nonatomic) NSString *disabledReason; // ivar: _disabledReason


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateColor;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif