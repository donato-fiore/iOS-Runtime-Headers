// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUPAGEVIEWCONTROLLERSCROLLVIEW_H
#define TUPAGEVIEWCONTROLLERSCROLLVIEW_H

@class UIScrollView;
@protocol TUPageViewControllerScrollViewAccessibilityDelegate;



@interface TUPageViewControllerScrollView : UIScrollView

@property (weak, nonatomic) NSObject<TUPageViewControllerScrollViewAccessibilityDelegate> *accessibilityDelegate; // ivar: _accessibilityDelegate


-(BOOL)accessibilityScroll:(NSInteger)arg0 ;
-(BOOL)canBecomeFocused;


@end


#endif