// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSSESSIONSTARTEDMETRIC_H
#define IDSSESSIONSTARTEDMETRIC_H

@class NSString, NSDictionary, NSNumber;
@protocol CUTCoreAnalyticsMetric;

#import <Foundation/Foundation.h>


@interface IDSSessionStartedMetric : NSObject <CUTCoreAnalyticsMetric>



@property (readonly, nonatomic) unsigned int clientType; // ivar: _clientType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSString *guid; // ivar: _guid
@property (readonly) NSUInteger hash;
@property (readonly) NSString *name;
@property (readonly, nonatomic) NSNumber *protocolVersionNumber; // ivar: _protocolVersionNumber
@property (readonly, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly) Class superclass;


-(id)initWithGuid:(id)arg0 protocolVersionNumber:(id)arg1 serviceName:(id)arg2 clientType:(unsigned int)arg3 ;


@end


#endif