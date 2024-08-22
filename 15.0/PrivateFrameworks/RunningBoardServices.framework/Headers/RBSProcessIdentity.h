// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RBSPROCESSIDENTITY_H
#define RBSPROCESSIDENTITY_H

@class NSString, NSUUID;
@protocol RBSProcessMatching, RBSXPCSecureCoding, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "RBSProcessIdentifier.h"
#import "RBSProcessIdentity.h"

@interface RBSProcessIdentity : NSObject <RBSProcessMatching, RBSXPCSecureCoding, NSSecureCoding, NSCopying>

 {
    int _pid;
}


@property (readonly, nonatomic, getter=isXPCService) BOOL XPCService;
@property (readonly, nonatomic, getter=isAngel) BOOL angel;
@property (readonly, copy, nonatomic) NSString *angelJobLabel; // ivar: _angelJobLabel
@property (readonly, nonatomic, getter=isAnonymous) BOOL anonymous;
@property (readonly, nonatomic, getter=isApplication) BOOL application;
@property (readonly, copy, nonatomic) NSString *applicationJobLabel;
@property (readonly, nonatomic) unsigned int auid;
@property (readonly, nonatomic, getter=isDaemon) BOOL daemon;
@property (readonly, copy, nonatomic) NSString *daemonJobLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned char defaultManageFlags;
@property (readonly, copy) NSString *description; // ivar: _description
@property (readonly, nonatomic, getter=isEmbeddedApplication) BOOL embeddedApplication;
@property (readonly, copy, nonatomic) NSString *embeddedApplicationIdentifier;
@property (readonly, nonatomic, getter=isExtension) BOOL extension;
@property (readonly) NSUInteger hash; // ivar: _hash
@property (readonly, copy, nonatomic) RBSProcessIdentifier *hostIdentifier;
@property (readonly, copy, nonatomic) RBSProcessIdentity *hostIdentity;
@property (readonly, nonatomic) BOOL inheritsCoalitionBand;
@property (readonly, nonatomic) NSString *personaString;
@property (readonly, nonatomic) int platform;
@property (readonly, nonatomic) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, copy, nonatomic) NSString *xpcServiceIdentifier;


+(BOOL)shouldManageExtensionWithExtensionPoint:(id)arg0 ;
+(BOOL)supportsRBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
+(id)_identityForXPCServiceIdentifier:(id)arg0 variant:(NSInteger)arg1 ;
+(id)extensionIdentityForPlugInKitIdentifier:(id)arg0 hostIdentifier:(id)arg1 UUID:(id)arg2 ;
+(id)identityForAngelJobLabel:(id)arg0 ;
+(id)identityForApplicationJobLabel:(id)arg0 ;
+(id)identityForApplicationJobLabel:(id)arg0 bundleID:(id)arg1 platform:(int)arg2 ;
+(id)identityForDaemonJobLabel:(id)arg0 ;
+(id)identityForEmbeddedApplicationIdentifier:(id)arg0 ;
+(id)identityForEmbeddedApplicationIdentifier:(id)arg0 auid:(unsigned int)arg1 ;
+(id)identityForEmbeddedApplicationIdentifier:(id)arg0 jobLabel:(id)arg1 auid:(unsigned int)arg2 platform:(int)arg3 ;
+(id)identityForExecutablePath:(id)arg0 pid:(int)arg1 auid:(unsigned int)arg2 ;
+(id)identityForLSApplicationIdentity:(id)arg0 ;
+(id)identityForLaunchdJobLabel:(id)arg0 isMultiInstance:(BOOL)arg1 pid:(int)arg2 auid:(unsigned int)arg3 ;
+(id)identityForMacApplicationJobLabel:(id)arg0 appID:(id)arg1 platform:(int)arg2 ;
+(id)identityForMacApplicationJobLabel:(id)arg0 wrappedInfoProvider:(id)arg1 platform:(int)arg2 ;
+(id)identityForPlugInKitIdentifier:(id)arg0 ;
+(id)identityForWrappedInfoProviderIdentity:(id)arg0 ;
+(id)identityForXPCServiceExecutablePath:(id)arg0 host:(id)arg1 ;
+(id)identityForXPCServiceExecutablePath:(id)arg0 pid:(int)arg1 auid:(unsigned int)arg2 host:(id)arg3 UUID:(id)arg4 ;
+(id)identityForXPCServiceIdentifier:(id)arg0 ;
+(id)identityOfCurrentProcess;
-(BOOL)_matchesIdentity:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToIdentity:(id)arg0 ;
-(BOOL)matchesProcess:(id)arg0 ;
-(id)_init;
-(id)copyWithAuid:(unsigned int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)encodeForJob;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDecodeFromJob:(id)arg0 ;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(id)processPredicate;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif