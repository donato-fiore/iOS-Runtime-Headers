// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBSSCENECLIENTIDENTITY_H
#define FBSSCENECLIENTIDENTITY_H

@class NSString, RBSProcessHandle, RBSProcessIdentity, FBProcess;
@protocol FBSSceneClientIdentifying, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FBSSceneClientIdentity : NSObject <FBSSceneClientIdentifying, NSCopying, NSSecureCoding>

 {
    NSString *_description;
}


@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isLocal) BOOL local; // ivar: _local
@property (readonly, nonatomic) RBSProcessHandle *processHandle; // ivar: _processHandle
@property (readonly, copy, nonatomic) RBSProcessIdentity *processIdentity; // ivar: _processIdentity
@property (readonly) Class superclass;
@property (readonly, nonatomic) FBProcess *transientLocalProcess; // ivar: _transientLocalProcess


+(BOOL)supportsSecureCoding;
+(id)identityForBundleID:(id)arg0 ;
+(id)identityForProcessHandle:(id)arg0 ;
+(id)identityForProcessHandle:(id)arg0 transientLocalProcess:(id)arg1 ;
+(id)identityForProcessIdentity:(id)arg0 ;
+(id)localIdentity;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid;
-(id)_initWithLocal:(BOOL)arg0 identity:(id)arg1 handle:(id)arg2 description:(id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fbs_sceneClientIdentity;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif