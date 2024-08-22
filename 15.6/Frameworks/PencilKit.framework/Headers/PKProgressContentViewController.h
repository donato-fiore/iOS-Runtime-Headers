// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPROGRESSCONTENTVIEWCONTROLLER_H
#define PKPROGRESSCONTENTVIEWCONTROLLER_H

@class UIViewController;



@interface PKProgressContentViewController : UIViewController

@property (nonatomic) CGFloat progress; // ivar: _progress


-(BOOL)_canShowWhileLocked;
-(id)_contentView;
-(void)loadView;
-(void)viewDidLayoutSubviews;


@end


#endif