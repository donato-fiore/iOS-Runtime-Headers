// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9SIRISETUP22INTROWELCOMECONTROLLER_H
#define _TTC9SIRISETUP22INTROWELCOMECONTROLLER_H

@class OBWelcomeController;



@interface _TtC9SiriSetup22IntroWelcomeController : OBWelcomeController {
    ? delegate;
    ? orbView;
}




-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(void)continueTapped;
-(void)skipTapped;


@end


#endif