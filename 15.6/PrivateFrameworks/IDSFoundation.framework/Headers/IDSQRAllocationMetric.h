// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSQRALLOCATIONMETRIC_H
#define IDSQRALLOCATIONMETRIC_H

@class NSString, NSDictionary;
@protocol CUTCoreAnalyticsMetric;

#import <Foundation/Foundation.h>


@interface IDSQRAllocationMetric : NSObject <CUTCoreAnalyticsMetric>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSUInteger duration; // ivar: _duration
@property (readonly, nonatomic) unsigned int hasRecipientAccepted; // ivar: _hasRecipientAccepted
@property (readonly) NSUInteger hash;
@property (readonly) NSString *name;
@property (readonly, nonatomic) unsigned int payloadSize; // ivar: _payloadSize
@property (readonly, nonatomic) unsigned int result; // ivar: _result
@property (readonly, nonatomic) NSString *service; // ivar: _service
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *topic; // ivar: _topic


-(id)initWithDuration:(NSUInteger)arg0 result:(unsigned int)arg1 hasRecipientAccepted:(unsigned int)arg2 payloadSize:(unsigned int)arg3 topic:(id)arg4 service:(id)arg5 ;


@end


#endif