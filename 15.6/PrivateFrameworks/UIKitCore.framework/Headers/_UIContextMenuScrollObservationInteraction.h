// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICONTEXTMENUSCROLLOBSERVATIONINTERACTION_H
#define _UICONTEXTMENUSCROLLOBSERVATIONINTERACTION_H

@class NSString;
@protocol _UIScrollViewScrollableAncestor, UIInteraction, _UIContextMenuScrollObservationInteractionDelegate;

#import <Foundation/Foundation.h>

#import "UIView.h"

@interface _UIContextMenuScrollObservationInteraction : NSObject <_UIScrollViewScrollableAncestor, UIInteraction>

 {
    CGPoint _currentTranslation;
    CGPoint _consumedTranslation;
    CGPoint _currentLocation;
    BOOL _isActive;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIContextMenuScrollObservationInteractionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIView *view; // ivar: _view


+(id)interactionWithDelegate:(id)arg0 ;
-(BOOL)_descendentScrollView:(id)arg0 shouldPreserveStartOffset:(struct CGPoint )arg1 ;
-(BOOL)_descendentScrollViewShouldScrollHorizontally:(id)arg0 ;
-(BOOL)_descendentScrollViewShouldScrollVertically:(id)arg0 ;
-(struct CGPoint )_scrollView:(id)arg0 adjustedUnconstrainedOffsetForUnconstrainedOffset:(struct CGPoint )arg1 startOffset:(struct CGPoint )arg2 horizontalVelocity:(*CGFloat)arg3 verticalVelocity:(*CGFloat)arg4 animator:(*id)arg5 ;
-(void)_descendentScrollViewDidCancelDragging:(id)arg0 ;
-(void)_descendentScrollViewDidEndDragging:(id)arg0 ;
-(void)_endInteractionWithTranslation:(struct CGPoint )arg0 location:(struct CGPoint )arg1 ;
-(void)didMoveToView:(id)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif