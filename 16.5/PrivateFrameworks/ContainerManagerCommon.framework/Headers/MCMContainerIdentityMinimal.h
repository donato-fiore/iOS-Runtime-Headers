// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMCONTAINERIDENTITYMINIMAL_H
#define MCMCONTAINERIDENTITYMINIMAL_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MCMUserIdentity.h"

@interface MCMContainerIdentityMinimal : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger containerClass; // ivar: _containerClass
@property (readonly, nonatomic) unsigned int disposition; // ivar: _disposition
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) unsigned int platform; // ivar: _platform
@property (readonly, nonatomic) MCMUserIdentity *userIdentity; // ivar: _userIdentity


+(id)minimalContainerIdentityFromPlist:(id)arg0 userIdentityCache:(id)arg1 error:(*NSUInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToContainerIdentityForLinks:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)identityByChangingUserIdentity:(id)arg0 ;
-(id)identityBySettingPlatform:(unsigned int)arg0 ;
-(id)init;
-(id)initWithLibsystemContainer:(struct container_object_s *)arg0 defaultUserIdentity:(id)arg1 userIdentityCache:(id)arg2 error:(*NSUInteger)arg3 ;
-(id)initWithPlist:(id)arg0 userIdentityCache:(id)arg1 error:(*NSUInteger)arg2 ;
-(id)initWithUserIdentity:(id)arg0 identifier:(id)arg1 containerClass:(NSUInteger)arg2 platform:(unsigned int)arg3 error:(*NSUInteger)arg4 ;
-(id)initWithVersion1PlistDictionary:(id)arg0 userIdentityCache:(id)arg1 error:(*NSUInteger)arg2 ;
-(id)minimalIdentity;
-(id)plist;


@end


#endif