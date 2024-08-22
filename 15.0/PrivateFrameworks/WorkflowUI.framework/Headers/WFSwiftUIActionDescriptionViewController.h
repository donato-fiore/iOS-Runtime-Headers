// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSWIFTUIACTIONDESCRIPTIONVIEWCONTROLLER_H
#define WFSWIFTUIACTIONDESCRIPTIONVIEWCONTROLLER_H

@class UIViewController;
@protocol WFActionDrawerDelegate, WFSwiftUIActionDescriptionViewControllerDelegate;



@interface WFSwiftUIActionDescriptionViewController : UIViewController <WFActionDrawerDelegate>

 {
    ? action;
}


@property (nonatomic, weak) NSObject<WFSwiftUIActionDescriptionViewControllerDelegate> *delegate; // ivar: delegate


-(id)initWithAction:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)appendAction:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif