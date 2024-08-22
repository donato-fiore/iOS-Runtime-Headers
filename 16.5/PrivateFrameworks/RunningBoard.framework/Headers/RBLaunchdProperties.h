// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBLAUNCHDPROPERTIES_H
#define RBLAUNCHDPROPERTIES_H

@class NSString, RBSProcessIdentity, NSUUID;

#import <Foundation/Foundation.h>


@interface RBLaunchdProperties : NSObject {
    NSInteger _type;
    NSString *_path;
    BOOL _explicitAngelFlag;
    BOOL _doesOverrideHasBackoff;
}


@property (readonly, nonatomic, getter=isXPCService) BOOL XPCService;
@property (readonly, nonatomic, getter=isAngel) BOOL angel;
@property (readonly, nonatomic) NSString *beforeTranslocationBundlePath; // ivar: _beforeTranslocationBundlePath
@property (readonly, nonatomic, getter=isDaemon) BOOL daemon;
@property (readonly, nonatomic) BOOL disableFreezing; // ivar: _disableFreezing
@property (readonly, nonatomic) BOOL doesOverrideManagement; // ivar: _doesOverrideManagement
@property (readonly, nonatomic) NSString *executablePath; // ivar: _executablePath
@property (readonly, nonatomic) BOOL hasBackoff; // ivar: _hasBackoff
@property (readonly, copy, nonatomic) NSString *homeDirectory; // ivar: _homeDirectory
@property (readonly, nonatomic) int hostPid; // ivar: _hostPid
@property (readonly, nonatomic) NSString *jobLabel; // ivar: _jobLabel
@property (readonly, nonatomic, getter=isMultiInstance) BOOL multiInstance; // ivar: _multiInstance
@property (readonly, nonatomic) unsigned char overrideManageFlags; // ivar: _overrideManageFlags
@property (readonly, copy, nonatomic) RBSProcessIdentity *specifiedIdentity; // ivar: _specifiedIdentity
@property (readonly, copy, nonatomic) NSString *tmpDirectory; // ivar: _tmpDirectory
@property (readonly, nonatomic) NSString *underlyingAssertion; // ivar: _underlyingAssertion
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (readonly, nonatomic, getter=hasVariableEUID) BOOL variableEUID; // ivar: _variableEUID


+(id)_instanceWithProperties:(id)arg0 xpcProps:(id)arg1 ;
+(id)processIdentityForEndpoint:(id)arg0 ;
+(id)propertiesForJob:(id)arg0 ;
+(id)propertiesForLabel:(id)arg0 error:(*id)arg1 ;
+(id)propertiesForPid:(int)arg0 ;
-(id)_configureAppWithProperties:(id)arg0 ;
-(id)_configureDaemonOrAngelWithProperties:(id)arg0 path:(id)arg1 isAngel:(BOOL)arg2 ;
-(id)_configureXPCServiceWithProperties:(id)arg0 HostPid:(int)arg1 ;
-(id)_initWithProperties:(id)arg0 xpcProps:(id)arg1 ;
-(id)resolvedIdentity;
-(id)resolvedIdentityWithPid:(int)arg0 auid:(unsigned int)arg1 ;
-(void)_parseAdditionalProperties:(id)arg0 ;
-(void)_parseLASSProperties:(id)arg0 ;


@end


#endif