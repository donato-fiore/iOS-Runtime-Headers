// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDISMISSONLYALERTITEM_H
#define SBDISMISSONLYALERTITEM_H

@class SBAlertItem, NSString;



@interface SBDismissOnlyAlertItem : SBAlertItem {
    NSString *_title;
    NSString *_body;
}




-(BOOL)suppressForKeynote;
-(id)bodyText;
-(id)dismissButtonText;
-(id)initWithTitle:(id)arg0 body:(id)arg1 ;
-(id)title;
-(void)configure:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;
-(void)performUnlockAction;
-(void)setBodyText:(id)arg0 ;
-(void)setTitle:(id)arg0 ;


@end


#endif