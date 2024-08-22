// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKSETTINGSGENERICABOUTVIEWCONTROLLER_H
#define CKSETTINGSGENERICABOUTVIEWCONTROLLER_H

@class UIViewController, UITextView;



@interface CKSettingsGenericAboutViewController : UIViewController

@property (retain, nonatomic) UITextView *aboutView; // ivar: _aboutView


-(id)initWithTitle:(id)arg0 bodyText:(id)arg1 ;
-(void)done:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif