// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXANALYTICSSLIDESHOWINFO_H
#define _PXANALYTICSSLIDESHOWINFO_H

@protocol CPAnalyticsEventProtocol;

#import <Foundation/Foundation.h>


@interface _PXAnalyticsSlideshowInfo : NSObject

@property (nonatomic) NSInteger appSuspensionCount; // ivar: _appSuspensionCount
@property (retain, nonatomic) NSObject<CPAnalyticsEventProtocol> *endEvent; // ivar: _endEvent
@property (readonly, nonatomic) NSObject<CPAnalyticsEventProtocol> *lastPauseEvent; // ivar: _lastPauseEvent
@property (readonly, nonatomic) NSInteger pauseCount; // ivar: _pauseCount
@property (nonatomic) NSInteger signpostID; // ivar: _signpostID
@property (retain, nonatomic) NSObject<CPAnalyticsEventProtocol> *startEvent; // ivar: _startEvent
@property (readonly, nonatomic) CGFloat timePaused; // ivar: _timePaused


-(void)pauseWithEvent:(id)arg0 ;
-(void)unpauseWithEvent:(id)arg0 ;


@end


#endif