// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PAGELOAD_H
#define PAGELOAD_H

@class NSTimer, NSDate, NSURL, NSError;

#import <Foundation/Foundation.h>


@interface PageLoad : NSObject {
    int _status;
    NSTimer *_timer;
    NSDate *_endRenderDate;
    NSDate *_startRenderFrameCountDate;
    NSDate *_endRenderFrameCountDate;
    NSInteger _startRenderFrameCount;
    NSInteger _endRenderFrameCount;
    NSUInteger memoryBeforeWarning;
    NSUInteger memoryAfterWarning;
}


@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (retain, nonatomic) NSDate *allSubresourcesLoadedDate; // ivar: _allSubresourcesLoadedDate
@property (nonatomic) CGSize contentSizeAtPageLoad; // ivar: _contentSizeAtPageLoad
@property (retain, nonatomic) NSDate *domContentLoadedDate; // ivar: _domContentLoadedDate
@property (retain, nonatomic) NSDate *endLoadDate; // ivar: _endLoadDate
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSDate *firstMeaningfulPaintDate; // ivar: _firstMeaningfulPaintDate
@property (retain, nonatomic) NSDate *firstVisualLayoutDate; // ivar: _firstVisualLayoutDate
@property (nonatomic) ? heapAfter; // ivar: _heapAfter
@property (nonatomic) ? heapBefore; // ivar: _heapBefore
@property (nonatomic) NSUInteger memoryAfterWarning; // ivar: _memoryAfterWarning
@property (nonatomic) NSUInteger memoryBeforeWarning; // ivar: _memoryBeforeWarning
@property (retain, nonatomic) NSDate *redirectDate; // ivar: _redirectDate
@property (retain, nonatomic) NSURL *redirectURL; // ivar: _redirectURL
@property (retain, nonatomic) NSDate *startRenderDate; // ivar: _startRenderDate
@property (nonatomic) BOOL swapProcess; // ivar: _swapProcess
@property (nonatomic, getter=isTooShortToScroll) BOOL tooShortToScroll; // ivar: _tooShortToScroll
@property (retain, nonatomic) NSDate *uiProcessStartDate; // ivar: _uiProcessStartDate
@property (nonatomic) NSUInteger uiProcessStartTime; // ivar: _uiProcessStartTime
@property (retain, nonatomic) NSDate *webContentProcessStartLoadDate; // ivar: _webContentProcessStartLoadDate


-(CGFloat)framesPerSecond;
-(CGFloat)renderDuration;
-(id)description;
-(id)initWithURL:(id)arg0 withProcessSwap:(BOOL)arg1 ;
-(id)statusString;
-(id)timer;
-(int)status;
-(void)dealloc;
-(void)finishRenderFps:(id)arg0 ;
-(void)finishRenderTime:(id)arg0 ;
-(void)setStatus:(int)arg0 ;
-(void)setTimer:(id)arg0 ;
-(void)startRenderFps:(id)arg0 ;
-(void)startRenderTime:(id)arg0 ;


@end


#endif