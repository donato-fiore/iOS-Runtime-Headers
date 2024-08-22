// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC16HEALTHMOBILITYUI46WALKINGSTEADINESSONBOARDINGSTARTVIEWCONTROLLER_H
#define _TTC16HEALTHMOBILITYUI46WALKINGSTEADINESSONBOARDINGSTARTVIEWCONTROLLER_H

@class OBWelcomeController;



@interface _TtC16HealthMobilityUI46WalkingSteadinessOnboardingStartViewController : OBWelcomeController {
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