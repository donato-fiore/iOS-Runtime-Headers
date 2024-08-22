// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC16HEALTHMOBILITYUI54WALKINGSTEADINESSONBOARDINGNOTIFICATIONSVIEWCONTROLLER_H
#define _TTC16HEALTHMOBILITYUI54WALKINGSTEADINESSONBOARDINGNOTIFICATIONSVIEWCONTROLLER_H

@class OBWelcomeController;



@interface _TtC16HealthMobilityUI54WalkingSteadinessOnboardingNotificationsViewController : OBWelcomeController {
    ? $__lazy_storage_$_iconWithShadow;
    ? stage;
    ? delegate;
}




-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(void)cancelButtonTapped;
-(void)primaryFooterButtonTapped;
-(void)secondaryFooterButtonTapped;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif