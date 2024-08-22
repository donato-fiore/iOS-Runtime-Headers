// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHSYNDICATEDASSETSMETRICEVENT_H
#define PGGRAPHSYNDICATEDASSETSMETRICEVENT_H

@class NSDictionary;


#import "PGAbstractMetricEvent.h"
#import "PGManagerWorkingContext.h"

@interface PGGraphSyndicatedAssetsMetricEvent : PGAbstractMetricEvent {
    NSDictionary *_payload;
}


@property (retain, nonatomic) PGManagerWorkingContext *workingContext; // ivar: _workingContext


-(id)identifier;
-(id)initWithWorkingContext:(id)arg0 ;
-(id)payload;
-(void)gatherMetricsWithProgressBlock:(id)arg0 ;


@end


#endif