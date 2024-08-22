// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAUICONTACTSETUPNAVIGATIONCONTROLLER_H
#define AAUICONTACTSETUPNAVIGATIONCONTROLLER_H

@class UINavigationController, UIActivityIndicatorView, NSArray;



@interface AAUIContactSetupNavigationController : UINavigationController {
    UIActivityIndicatorView *_activityIndicatorView;
    NSArray *_currentRightBarButtonItems;
}




-(void)hideActivityIndicator;
-(void)showActivityIndicator;


@end


#endif