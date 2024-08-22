// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXTRIMSCRUBBERLAYOUTHELPER_H
#define PXTRIMSCRUBBERLAYOUTHELPER_H


#import <Foundation/Foundation.h>


@interface PXTrimScrubberLayoutHelper : NSObject

@property (nonatomic) ? duration; // ivar: _duration
@property (readonly, nonatomic) CGRect durationInsetFilmstripFrame;
@property (nonatomic) CGRect filmstripFrame; // ivar: _filmstripFrame
@property (nonatomic) CGRect filmstripFrameInScrubberSpace; // ivar: _filmstripFrameInScrubberSpace
@property (nonatomic) CGFloat filmstripScale; // ivar: _filmstripScale
@property (nonatomic) UIEdgeInsets horizontalTimelineInset; // ivar: _horizontalTimelineInset
@property (nonatomic) BOOL needsUpdate; // ivar: _needsUpdate
@property (nonatomic) CGFloat pivotAnchor; // ivar: _pivotAnchor
@property (nonatomic) CGRect viewportFrame; // ivar: _viewportFrame
@property (nonatomic) CGRect visibleFrameInFilmstripSpace; // ivar: _visibleFrameInFilmstripSpace


-(CGFloat)offsetInScrubberSpaceForTime:(struct ? )arg0 ;
-(CGFloat)offsetInScrubberSpaceForTime:(struct ? )arg0 fallbackAnchor:(CGFloat)arg1 ;
-(CGFloat)offsetInViewportSpaceForTime:(struct ? )arg0 ;
-(CGFloat)offsetInViewportSpaceForTime:(struct ? )arg0 fallbackAnchor:(CGFloat)arg1 ;
-(id)init;
-(struct ? )timeForOffsetInScrubberSpace:(CGFloat)arg0 ;
-(void)_updateIfNeeded;


@end


#endif