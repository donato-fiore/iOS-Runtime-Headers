// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSBINDABLESWITCH_H
#define VSBINDABLESWITCH_H

@class UISwitch;



@interface VSBindableSwitch : UISwitch



-(void)_updateBindingForValueChanged:(id)arg0 ;
-(void)vs_bind:(id)arg0 toObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3 ;
-(void)vs_unbind:(id)arg0 ;


@end


#endif