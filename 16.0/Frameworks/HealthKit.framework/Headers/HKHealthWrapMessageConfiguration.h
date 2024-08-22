// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKHEALTHWRAPMESSAGECONFIGURATION_H
#define HKHEALTHWRAPMESSAGECONFIGURATION_H

@class NSData, NSString, NSDate, NSDictionary, NSUUID;

#import <Foundation/Foundation.h>


@interface HKHealthWrapMessageConfiguration : NSObject

@property (copy, nonatomic) NSData *applicationData; // ivar: _applicationData
@property (readonly, nonatomic) *__SecCertificate certificate; // ivar: _certificate
@property (readonly, copy, nonatomic) NSString *channel; // ivar: _channel
@property (nonatomic) BOOL disableCompression; // ivar: _disableCompression
@property (copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (copy, nonatomic) NSDictionary *keyValuePairs; // ivar: _keyValuePairs
@property (copy, nonatomic) NSString *payloadIdentifier; // ivar: _payloadIdentifier
@property (copy, nonatomic) NSString *payloadType; // ivar: _payloadType
@property (copy, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, copy, nonatomic) NSUUID *studyUUID; // ivar: _studyUUID
@property (readonly, copy, nonatomic) NSUUID *subjectUUID; // ivar: _subjectUUID


-(id)initWithChannel:(id)arg0 payloadType:(id)arg1 certificate:(struct __SecCertificate *)arg2 ;
-(id)initWithSubjectUUID:(id)arg0 studyUUID:(id)arg1 channel:(id)arg2 payloadType:(id)arg3 certificate:(struct __SecCertificate *)arg4 ;
-(void)dealloc;


@end


#endif