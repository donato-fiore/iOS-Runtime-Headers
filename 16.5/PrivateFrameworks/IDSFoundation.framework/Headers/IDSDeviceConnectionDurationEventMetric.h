// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSDEVICECONNECTIONDURATIONEVENTMETRIC_H
#define IDSDEVICECONNECTIONDURATIONEVENTMETRIC_H

@class NSNumber, NSString, NSDictionary;
@protocol CUTCoreAnalyticsMetric;

#import <Foundation/Foundation.h>


@interface IDSDeviceConnectionDurationEventMetric : NSObject <CUTCoreAnalyticsMetric>



@property (readonly, nonatomic) NSNumber *clientInitTime; // ivar: _clientInitTime
@property (readonly, nonatomic) NSNumber *clientOpenSocketCompletionTime; // ivar: _clientOpenSocketCompletionTime
@property (readonly, nonatomic) NSNumber *connectionInitTime; // ivar: _connectionInitTime
@property (readonly, nonatomic) NSNumber *daemonOpenSocketCompletionTime; // ivar: _daemonOpenSocketCompletionTime
@property (readonly, nonatomic) NSNumber *daemonOpenSocketTime; // ivar: _daemonOpenSocketTime
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSNumber *firstPacketReceiveTime; // ivar: _firstPacketReceiveTime
@property (readonly) NSUInteger hash;
@property (readonly) NSString *name;
@property (readonly, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wasSuccessful; // ivar: _wasSuccessful


-(id)initWithService:(id)arg0 wasSuccessful:(BOOL)arg1 clientInitTime:(id)arg2 clientOpenSocketCompletionTime:(id)arg3 daemonOpenSocketTime:(id)arg4 daemonOpenSocketCompletionTime:(id)arg5 firstPacketReceiveTime:(id)arg6 connectionInitTime:(id)arg7 ;


@end


#endif