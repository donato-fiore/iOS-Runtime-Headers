// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSUIENGAGEMENTCARDWRAPPERVIEWCONTROLLER_H
#define AMSUIENGAGEMENTCARDWRAPPERVIEWCONTROLLER_H

@class UINavigationController, NSString, UIViewController;
@protocol PRXCardContentProviding;


#import "AMSUICommonViewController.h"

@interface AMSUIEngagementCardWrapperViewController : AMSUICommonViewController <PRXCardContentProviding>



@property (readonly, nonatomic) BOOL allowsPullToDismiss;
@property (readonly, nonatomic) NSInteger cardStyle;
@property (retain, nonatomic) UINavigationController *childNavigationController; // ivar: _childNavigationController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger presentationStyle; // ivar: _presentationStyle
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIViewController *viewController; // ivar: _viewController


-(id)initWithViewController:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif