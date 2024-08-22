// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIROSCROLLVIEWSPEEDOMETER_H
#define MIROSCROLLVIEWSPEEDOMETER_H

@class UIScrollView, NSTimer;
@protocol MiroScrollViewSpeedometerDelegate;

#import <Foundation/Foundation.h>


@interface MiroScrollViewSpeedometer : NSObject {
    BOOL _delegateSupportsRegimeChange;
}


@property (nonatomic, setter=_setLastContentOffset:) CGPoint _lastContentOffset; // ivar: __lastContentOffset
@property (nonatomic, setter=_setLastContentSize:) CGSize _lastContentSize; // ivar: __lastContentSize
@property (weak, nonatomic, setter=_setLastScrollView:) UIScrollView *_lastScrollView; // ivar: __lastScrollView
@property (nonatomic, setter=_setLastTime:) CGFloat _lastTime; // ivar: __lastTime
@property (nonatomic, setter=_setNextRegime:) NSInteger _nextRegime; // ivar: __nextRegime
@property (nonatomic, setter=_setNextRegimeCount:) NSInteger _nextRegimeCount; // ivar: __nextRegimeCount
@property (retain, nonatomic, setter=_setTimeoutTimer:) NSTimer *_timeoutTimer; // ivar: __timeoutTimer
@property (weak, nonatomic) NSObject<MiroScrollViewSpeedometerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat fastLowerThreshold; // ivar: _fastLowerThreshold
@property (nonatomic) CGFloat fastUpperThreshold; // ivar: _fastUpperThreshold
@property (nonatomic) CGFloat mediumLowerThreshold; // ivar: _mediumLowerThreshold
@property (nonatomic) CGFloat mediumUpperThreshold; // ivar: _mediumUpperThreshold
@property (nonatomic, setter=_setRegime:) NSInteger regime; // ivar: _regime
@property (nonatomic, setter=_setScrollSpeed:) CGPoint scrollSpeed; // ivar: _scrollSpeed


-(NSInteger)_newRegimeForScrollSpeed:(struct CGPoint )arg0 ;
-(void)_handleTimeoutTimer:(id)arg0 ;
-(void)_rescheduleTimeout;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewDidScrollToTop:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillScrollToTop:(id)arg0 ;


@end


#endif