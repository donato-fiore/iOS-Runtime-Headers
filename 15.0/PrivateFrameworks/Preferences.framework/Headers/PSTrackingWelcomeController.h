// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSTRACKINGWELCOMECONTROLLER_H
#define PSTRACKINGWELCOMECONTROLLER_H

@class UINavigationController, OBTextWelcomeController;



@interface PSTrackingWelcomeController : UINavigationController

@property (retain, nonatomic) OBTextWelcomeController *controller; // ivar: _controller


-(id)aboutText;
-(id)init;
-(void)donePressed;


@end


#endif