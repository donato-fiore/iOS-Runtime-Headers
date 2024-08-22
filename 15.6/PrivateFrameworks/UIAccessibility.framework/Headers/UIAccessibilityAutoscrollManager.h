// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIACCESSIBILITYAUTOSCROLLMANAGER_H
#define UIACCESSIBILITYAUTOSCROLLMANAGER_H

@class UIScrollView;

#import <Foundation/Foundation.h>


@interface UIAccessibilityAutoscrollManager : NSObject

@property (nonatomic) CGFloat autoscrollSpeed; // ivar: _autoscrollSpeed
@property (nonatomic, getter=isAutoscrolling) BOOL autoscrolling; // ivar: _autoscrolling
@property (nonatomic) NSUInteger scrollDirection; // ivar: _scrollDirection
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView


+(id)sharedInstance;
-(id)init;
-(void)_autoscroll;
-(void)autoscrollInDirection:(NSUInteger)arg0 ;
-(void)decrementAutoscrollSpeed;
-(void)incrementAutoscrollSpeed;
-(void)pause;
-(void)scrollToBottom;
-(void)scrollToTop;


@end


#endif