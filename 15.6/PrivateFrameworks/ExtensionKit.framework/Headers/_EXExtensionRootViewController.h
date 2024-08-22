// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EXEXTENSIONROOTVIEWCONTROLLER_H
#define _EXEXTENSIONROOTVIEWCONTROLLER_H

@class UIViewController;



@interface _EXExtensionRootViewController : UIViewController

@property (retain, nonatomic) UIViewController *contentViewController;
@property (retain) UIViewController *embededViewController; // ivar: _embededViewController


-(void)embedViewController:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif