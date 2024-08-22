// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSLOCALDELIVERYMESSAGESENTMETRIC_H
#define IDSLOCALDELIVERYMESSAGESENTMETRIC_H

@class NSString, NSDictionary;
@protocol CUTCoreAnalyticsMetric;

#import <Foundation/Foundation.h>


@interface IDSLocalDeliveryMessageSentMetric : NSObject <CUTCoreAnalyticsMetric>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isToDefaultPairedDevice; // ivar: _isToDefaultPairedDevice
@property (readonly, nonatomic) NSUInteger linkType; // ivar: _linkType
@property (readonly, nonatomic) NSUInteger messageSize; // ivar: _messageSize
@property (readonly) NSString *name;
@property (readonly, nonatomic) NSUInteger priority; // ivar: _priority
@property (readonly, nonatomic) NSString *service; // ivar: _service
@property (readonly) Class superclass;


-(id)initWithService:(id)arg0 isToDefaultPairedDevice:(BOOL)arg1 messageSize:(NSUInteger)arg2 linkType:(NSUInteger)arg3 priority:(NSUInteger)arg4 ;


@end


#endif