// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUCONFIGURATOR_H
#define HUCONFIGURATOR_H

@class UIViewController<HUConfigurationViewController>, NSString, NSArray;
@protocol HUConfigurationViewControllerDelegate, HUConfiguratorDelegate;

#import <Foundation/Foundation.h>


@interface HUConfigurator : NSObject <HUConfigurationViewControllerDelegate>



@property (weak, nonatomic) NSObject<HUConfiguratorDelegate> *configuratorDelegate; // ivar: _configuratorDelegate
@property (readonly, nonatomic) UIViewController<HUConfigurationViewController> *currentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *displayedViewControllers; // ivar: _displayedViewControllers
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_nextViewControllerForResults:(id)arg0 ;
-(id)initWithConfiguratorDelegate:(id)arg0 initialViewController:(id)arg1 ;
-(void)_addViewControllerToDisplay:(id)arg0 ;
-(void)_removeDisplayedViewController;
-(void)popViewController;
-(void)pushViewControllerForResults:(id)arg0 ;
-(void)viewController:(id)arg0 didFinishWithConfigurationResults:(id)arg1 ;
-(void)viewControllerDidGoBack:(id)arg0 ;
-(void)viewControllerWillAppear:(id)arg0 ;


@end


#endif