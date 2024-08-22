// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ILCLASSIFICATIONEXTENSIONSHELLVIEWCONTROLLER_H
#define ILCLASSIFICATIONEXTENSIONSHELLVIEWCONTROLLER_H

@class UIViewController, UIBarButtonItem;
@protocol ILClassificationExtensionShellViewControllerDelegate;



@interface ILClassificationExtensionShellViewController : UIViewController

@property (weak, nonatomic) NSObject<ILClassificationExtensionShellViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIBarButtonItem *doneButton; // ivar: _doneButton
@property (nonatomic) BOOL enableFinishOption; // ivar: _enableFinishOption
@property (retain, nonatomic) UIViewController *extensionViewController; // ivar: _extensionViewController


-(void)displayExtensionViewController:(id)arg0 forExtension:(id)arg1 ;
-(void)userDidCancel;
-(void)userDidFinish;
-(void)viewDidLoad;


@end


#endif