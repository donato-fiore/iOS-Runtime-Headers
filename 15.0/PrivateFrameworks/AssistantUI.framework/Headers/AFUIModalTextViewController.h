// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFUIMODALTEXTVIEWCONTROLLER_H
#define AFUIMODALTEXTVIEWCONTROLLER_H

@class UIViewController, NSString;



@interface AFUIModalTextViewController : UIViewController {
    NSString *_bodyText;
}




-(id)initWithTitleText:(id)arg0 andBodyText:(id)arg1 ;
-(void)donePressed;
-(void)loadView;
-(void)presentFromParentViewController:(id)arg0 ;


@end


#endif