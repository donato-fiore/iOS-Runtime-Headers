// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC7FOCUSUI24QUICKSTARTVIEWCONTROLLER_H
#define _TTC7FOCUSUI24QUICKSTARTVIEWCONTROLLER_H

@class UIViewController;
@protocol _TtP7FocusUI32QuickStartViewControllerDelegate_;



@interface _TtC7FocusUI24QuickStartViewController : UIViewController {
    ? modeIdentifier;
}


@property (nonatomic, weak) NSObject<_TtP7FocusUI32QuickStartViewControllerDelegate_> *delegate; // ivar: delegate


-(id)initWithCoder:(id)arg0 ;
-(id)initWithModeIdentifier:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)handleTap:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif