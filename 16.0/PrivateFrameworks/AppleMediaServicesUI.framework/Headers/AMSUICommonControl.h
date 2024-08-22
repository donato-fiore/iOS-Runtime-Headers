// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUICOMMONCONTROL_H
#define AMSUICOMMONCONTROL_H

@class UIControl;



@interface AMSUICommonControl : UIControl

@property (nonatomic, getter=isTrackingMouse) BOOL trackingMouse; // ivar: _trackingMouse


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setup;


@end


#endif