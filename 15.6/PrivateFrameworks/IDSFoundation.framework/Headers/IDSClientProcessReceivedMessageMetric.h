// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSCLIENTPROCESSRECEIVEDMESSAGEMETRIC_H
#define IDSCLIENTPROCESSRECEIVEDMESSAGEMETRIC_H

@class NSString, NSDictionary;
@protocol CUTCoreAnalyticsMetric;

#import <Foundation/Foundation.h>


@interface IDSClientProcessReceivedMessageMetric : NSObject <CUTCoreAnalyticsMetric>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUInteger deltaTime; // ivar: _deltaTime
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger messageSize; // ivar: _messageSize
@property (readonly) NSString *name;
@property (readonly, nonatomic) NSUInteger priority; // ivar: _priority
@property (readonly, nonatomic) NSString *serviceIdentifier; // ivar: _serviceIdentifier
@property (readonly) Class superclass;


-(id)initWithServiceIdentifier:(id)arg0 messageSize:(NSUInteger)arg1 deltaTime:(NSUInteger)arg2 priority:(NSUInteger)arg3 ;


@end


#endif