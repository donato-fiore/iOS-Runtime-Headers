// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUSTORAGEMANAGEMENTBASECONTROLLER_H
#define PUSTORAGEMANAGEMENTBASECONTROLLER_H

@class UIViewController, PSSpecifier, UIViewController<PSController>, PSRootController, NSString;
@protocol PSController;



@interface PUStorageManagementBaseController : UIViewController <PSController>

 {
    PSSpecifier *_specifier;
    id *_preferenceValue;
    UIViewController<PSController> *_parentController;
    PSRootController *_rootController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canBeShownFromSuspendedState;
-(id)parentController;
-(id)readPreferenceValue:(id)arg0 ;
-(id)rootController;
-(id)specifier;
-(void)didLock;
-(void)didReceiveMemoryWarning;
-(void)didUnlock;
-(void)didWake;
-(void)handleURL:(id)arg0 ;
-(void)handleURL:(id)arg0 withCompletion:(id)arg1 ;
-(void)setParentController:(id)arg0 ;
-(void)setPreferenceValue:(id)arg0 specifier:(id)arg1 ;
-(void)setRootController:(id)arg0 ;
-(void)setSpecifier:(id)arg0 ;
-(void)showController:(id)arg0 ;
-(void)showController:(id)arg0 animate:(BOOL)arg1 ;
-(void)statusBarWillAnimateByHeight:(CGFloat)arg0 ;
-(void)suspend;
-(void)viewDidLoad;
-(void)willBecomeActive;
-(void)willResignActive;
-(void)willUnlock;


@end


#endif