// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSTABBARVIEWCONTROLLER_H
#define CPSTABBARVIEWCONTROLLER_H

@class UITabBarController, CPTemplate, NSString, NSArray, NAFuture;
@protocol UITabBarControllerDelegate, CPSTemplateEnvironmentDelegate, CPSBaseTemplateViewController, CPTabBarTemplateProviding, CPTemplateDelegate;


#import "CPSTemplateEnvironment.h"

@interface CPSTabBarViewController : UITabBarController <UITabBarControllerDelegate, CPSTemplateEnvironmentDelegate, CPSBaseTemplateViewController, CPTabBarTemplateProviding>



@property (retain, nonatomic) CPTemplate *associatedTemplate; // ivar: _associatedTemplate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *tabBarButtons;
@property (retain, nonatomic) NSObject<CPTemplateDelegate> *templateDelegate; // ivar: _templateDelegate
@property (weak, nonatomic) CPSTemplateEnvironment *templateEnvironment; // ivar: _templateEnvironment
@property (readonly, nonatomic) NAFuture *templateProviderFuture; // ivar: _templateProviderFuture


-(BOOL)restoresFocusAfterTransition;
-(id)initWithTabBarTemplate:(id)arg0 templateDelegate:(id)arg1 templateEnvironment:(id)arg2 ;
-(id)tabBarTemplate;
-(id)tabBarTemplateDelegate;
-(void)_nowPlayingButtonTapped;
-(void)applicationDidBecomeNowPlayingApp:(BOOL)arg0 ;
-(void)invalidate;
-(void)showNowPlayingButton:(BOOL)arg0 ;
-(void)tabBarController:(id)arg0 didSelectViewController:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif