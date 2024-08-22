// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSWIFISETUPATTEMPTMETRIC_H
#define IDSWIFISETUPATTEMPTMETRIC_H

@class NSString, NSDictionary;
@protocol CUTCoreAnalyticsMetric;

#import <Foundation/Foundation.h>


@interface IDSWiFiSetupAttemptMetric : NSObject <CUTCoreAnalyticsMetric>



@property (readonly, nonatomic) NSUInteger attemptType; // ivar: _attemptType
@property (readonly, nonatomic) NSString *client; // ivar: _client
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger msDuration; // ivar: _msDuration
@property (readonly) NSString *name;
@property (readonly, nonatomic) NSUInteger result; // ivar: _result
@property (readonly) Class superclass;


-(id)initWithAttemptType:(NSUInteger)arg0 msDuration:(NSUInteger)arg1 result:(NSUInteger)arg2 client:(id)arg3 ;


@end


#endif