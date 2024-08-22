// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMFPROCESSINFO_H
#define HMFPROCESSINFO_H

@class NSString, NSURL, NSBundle;
@protocol HMFLogging;


#import "HMFObject.h"
#import "HMFBoolean.h"

@interface HMFProcessInfo : HMFObject <HMFLogging>

 {
    *? _auditToken;
}


@property (readonly, copy) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (readonly, copy, getter=isCodeSigned) HMFBoolean *codeSigned;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSURL *executableURL; // ivar: _executableURL
@property (readonly) NSUInteger hash;
@property (readonly) int identifier; // ivar: _identifier
@property (readonly, copy) NSBundle *mainBundle;
@property (readonly, copy) NSURL *mainBundleURL; // ivar: _mainBundleURL
@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly, copy, getter=isPlatformBinary) HMFBoolean *platformBinary;
@property (readonly, copy) NSString *signingIdentifier; // ivar: _signingIdentifier
@property (readonly) Class superclass;


+(id)logCategory;
+(id)processInfo;
+(id)processInfoForXPCConnection:(id)arg0 ;
-(BOOL)getAuditToken:(struct ? *)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)init;
-(id)initWithAuditToken:(struct ? )arg0 ;
-(id)initWithIdentifier:(int)arg0 ;
-(id)logIdentifier;
-(id)shortDescription;
-(id)valueForEntitlement:(id)arg0 ;
-(void)dealloc;


@end


#endif