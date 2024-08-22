// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSSCROLLABLEPAGEVIEWCONTROLLER_H
#define CSSCROLLABLEPAGEVIEWCONTROLLER_H

@protocol CSScrollablePageViewControllerProtocol;


#import "CSPageViewController.h"

@interface CSScrollablePageViewController : CSPageViewController <CSScrollablePageViewControllerProtocol>





-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 ;


@end


#endif