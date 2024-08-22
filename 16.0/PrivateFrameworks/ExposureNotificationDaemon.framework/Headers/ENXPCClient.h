// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENXPCCLIENT_H
#define ENXPCCLIENT_H

@class ENRegion, NSString;

#import <Foundation/Foundation.h>


@interface ENXPCClient : NSObject

@property (nonatomic) int accessLevel; // ivar: _accessLevel
@property (readonly, nonatomic) int appAPIVersion; // ivar: _appAPIVersion
@property (readonly, copy, nonatomic) ENRegion *appRegion; // ivar: _appRegion
@property (readonly, nonatomic) BOOL entitledForDifferentialPrivacy; // ivar: _entitledForDifferentialPrivacy
@property (nonatomic) BOOL entitledForLogging; // ivar: _entitledForLogging
@property (readonly, nonatomic) BOOL entitledForTestVerification; // ivar: _entitledForTestVerification
@property (nonatomic) BOOL entitledToShowBuddy; // ivar: _entitledToShowBuddy
@property (nonatomic) BOOL entitledToSkipFileSigningVerification; // ivar: _entitledToSkipFileSigningVerification
@property (nonatomic) BOOL entitledToSkipKeyReleasePrompt; // ivar: _entitledToSkipKeyReleasePrompt
@property (nonatomic) int pid; // ivar: _pid
@property (copy, nonatomic) NSString *signingIdentity; // ivar: _signingIdentity


+(id)clientWithAuditToken:(struct ? )arg0 pid:(int)arg1 ;
-(id)description;
-(void)activateWithAppAPIVersion:(int)arg0 regionISO:(id)arg1 ;


@end


#endif