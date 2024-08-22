// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKAUTHORIZATIONNAVIGATIONCONTROLLER_H
#define AKAUTHORIZATIONNAVIGATIONCONTROLLER_H

@class UINavigationController, _UIBackdropView;



@interface AKAuthorizationNavigationController : UINavigationController {
    _UIBackdropView *_backdropView;
    NSInteger _currentStyle;
}




-(void)_updateStyleIfNeeded;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif