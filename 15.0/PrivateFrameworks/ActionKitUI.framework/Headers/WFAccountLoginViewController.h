// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFACCOUNTLOGINVIEWCONTROLLER_H
#define WFACCOUNTLOGINVIEWCONTROLLER_H

@class UIViewController;
@protocol WFAccountLoginViewControllerDelegate;



@interface WFAccountLoginViewController : UIViewController

@property (weak, nonatomic) NSObject<WFAccountLoginViewControllerDelegate> *delegate; // ivar: _delegate


-(BOOL)accessibilityPerformEscape;
-(id)initWithAccountClass:(Class)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;


@end


#endif