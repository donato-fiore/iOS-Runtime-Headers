// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC13TRANSLATIONUI23LANGUAGESVIEWCONTROLLER_H
#define _TTC13TRANSLATIONUI23LANGUAGESVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC13TranslationUI23LanguagesViewController : UIViewController {
    ? segmentedControl;
    ? showsCloseButton;
    ? requireOnDevice;
    ? selectionModel;
    ? delegate;
    ? subscriptions;
}




-(BOOL)_canShowWhileLocked;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)closeActionWithSender:(id)arg0 ;
-(void)updateSelectedTarget;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif