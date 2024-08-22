// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15PROMOTEDCONTENT19METRICEVENTSTRACKER_H
#define _TTC15PROMOTEDCONTENT19METRICEVENTSTRACKER_H

@class SwiftObject, NSDate;
@protocol APPCMetricEventsTracking;



@interface _TtC15PromotedContent19MetricEventsTracker : SwiftObject <APPCMetricEventsTracking>

 {
    ? finalPromotedContent;
    ? placeholderPlacedTimestamp;
    ? replacedPlaceholderTimestamp;
    ? adRequestTimestamp;
    ? adResponseTimestamp;
    ? prerollAdRequestTimestamp;
    ? prerollAdResponseTimestamp;
    ? analyticsEventName;
    ? intervalKey;
    ? intervalTypeKey;
    ? networkTypeKey;
    ? placementTypeKey;
    ? failedKey;
}


@property (nonatomic, copy) NSDate *adResponseTimestamp;
@property (nonatomic, copy) NSDate *placeholderPlacedTimestamp;
@property (nonatomic, copy) NSDate *prerollAdRequestTimestamp;
@property (nonatomic, copy) NSDate *prerollAdResponseTimestamp;
@property (nonatomic, copy) NSDate *replacedPlaceholderTimestamp;


-(void)didPlacePlaceholder;
-(void)didReceiveAdResponse;
-(void)didReceivePrerollVideoResponse;
-(void)didReplacePlaceholder;
-(void)didRequestPrerollVideo;
-(void)sendAnalyticsEventFor:(NSInteger)arg0 interval:(CGFloat)arg1 networkType:(NSUInteger)arg2 placementType:(NSUInteger)arg3 failed:(BOOL)arg4 ;


@end


#endif