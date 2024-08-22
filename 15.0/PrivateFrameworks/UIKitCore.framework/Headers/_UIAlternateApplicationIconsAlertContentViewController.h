// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIALTERNATEAPPLICATIONICONSALERTCONTENTVIEWCONTROLLER_H
#define _UIALTERNATEAPPLICATIONICONSALERTCONTENTVIEWCONTROLLER_H

@class NSString;


#import "UIViewController.h"
#import "UILabel.h"

@interface _UIAlternateApplicationIconsAlertContentViewController : UIViewController {
    UILabel *_messageLabel;
}


@property (copy, nonatomic) NSString *messageText;


-(void)__updateWithVisualStyle:(id)arg0 ;
-(void)_containingAlertControllerDidChangeVisualStyle:(id)arg0 ;
-(void)_updateWithContainingAlertControllerVisualStyle;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)loadView;


@end


#endif