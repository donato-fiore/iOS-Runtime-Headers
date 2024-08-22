// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIREFRESHCONTROLCONTENTVIEW_H
#define _UIREFRESHCONTROLCONTENTVIEW_H

@class NSAttributedString;


#import "UIView.h"
#import "UIImpactFeedbackGenerator.h"
#import "UIRefreshControl.h"
#import "UIColor.h"

@interface _UIRefreshControlContentView : UIView

@property (retain, nonatomic) NSAttributedString *attributedTitle;
@property (retain, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator; // ivar: _impactFeedbackGenerator
@property (readonly, nonatomic) CGFloat maximumSnappingHeight;
@property (readonly, nonatomic) CGFloat minimumSnappingHeight;
@property (nonatomic) UIRefreshControl *refreshControl; // ivar: _refreshControl
@property (readonly, nonatomic) NSInteger style;
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor


-(CGFloat)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
-(void)_removeAllAnimations;
-(void)didTransitionFromState:(NSInteger)arg0 toState:(NSInteger)arg1 ;
-(void)willTransitionFromState:(NSInteger)arg0 toState:(NSInteger)arg1 ;


@end


#endif