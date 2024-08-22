// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12GAMECENTERUI18BASEVIEWCONTROLLER_H
#define _TTC12GAMECENTERUI18BASEVIEWCONTROLLER_H

@class UIViewController;
@protocol UIScrollViewDelegate;



@interface _TtC12GameCenterUI18BaseViewController : UIViewController <UIScrollViewDelegate>

 {
    ? wantsHiddenNavigationBar;
    ? wantsHiddenTitle;
    ? manualScrollEdgeAppearanceProgress;
    ? scrollObserver;
    ? navbarScrollObserver;
}




-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)loadView;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif