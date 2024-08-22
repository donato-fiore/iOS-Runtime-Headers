// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWTOFASSISTEDAUTOFOCUSESTIMATORANALYTICSPAYLOAD_H
#define BWTOFASSISTEDAUTOFOCUSESTIMATORANALYTICSPAYLOAD_H

@class NSString, NSDictionary;
@protocol BWCoreAnalyticsPayload;

#import <Foundation/Foundation.h>


@interface BWTOFAssistedAutoFocusEstimatorAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDictionary *estimatorResults; // ivar: _estimatorResults
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *portType; // ivar: _portType
@property (readonly) Class superclass;


-(id)eventDictionary;
-(id)eventName;
-(id)init;
-(void)dealloc;
-(void)reset;


@end


#endif