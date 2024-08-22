// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMCONCRETECONTAINERIDENTITY_H
#define MCMCONCRETECONTAINERIDENTITY_H

@class NSUUID;


#import "MCMContainerIdentity.h"

@interface MCMConcreteContainerIdentity : MCMContainerIdentity

@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(id)concreteContainerIdentityFromPlist:(id)arg0 userIdentityCache:(id)arg1 error:(*NSUInteger)arg2 ;
+(id)containerIdentityWithUUID:(id)arg0 userIdentity:(id)arg1 identifier:(id)arg2 containerClass:(NSUInteger)arg3 platform:(unsigned int)arg4 error:(*NSUInteger)arg5 ;
+(id)containerIdentityWithUUID:(id)arg0 userIdentity:(id)arg1 identifier:(id)arg2 containerClass:(NSUInteger)arg3 platform:(unsigned int)arg4 transient:(BOOL)arg5 error:(*NSUInteger)arg6 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConcreteContainerIdentity:(id)arg0 ;
-(NSUInteger)hash;
-(id)containerIdentity;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithContainerIdentity:(id)arg0 UUID:(id)arg1 error:(*NSUInteger)arg2 ;
-(id)initWithLibsystemContainer:(struct container_object_s *)arg0 defaultUserIdentity:(id)arg1 userIdentityCache:(id)arg2 error:(*NSUInteger)arg3 ;
-(id)initWithPlist:(id)arg0 userIdentityCache:(id)arg1 error:(*NSUInteger)arg2 ;
-(id)initWithUUID:(id)arg0 userIdentity:(id)arg1 identifier:(id)arg2 containerClass:(NSUInteger)arg3 platform:(unsigned int)arg4 transient:(BOOL)arg5 error:(*NSUInteger)arg6 ;
-(id)initWithVersion1PlistDictionary:(id)arg0 containerIdentity:(id)arg1 error:(*NSUInteger)arg2 ;
-(id)plist;
-(struct container_object_s *)createLibsystemContainerWithContainerPathIdentifier:(id)arg0 existed:(BOOL)arg1 error:(*NSUInteger)arg2 ;


@end


#endif