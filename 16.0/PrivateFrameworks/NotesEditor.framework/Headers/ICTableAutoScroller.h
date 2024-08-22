// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICTABLEAUTOSCROLLER_H
#define ICTABLEAUTOSCROLLER_H

@class NSTimer, UIScrollView;
@protocol ICTableAutoScrollerDelegate;

#import <Foundation/Foundation.h>

#import "ICTableScrollView.h"
#import "ICTableAttachmentViewController.h"

@interface ICTableAutoScroller : NSObject

@property (retain, nonatomic) NSTimer *autoscrollTimer; // ivar: _autoscrollTimer
@property (nonatomic) CGFloat bottomThresholdDistance; // ivar: _bottomThresholdDistance
@property (weak, nonatomic) NSObject<ICTableAutoScrollerDelegate> *delegate; // ivar: _delegate
@property (weak, nonatomic) ICTableScrollView *horizontalScrollView; // ivar: _horizontalScrollView
@property (nonatomic) BOOL isScrolling; // ivar: _isScrolling
@property (nonatomic) NSUInteger scrollDirectionMode; // ivar: _scrollDirectionMode
@property (weak, nonatomic) ICTableAttachmentViewController *tableAttachmentViewController; // ivar: _tableAttachmentViewController
@property (nonatomic) CGRect targetFrame; // ivar: _targetFrame
@property (readonly, weak, nonatomic) UIScrollView *targetScrollView; // ivar: _targetScrollView
@property (nonatomic) CGFloat topThresholdDistance; // ivar: _topThresholdDistance
@property (weak, nonatomic) UIScrollView *verticalScrollView; // ivar: _verticalScrollView


-(CGFloat)scrollFactorForScrollDirectionMode:(NSUInteger)arg0 ;
-(id)initWithTableAttachmentViewController:(id)arg0 scrollDirectionMode:(NSUInteger)arg1 ;
-(void)autoScrollWithScrollFactor:(CGFloat)arg0 scrollDirectionMode:(NSUInteger)arg1 ;
-(void)stopAndInvalidate;
-(void)stopAutoscrollTimer;
-(void)updateAutoscrollTimer:(id)arg0 ;


@end


#endif