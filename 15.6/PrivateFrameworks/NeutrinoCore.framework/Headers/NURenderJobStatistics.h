// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NURENDERJOBSTATISTICS_H
#define NURENDERJOBSTATISTICS_H

@class NSString, NSArray;
@protocol NURenderStatistics;

#import <Foundation/Foundation.h>


@interface NURenderJobStatistics : NSObject <NURenderStatistics>



@property (readonly) CGFloat completeDuration;
@property (readonly) CGFloat completeLatency;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSArray *dependencies; // ivar: _dependencies
@property (readonly, copy) NSString *description;
@property CGFloat didCompleteTime; // ivar: _didCompleteTime
@property CGFloat didPrepareTime; // ivar: _didPrepareTime
@property CGFloat didRenderTime; // ivar: _didRenderTime
@property (readonly) CGFloat duration;
@property (readonly) NSUInteger hash;
@property (readonly) CGFloat latency;
@property (readonly) CGFloat prepareDuration;
@property (readonly) CGFloat prepareLatency;
@property (readonly) CGFloat renderDuration;
@property (readonly) CGFloat renderLatency;
@property (readonly) CGFloat replyLatency;
@property CGFloat requestTime; // ivar: _requestTime
@property CGFloat responseTime; // ivar: _responseTime
@property (readonly) Class superclass;
@property (readonly) CGFloat totalDuration;
@property CGFloat willCompleteTime; // ivar: _willCompleteTime
@property CGFloat willPrepareTime; // ivar: _willPrepareTime
@property CGFloat willRenderTime; // ivar: _willRenderTime


+(id)aggregateStatistics:(id)arg0 ;
+(id)history;
+(void)addStatisticsToHistory:(id)arg0 forJob:(id)arg1 wasCanceled:(BOOL)arg2 ;
+(void)recordJobCreatedToHistory:(id)arg0 ;
-(CGFloat)lastRecordedTime;
-(void)renderJob:(id)arg0 didRunStage:(NSInteger)arg1 ;
-(void)renderJob:(id)arg0 willRunStage:(NSInteger)arg1 ;


@end


#endif