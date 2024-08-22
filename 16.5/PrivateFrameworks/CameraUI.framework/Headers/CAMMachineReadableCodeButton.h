// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMMACHINEREADABLECODEBUTTON_H
#define CAMMACHINEREADABLECODEBUTTON_H

@class UIButton;
@protocol CAMMachineReadableCodeButtonDelegate;



@interface CAMMachineReadableCodeButton : UIButton

@property (weak, nonatomic) NSObject<CAMMachineReadableCodeButtonDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isDismissable) BOOL dismissable; // ivar: _dismissable


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_didTapDismiss:(id)arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConfiguration;


@end


#endif