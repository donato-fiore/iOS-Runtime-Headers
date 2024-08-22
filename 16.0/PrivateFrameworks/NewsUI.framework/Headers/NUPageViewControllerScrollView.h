// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUPAGEVIEWCONTROLLERSCROLLVIEW_H
#define NUPAGEVIEWCONTROLLERSCROLLVIEW_H

@class UIScrollView;
@protocol NUPageViewControllerScrollViewAccessibilityDelegate;



@interface NUPageViewControllerScrollView : UIScrollView

@property (weak, nonatomic) NSObject<NUPageViewControllerScrollViewAccessibilityDelegate> *accessibilityDelegate; // ivar: _accessibilityDelegate


-(BOOL)accessibilityScroll:(NSInteger)arg0 ;


@end


#endif