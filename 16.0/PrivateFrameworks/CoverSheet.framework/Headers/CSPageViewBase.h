// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSPAGEVIEWBASE_H
#define CSPAGEVIEWBASE_H

@class UIViewController<CSPageViewControllerProtocol>;
@protocol CSPageView;


#import "CSCoverSheetViewBase.h"

@interface CSPageViewBase : CSCoverSheetViewBase <CSPageView>



@property (nonatomic) CGFloat contentWidth; // ivar: _contentWidth
@property (weak, nonatomic) UIViewController<CSPageViewControllerProtocol> *pageViewController; // ivar: _pageViewController




@end


#endif