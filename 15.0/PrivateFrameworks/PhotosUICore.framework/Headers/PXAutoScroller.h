// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXAUTOSCROLLER_H
#define PXAUTOSCROLLER_H

@protocol PXAutoScrollerDelegate, PXAnonymousScrollView;

#import <Foundation/Foundation.h>


@interface PXAutoScroller : NSObject {
    ? _delegateRespondsTo;
}


@property (nonatomic, setter=_setAutoscrollDirection:) CGPoint _autoscrollDirection; // ivar: __autoscrollDirection
@property (nonatomic, setter=_setLastUpdateTimestamp:) CGFloat _lastUpdateTimestamp; // ivar: __lastUpdateTimestamp
@property (readonly, nonatomic) CGFloat _margin; // ivar: __margin
@property (readonly, nonatomic) CGFloat _maximumSpeed; // ivar: __maximumSpeed
@property (nonatomic, getter=_isRepeating, setter=_setRepeating:) BOOL _repeating; // ivar: __repeating
@property (weak, nonatomic) NSObject<PXAutoScrollerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<PXAnonymousScrollView> *scrollView; // ivar: _scrollView


-(BOOL)autoscrollWithOffset:(struct CGPoint )arg0 ;
-(id)init;
-(id)initWithTargetScrollView:(id)arg0 ;
-(struct CGRect )visibleRectForScrollView:(id)arg0 ;
-(void)startRepeating;
-(void)stop;
-(void)stopRepeating;
-(void)updateWithTimestamp:(CGFloat)arg0 ;
-(void)updateWithUserInteractionLocation:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 ;


@end


#endif