// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FARESTORABLEVIEWCONTROLLER_H
#define FARESTORABLEVIEWCONTROLLER_H

@class UIViewController, NSString, PSRootController, PSSpecifier;
@protocol PSStateRestoration, PSController;



@interface FARestorableViewController : UIViewController <PSStateRestoration, PSController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIViewController *parentController;
@property (retain, nonatomic) PSRootController *rootController;
@property (retain, nonatomic) PSSpecifier *specifier;
@property (readonly) Class superclass;


-(BOOL)canBeShownFromSuspendedState;
-(id)readPreferenceValue:(id)arg0 ;
-(void)handleURL:(id)arg0 withCompletion:(id)arg1 ;
-(void)setPreferenceValue:(id)arg0 specifier:(id)arg1 ;
-(void)showController:(id)arg0 ;
-(void)showController:(id)arg0 animate:(BOOL)arg1 ;


@end


#endif