// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CARPFPROCESSINFO_H
#define CARPFPROCESSINFO_H

@class NSString, NSURL, NSBundle;
@protocol CARPFLogging;


#import "CARPFObject.h"
#import "CARPFBoolean.h"

@interface CARPFProcessInfo : CARPFObject <CARPFLogging>

 {
    *? _auditToken;
    NSString *_applicationIdentifier;
}


@property (readonly, copy) NSString *applicationIdentifier;
@property (readonly, copy, getter=isCodeSigned) CARPFBoolean *codeSigned;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSURL *executableURL; // ivar: _executableURL
@property (readonly) NSUInteger hash;
@property (readonly) int identifier; // ivar: _identifier
@property (readonly, copy) NSBundle *mainBundle;
@property (readonly, copy) NSURL *mainBundleURL; // ivar: _mainBundleURL
@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly, copy, getter=isPlatformBinary) CARPFBoolean *platformBinary;
@property (readonly) Class superclass;


+(id)logCategory;
+(id)processInfo;
+(id)processInfoForXPCConnection:(id)arg0 ;
-(BOOL)getAuditToken:(struct ? *)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)carpf_shortDescription;
-(id)init;
-(id)initWithAuditToken:(struct ? )arg0 ;
-(id)initWithIdentifier:(int)arg0 ;
-(id)logIdentifier;
-(id)valueForEntitlement:(id)arg0 ;
-(void)dealloc;


@end


#endif