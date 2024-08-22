// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSPANNINGSCROLLVIEW_H
#define SSPANNINGSCROLLVIEW_H

@class UIScrollView, NSTimer;



@interface SSPanningScrollView : UIScrollView {
    NSInteger mPanningMode;
    NSTimer *mPanningTimer;
    BOOL _leftPanActive;
    BOOL _rightPanActive;
    BOOL _topPanActive;
    BOOL _bottomPanActive;
    CGRect leftRect;
    CGRect rightRect;
    CGRect topRect;
    CGRect bottomRect;
}


@property BOOL disablePanningEvents; // ivar: mDisablePanningEvents
@property CGPoint lastPoint; // ivar: lastPoint
@property NSInteger panningMode;
@property BOOL showDisconnectedBlurring; // ivar: mShowDisconnectedBlurring


+(BOOL)isCompatibleWithResponsiveScrolling;
-(BOOL)allowsVibrancy;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)commonInitialization;
-(void)dealloc;
-(void)restoreScrollPoint;
-(void)scrollToCursor:(struct CGPoint )arg0 animate:(BOOL)arg1 ;
-(void)setupTrackingArea;
-(void)updateTrackingAreas;


@end


#endif