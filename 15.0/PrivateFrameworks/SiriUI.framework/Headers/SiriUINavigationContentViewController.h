// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRIUINAVIGATIONCONTENTVIEWCONTROLLER_H
#define SIRIUINAVIGATIONCONTENTVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol SiriUIContentPlatterViewControllerContaining;


#import "SiriUIContentPlatterViewController.h"

@interface SiriUINavigationContentViewController : UIViewController <SiriUIContentPlatterViewControllerContaining>



@property (nonatomic, getter=isContentLayoutEnabled) BOOL contentLayoutEnabled;
@property (readonly, nonatomic) SiriUIContentPlatterViewController *contentPlatterViewController;
@property (retain, nonatomic) UIViewController *contentViewController; // ivar: _contentViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)hasContentAtPoint:(struct CGPoint )arg0 ;
-(id)_navigationContentView;
-(id)title;
-(void)contentViewDidUpdateSize;
-(void)loadView;
-(void)viewDidLoad;


@end


#endif