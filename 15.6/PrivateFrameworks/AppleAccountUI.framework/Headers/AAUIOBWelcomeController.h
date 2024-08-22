// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAUIOBWELCOMECONTROLLER_H
#define AAUIOBWELCOMECONTROLLER_H

@class OBWelcomeController, NSString, OBTrayButton;
@protocol AAUIOBWelcomeControllerDelegate;



@interface AAUIOBWelcomeController : OBWelcomeController {
    NSString *_helpLinkURL;
}


@property (weak, nonatomic) NSObject<AAUIOBWelcomeControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) OBTrayButton *primaryButton; // ivar: _primaryButton
@property (retain, nonatomic) OBTrayButton *secondaryButton; // ivar: _secondaryButton


-(id)initWithViewModel:(id)arg0 ;
-(void)_addBulletedListItems:(id)arg0 ;
-(void)_addContentViewWithViewModel:(id)arg0 ;
-(void)_addHelpLinkButtonWithViewModel:(id)arg0 ;
-(void)_addPrimaryButtonWithViewModel:(id)arg0 ;
-(void)_addSecondaryButtonWithViewModel:(id)arg0 ;
-(void)_addSecondaryViewWithViewModel:(id)arg0 ;
-(void)_delegate_welcomeViewControllerDidCompleteWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)_openHelpLink;


@end


#endif