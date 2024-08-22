// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PNPWELCOMECONTROLLER_H
#define PNPWELCOMECONTROLLER_H

@class OBWelcomeController, OBTrayButton;
@protocol PNPWelcomeControllerDelegate;



@interface PNPWelcomeController : OBWelcomeController

@property (nonatomic) NSInteger buttonType; // ivar: _buttonType
@property (nonatomic) NSInteger controllerType; // ivar: _controllerType
@property (weak, nonatomic) NSObject<PNPWelcomeControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger deviceType; // ivar: _deviceType
@property (retain, nonatomic) OBTrayButton *trayButton; // ivar: _trayButton


+(id)bundleImageNamed:(id)arg0 ;
+(id)controllerWithType:(NSInteger)arg0 buttonType:(NSInteger)arg1 deviceType:(NSInteger)arg2 delegate:(id)arg3 ;
-(BOOL)_canShowWhileLocked;
-(id)bundleImageNamed:(id)arg0 ;
-(struct UIEdgeInsets )additionalSafeAreaInsets;
-(void)addButtonWithType:(NSInteger)arg0 ;
-(void)buttonPressed:(id)arg0 ;


@end


#endif