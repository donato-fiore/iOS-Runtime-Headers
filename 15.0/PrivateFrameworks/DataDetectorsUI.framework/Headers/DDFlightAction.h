// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DDFLIGHTACTION_H
#define DDFLIGHTACTION_H

@class UINavigationController;


#import "DDAction.h"

@interface DDFlightAction : DDAction {
    UINavigationController *_viewController;
}




-(?)initWithURL:(?)arg0 resultcontext;
-(id)iconName;
-(id)localizedName;
-(id)viewController;
-(int)interactionType;
-(void)adaptForPresentationInPopover:(BOOL)arg0 ;
-(void)closePressed;
-(void)prepareViewControllerForActionController:(id)arg0 ;


@end


#endif