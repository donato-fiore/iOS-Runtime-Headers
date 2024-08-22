// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMCONTAINERIDENTITY_H
#define MCMCONTAINERIDENTITY_H



#import "MCMContainerIdentityMinimal.h"

@interface MCMContainerIdentity : MCMContainerIdentityMinimal

@property (readonly, nonatomic) BOOL transient; // ivar: _transient


+(id)containerIdentityFromPlist:(id)arg0 userIdentityCache:(id)arg1 error:(*NSUInteger)arg2 ;
+(id)containerIdentityWithIdentifier:(id)arg0 containerClass:(NSUInteger)arg1 platform:(unsigned int)arg2 error:(*NSUInteger)arg3 ;
+(id)containerIdentityWithMinimalContainerIdentity:(id)arg0 transient:(BOOL)arg1 ;
+(id)containerIdentityWithUserIdentity:(id)arg0 identifier:(id)arg1 containerClass:(NSUInteger)arg2 platform:(unsigned int)arg3 error:(*NSUInteger)arg4 ;
+(id)containerIdentityWithUserIdentity:(id)arg0 identifier:(id)arg1 containerClass:(NSUInteger)arg2 platform:(unsigned int)arg3 transient:(BOOL)arg4 error:(*NSUInteger)arg5 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToContainerIdentity:(id)arg0 ;
-(NSUInteger)hash;
-(id)containerIdentity;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)identityByChangingTransient:(BOOL)arg0 ;
-(id)init;
-(id)initWithLibsystemContainer:(struct container_object_s *)arg0 defaultUserIdentity:(id)arg1 userIdentityCache:(id)arg2 error:(*NSUInteger)arg3 ;
-(id)initWithUserIdentity:(id)arg0 identifier:(id)arg1 containerClass:(NSUInteger)arg2 platform:(unsigned int)arg3 transient:(BOOL)arg4 error:(*NSUInteger)arg5 ;
-(id)initWithVersion1PlistDictionary:(id)arg0 userIdentityCache:(id)arg1 error:(*NSUInteger)arg2 ;
-(id)plist;


@end


#endif