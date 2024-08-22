// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWAUTOFOCUSDRIVERSHORTSTATISTICSANALYTICSPAYLOAD_H
#define BWAUTOFOCUSDRIVERSHORTSTATISTICSANALYTICSPAYLOAD_H

@class NSDictionary, NSString;
@protocol BWCoreAnalyticsPayload;

#import <Foundation/Foundation.h>


@interface BWAutoFocusDriverShortStatisticsAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>



@property (retain, nonatomic) NSDictionary *afDriverShortStatistics; // ivar: _afDriverShortStatistics
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
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