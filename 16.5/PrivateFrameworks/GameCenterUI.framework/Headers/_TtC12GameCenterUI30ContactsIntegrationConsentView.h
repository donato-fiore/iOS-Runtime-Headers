// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12GAMECENTERUI30CONTACTSINTEGRATIONCONSENTVIEW_H
#define _TTC12GAMECENTERUI30CONTACTSINTEGRATIONCONSENTVIEW_H

@class TtC12GameCenterUI22OnboardingTemplateView;



@interface _TtC12GameCenterUI30ContactsIntegrationConsentView : TtC12GameCenterUI22OnboardingTemplateView {
    ? delegate;
    ? iconImage;
    ? detailView;
    ? primaryTrayButton;
    ? secondaryTrayButton;
}




-(id)initWithCoder:(id)arg0 ;
-(void)primaryAction;
-(void)secondaryAction;


@end


#endif