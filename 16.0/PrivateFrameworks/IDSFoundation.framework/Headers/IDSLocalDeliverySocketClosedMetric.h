// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSLOCALDELIVERYSOCKETCLOSEDMETRIC_H
#define IDSLOCALDELIVERYSOCKETCLOSEDMETRIC_H

@class NSString, NSDictionary;
@protocol CUTCoreAnalyticsMetric;

#import <Foundation/Foundation.h>


@interface IDSLocalDeliverySocketClosedMetric : NSObject <CUTCoreAnalyticsMetric>



@property (readonly, nonatomic) NSUInteger bytesReceived; // ivar: _bytesReceived
@property (readonly, nonatomic) NSUInteger bytesSent; // ivar: _bytesSent
@property (readonly, nonatomic) NSUInteger closeError; // ivar: _closeError
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isToDefaultPairedDevice; // ivar: _isToDefaultPairedDevice
@property (readonly) NSString *name;
@property (readonly, nonatomic) NSUInteger packetsReceived; // ivar: _packetsReceived
@property (readonly, nonatomic) NSUInteger packetsSent; // ivar: _packetsSent
@property (readonly, nonatomic) NSString *service; // ivar: _service
@property (readonly, nonatomic) NSUInteger socketError; // ivar: _socketError
@property (readonly) Class superclass;


-(id)initWithService:(id)arg0 isToDefaultPairedDevice:(BOOL)arg1 closeError:(NSUInteger)arg2 socketError:(NSUInteger)arg3 bytesSent:(NSUInteger)arg4 packetsSent:(NSUInteger)arg5 bytesReceived:(NSUInteger)arg6 packetsReceived:(NSUInteger)arg7 ;


@end


#endif