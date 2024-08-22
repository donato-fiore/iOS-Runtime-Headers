// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSKEYTRANSPARENCYTRUSTEDDEVICEENROLLMENTMETRIC_H
#define IDSKEYTRANSPARENCYTRUSTEDDEVICEENROLLMENTMETRIC_H

@class NSString, NSDictionary;
@protocol CUTRTCMetric;

#import <Foundation/Foundation.h>


@interface IDSKeyTransparencyTrustedDeviceEnrollmentMetric : NSObject <CUTRTCMetric>



@property (readonly, nonatomic) NSInteger accountKeyErrorCode; // ivar: _accountKeyErrorCode
@property (readonly, nonatomic) NSString *accountKeyErrorDomain; // ivar: _accountKeyErrorDomain
@property (readonly, nonatomic) CGFloat accountKeyOperationTimeInterval; // ivar: _accountKeyOperationTimeInterval
@property (readonly, nonatomic) BOOL accountKeySuccess; // ivar: _accountKeySuccess
@property (readonly, nonatomic) NSInteger accountKeyUnderlyingErrorCode; // ivar: _accountKeyUnderlyingErrorCode
@property (readonly, nonatomic) NSString *accountKeyUnderlyingErrorDomain; // ivar: _accountKeyUnderlyingErrorDomain
@property (readonly, nonatomic) NSInteger cloudKitErrorCode; // ivar: _cloudKitErrorCode
@property (readonly, nonatomic) NSString *cloudKitErrorDomain; // ivar: _cloudKitErrorDomain
@property (readonly, nonatomic) CGFloat cloudKitOperationTimeInterval; // ivar: _cloudKitOperationTimeInterval
@property (readonly, nonatomic) BOOL cloudKitSuccess; // ivar: _cloudKitSuccess
@property (readonly, nonatomic) NSInteger cloudKitUnderlyingErrorCode; // ivar: _cloudKitUnderlyingErrorCode
@property (readonly, nonatomic) NSString *cloudKitUnderlyingErrorDomain; // ivar: _cloudKitUnderlyingErrorDomain
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger keyTransparencyVersion; // ivar: _keyTransparencyVersion
@property (readonly) NSString *name;
@property (readonly) unsigned short rtcType;
@property (readonly) Class superclass;


-(id)initWithKeyTransparencyVersion:(NSUInteger)arg0 cloudKitSuccess:(BOOL)arg1 cloudKitErrorDomain:(id)arg2 cloudKitErrorCode:(NSInteger)arg3 cloudKitUnderlyingErrorDomain:(id)arg4 cloudKitUnderlyingErrorCode:(NSInteger)arg5 cloudKitOperationTimeInterval:(CGFloat)arg6 accountKeySuccess:(BOOL)arg7 accountKeyErrorDomain:(id)arg8 accountKeyErrorCode:(NSInteger)arg9 accountKeyUnderlyingErrorDomain:(id)arg10 accountKeyUnderlyingErrorCode:(NSInteger)arg11 accountKeyOperationTimeInterval:(CGFloat)arg12 ;


@end


#endif