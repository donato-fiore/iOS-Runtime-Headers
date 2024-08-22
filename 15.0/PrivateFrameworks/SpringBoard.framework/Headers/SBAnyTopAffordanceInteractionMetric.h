// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBANYTOPAFFORDANCEINTERACTIONMETRIC_H
#define SBANYTOPAFFORDANCEINTERACTIONMETRIC_H

@class NSString;
@protocol SBFAnalyticsBackendEventHandling;

#import <Foundation/Foundation.h>


@interface SBAnyTopAffordanceInteractionMetric : NSObject <SBFAnalyticsBackendEventHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasSentEvent; // ivar: _hasSentEvent
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)handleEvent:(NSUInteger)arg0 withContext:(id)arg1 ;


@end


#endif