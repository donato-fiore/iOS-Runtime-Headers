// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMCONCRETECONTAINERIDENTITYFORLIBSYSTEM_H
#define MCMCONCRETECONTAINERIDENTITYFORLIBSYSTEM_H

@class NSString;


#import "MCMConcreteContainerIdentity.h"

@interface MCMConcreteContainerIdentityForLibsystem : MCMConcreteContainerIdentity

@property (readonly, nonatomic) NSString *containerPathIdentifier; // ivar: _containerPathIdentifier
@property (readonly, nonatomic) BOOL existed; // ivar: _existed


+(id)containerIdentityWithUUID:(id)arg0 userIdentity:(id)arg1 identifier:(id)arg2 containerClass:(NSUInteger)arg3 platform:(unsigned int)arg4 containerPathIdentifier:(id)arg5 existed:(BOOL)arg6 transient:(BOOL)arg7 error:(*NSUInteger)arg8 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)identityByChangingContainerPathIdentifier:(id)arg0 ;
-(id)identityByChangingTransient:(BOOL)arg0 ;
-(id)identityByChangingUUID:(id)arg0 ;
-(id)init;
-(id)initWithLibsystemContainer:(struct container_object_s *)arg0 defaultUserIdentity:(id)arg1 userIdentityCache:(id)arg2 error:(*NSUInteger)arg3 ;
-(id)initWithUUID:(id)arg0 userIdentity:(id)arg1 identifier:(id)arg2 containerClass:(NSUInteger)arg3 platform:(unsigned int)arg4 containerPathIdentifier:(id)arg5 existed:(BOOL)arg6 transient:(BOOL)arg7 error:(*NSUInteger)arg8 ;
-(id)nontransientConcreteContainerIdentityForLibsystem;
-(id)nontransientContainerIdentity;
-(id)transientConcreteContainerIdentityForLibsystem;
-(id)transientContainerIdentity;
-(struct container_object_s *)createLibsystemContainerWithError:(*NSUInteger)arg0 ;


@end


#endif