// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWMULTITASKINGSESSIONANALYTICSPAYLOAD_H
#define BWMULTITASKINGSESSIONANALYTICSPAYLOAD_H

@class NSString;
@protocol BWCoreAnalyticsPayload;

#import <Foundation/Foundation.h>


@interface BWMultitaskingSessionAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>



@property (copy, nonatomic) NSString *clientApplicationID; // ivar: _clientApplicationID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL pipEnabled; // ivar: _pipEnabled
@property (readonly) Class superclass;
@property (nonatomic) BOOL windowed; // ivar: _windowed


-(id)eventDictionary;
-(id)eventName;
-(id)init;
-(void)dealloc;
-(void)reset;


@end


#endif