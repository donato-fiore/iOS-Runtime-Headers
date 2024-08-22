// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKINHERITANCECONTEXT_H
#define AKINHERITANCECONTEXT_H

@class NSString, NSDictionary;
@protocol AKAuthenticationContext, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "AKInheritanceAccessKey.h"
#import "AKDevice.h"
#import "AKBeneficiaryManifest.h"

@interface AKInheritanceContext : NSObject <AKAuthenticationContext, NSSecureCoding, NSCopying>



@property (copy, nonatomic, setter=_setProxiedAppName:) NSString *_proxiedAppName; // ivar: _proxiedAppName
@property (retain, nonatomic) AKInheritanceAccessKey *accessKey; // ivar: _accessKey
@property (copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (copy, nonatomic) NSString *appProvidedContext; // ivar: _appProvidedContext
@property (copy, nonatomic) NSDictionary *appProvidedData; // ivar: _appProvidedData
@property (nonatomic) NSInteger authenticationMode; // ivar: authenticationMode
@property (copy, nonatomic) NSString *beneficiaryIdentifier; // ivar: _beneficiaryIdentifier
@property (copy, nonatomic) NSString *beneficiarySetupToken; // ivar: _beneficiarySetupToken
@property (nonatomic) BOOL cliMode;
@property (copy, nonatomic) AKDevice *companionDevice; // ivar: _companionDevice
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AKBeneficiaryManifest *manifest; // ivar: _manifest
@property (copy, nonatomic) AKDevice *proxiedDevice; // ivar: _proxiedDevice
@property (nonatomic) NSInteger serviceType; // ivar: _serviceType
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAuthenticationContext:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOwnerAltDSID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif