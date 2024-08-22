// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RBSLAUNCHCONTEXT_H
#define RBSLAUNCHCONTEXT_H

@class NSDictionary, NSArray, NSString, RBProcess, NSUUID, NSNumber;
@protocol RBSXPCSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "RBSProcessIdentity.h"

@interface RBSLaunchContext : NSObject <RBSXPCSecureCoding, NSCopying>



@property (copy, nonatomic, setter=_setAdditionalEnvironment:) NSDictionary *_additionalEnvironment; // ivar: __additionalEnvironment
@property (copy, nonatomic, setter=_setAdditionalMachServices:) NSArray *_additionalMachServices; // ivar: __additionalMachServices
@property (copy, nonatomic, setter=_setOverrideExecutablePath:) NSString *_overrideExecutablePath; // ivar: __overrideExecutablePath
@property (copy, nonatomic) NSArray *arguments; // ivar: _arguments
@property (copy, nonatomic) NSArray *attributes; // ivar: _attributes
@property (copy, nonatomic) NSString *beforeTranslocationBundlePath; // ivar: _beforeTranslocationBundlePath
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDictionary *environment;
@property (copy, nonatomic) NSString *executablePath;
@property (nonatomic) NSUInteger executionOptions; // ivar: _executionOptions
@property (copy, nonatomic) NSString *explanation; // ivar: _explanation
@property (retain, nonatomic) NSDictionary *extensionOverlay; // ivar: _extensionOverlay
@property (nonatomic) BOOL forceSubmit; // ivar: _forceSubmit
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *homeDirectory; // ivar: _homeDirectory
@property (nonatomic) int hostPid; // ivar: _hostPid
@property (retain, nonatomic) RBProcess *hostProcess; // ivar: _hostProcess
@property (copy, nonatomic) RBSProcessIdentity *identity; // ivar: _identity
@property (nonatomic) unsigned char initialRole; // ivar: _initialRole
@property (copy, nonatomic) NSArray *lsBinpref; // ivar: _lsBinpref
@property (copy, nonatomic) NSArray *lsBinprefSubtype; // ivar: _lsBinprefSubtype
@property (nonatomic) unsigned int lsInitialRole;
@property (nonatomic) BOOL lsManageRoleOnly; // ivar: _lsManageRoleOnly
@property (nonatomic) unsigned int lsPersona; // ivar: _lsPersona
@property (nonatomic) NSUInteger lsSpawnFlags; // ivar: _lsSpawnFlags
@property (nonatomic) unsigned short lsUMask; // ivar: _lsUMask
@property (copy, nonatomic) NSArray *machServices;
@property (copy, nonatomic) NSString *managedPersona; // ivar: _managedPersona
@property (retain, nonatomic) NSUUID *oneShotUUID; // ivar: _oneShotUUID
@property (copy, nonatomic) NSUUID *requiredCacheUUID; // ivar: _requiredCacheUUID
@property (copy, nonatomic) NSNumber *requiredSequenceNumber; // ivar: _requiredSequenceNumber
@property (nonatomic) unsigned char spawnType; // ivar: _spawnType
@property (copy, nonatomic) NSString *standardErrorPath; // ivar: _standardErrorPath
@property (copy, nonatomic) NSString *standardInPath; // ivar: _standardInPath
@property (copy, nonatomic) NSString *standardOutputPath; // ivar: _standardOutputPath
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *tmpDirectory; // ivar: _tmpDirectory


+(BOOL)supportsRBSXPCSecureCoding;
+(id)context;
+(id)contextWithIdentity:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif