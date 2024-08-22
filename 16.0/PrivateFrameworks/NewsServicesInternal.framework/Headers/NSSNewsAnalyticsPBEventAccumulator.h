// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSSNEWSANALYTICSPBEVENTACCUMULATOR_H
#define NSSNEWSANALYTICSPBEVENTACCUMULATOR_H

@class NSMutableArray;
@protocol NSSNewsAnalyticsSessionManager;

#import <Foundation/Foundation.h>

#import "NSSNewsAnalyticsEnvelopeDescriptor.h"

@interface NSSNewsAnalyticsPBEventAccumulator : NSObject

@property (readonly, copy, nonatomic) NSSNewsAnalyticsEnvelopeDescriptor *envelopeDescriptor; // ivar: _envelopeDescriptor
@property (readonly, nonatomic) NSMutableArray *events; // ivar: _events
@property (readonly, weak, nonatomic) NSObject<NSSNewsAnalyticsSessionManager> *sessionManager; // ivar: _sessionManager


-(id)dequeueEventsIntoEnvelope;
-(id)init;
-(id)initWithEnvelopeDescriptor:(id)arg0 sessionManager:(id)arg1 ;
-(void)observeEvent:(id)arg0 ;
-(void)observeEvents:(id)arg0 ;


@end


#endif