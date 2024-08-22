// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SRHMEDIAEVENTSCOLLECTOR_H
#define SRHMEDIAEVENTSCOLLECTOR_H

@class UIScrollView, UIScrollViewMonitor;
@protocol UIScrollViewMonitorDelegate;

#import <Foundation/Foundation.h>

#import "SRHMediaViewsStore.h"

@interface SRHMediaEventsCollector : NSObject <UIScrollViewMonitorDelegate>

 {
    UIScrollView *_scrollView;
    UIScrollViewMonitor *_scrollViewMonitor;
    SRHMediaViewsStore *_mediaViewsStore;
}




+(void)initialize;
-(NSInteger)_addMediaSubviewsOfView:(id)arg0 viewsTraversed:(NSInteger)arg1 ;
-(NSInteger)_removeMediaSubviewsOfView:(id)arg0 viewsTraversed:(NSInteger)arg1 ;
-(id)initWithScrollView:(id)arg0 scrollMonitor:(id)arg1 ;
-(id)initWithScrollView:(id)arg0 scrollMonitor:(id)arg1 mediaViewsStore:(id)arg2 ;
-(void)_addMediaSubviewsOfView:(id)arg0 ;
-(void)_checkViewForMediaContent:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_removeMediaSubviewsOfView:(id)arg0 ;
-(void)dealloc;
-(void)didBecomeActive;
-(void)didEnterBackground;
-(void)scrollViewMonitorDidStartMonitoring:(id)arg0 ;
-(void)scrollViewMonitorDidStopMonitoring:(id)arg0 ;
-(void)scrollViewMonitorScrollDid:(id)arg0 addView:(id)arg1 removeView:(id)arg2 ;
-(void)scrollViewMonitorScrollDidScrolled:(id)arg0 ;


@end


#endif