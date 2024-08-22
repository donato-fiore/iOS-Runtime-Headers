// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDRAWERDRAGTRACKER_H
#define WFDRAWERDRAGTRACKER_H

@class NSString;
@protocol WFDrawerDragTracking;

#import <Foundation/Foundation.h>

#import "WFDrawerGestureCoordinator.h"

@interface WFDrawerDragTracker : NSObject <WFDrawerDragTracking>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) WFDrawerGestureCoordinator *gestureCoordinator; // ivar: _gestureCoordinator
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat initialHeight; // ivar: _initialHeight
@property (readonly) CGFloat maxTranslationY; // ivar: _maxTranslationY
@property (readonly) CGFloat minTranslationY; // ivar: _minTranslationY
@property (readonly) Class superclass;
@property (nonatomic) BOOL tracking; // ivar: _tracking


-(CGFloat)currentHeight;
-(id)initWithGestureCoordinator:(id)arg0 ;
-(void)beginDragging;
-(void)endDragging;
-(void)endDraggingWithAnimation:(id)arg0 ;
-(void)updateDragForVerticalTranslation:(CGFloat)arg0 ;


@end


#endif