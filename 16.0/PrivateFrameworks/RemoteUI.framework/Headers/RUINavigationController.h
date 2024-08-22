// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RUINAVIGATIONCONTROLLER_H
#define RUINAVIGATIONCONTROLLER_H

@class UINavigationController, UIViewController;


#import "RUIStyle.h"

@interface RUINavigationController : UINavigationController {
    NSUInteger _ruiSupportedInterfaceOrientations;
    BOOL _isDismissing;
}


@property (weak, nonatomic) UIViewController *hostViewController; // ivar: _hostViewController
@property (readonly, nonatomic) BOOL isDismissing;
@property (copy, nonatomic) id *menuDismissalHandler; // ivar: _menuDismissalHandler
@property (nonatomic) NSUInteger ruiModalPresentationStyle; // ivar: _ruiModalPresentationStyle
@property (retain, nonatomic) RUIStyle *style; // ivar: _style
@property (copy, nonatomic) id *viewDidDisappearHandler; // ivar: _viewDidDisappearHandler


-(BOOL)canBeShownFromSuspendedState;
-(NSUInteger)supportedInterfaceOrientations;
-(void)_menuButtonPressed:(id)arg0 ;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)loadView;
-(void)setSupportedInterfaceOrientations:(NSUInteger)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif