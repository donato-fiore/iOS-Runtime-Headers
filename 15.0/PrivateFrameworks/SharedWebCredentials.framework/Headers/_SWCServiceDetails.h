// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SWCSERVICEDETAILS_H
#define _SWCSERVICEDETAILS_H

@class NSNumber;
@protocol SWCRedactedDescription, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_SWCServiceSpecifier.h"

@interface _SWCServiceDetails : NSObject <SWCRedactedDescription, NSSecureCoding>

 {
    SWCFields _fields;
}


@property (readonly, getter=isAlwaysEnabled) BOOL alwaysEnabled;
@property (readonly, getter=isApproved) BOOL approved;
@property (readonly, getter=isEnabledByDefault) NSNumber *enabledByDefault;
@property (readonly, getter=isEnterpriseManaged) BOOL enterpriseManaged;
@property (readonly) unsigned char frameworkApprovalState;
@property (readonly) char modeOfOperation;
@property (readonly, getter=wasProvidedByAdditionalServiceDetailsProvider) BOOL providedByAdditionalServiceDetailsProvider;
@property (readonly, getter=wasReadFromDisk) BOOL readFromDisk;
@property (readonly) _SWCServiceSpecifier *serviceSpecifier; // ivar: _serviceSpecifier
@property (readonly) unsigned char siteApprovalState;
@property (readonly, getter=isSystemApplication) BOOL systemApplication;
@property (readonly, getter=isSystemPlaceholder) BOOL systemPlaceholder;
@property (readonly, getter=isUpdating) BOOL updating;
@property (nonatomic) unsigned char userApprovalState;
@property (readonly, getter=isWatchKitExtension) BOOL watchKitExtension;


+(BOOL)auditTokenHasReadAccess:(struct ? )arg0 ;
+(BOOL)auditTokenHasWriteAccess:(struct ? )arg0 ;
+(BOOL)currentProcessHasReadAccess;
+(BOOL)currentProcessHasWriteAccess;
+(BOOL)isDeveloperModeEnabled;
+(BOOL)supportsSecureCoding;
+(id)_serviceDetailsWithServiceSpecifier:(id)arg0 URLComponents:(id)arg1 limit:(NSUInteger)arg2 callerAuditToken:(struct ? *)arg3 error:(*id)arg4 ;
+(id)new;
+(id)serviceDetailsWithServiceSpecifier:(id)arg0 URLComponents:(id)arg1 limit:(NSUInteger)arg2 auditToken:(struct ? )arg3 error:(*id)arg4 ;
+(id)serviceDetailsWithServiceSpecifier:(id)arg0 URLComponents:(id)arg1 limit:(NSUInteger)arg2 error:(*id)arg3 ;
+(id)serviceDetailsWithServiceSpecifier:(id)arg0 error:(*id)arg1 ;
+(id)serviceDetailsWithServiceSpecifier:(id)arg0 limit:(NSUInteger)arg1 auditToken:(struct ? )arg2 error:(*id)arg3 ;
+(id)serviceDetailsWithServiceSpecifier:(id)arg0 limit:(NSUInteger)arg1 error:(*id)arg2 ;
+(void)setAdditionalServiceDetailsForApplicationIdentifiers:(id)arg0 usingContentsOfDictionary:(id)arg1 completionHandler:(id)arg2 ;
+(void)setDeveloperModeEnabled:(BOOL)arg0 completionHandler:(id)arg1 ;
+(void)synchronizeWithCompletionHandler:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithServiceSpecifier:(id)arg0 fields:(struct SWCFields *)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg0 ;
-(void)waitForSiteApprovalWithCompletionHandler:(id)arg0 ;


@end


#endif