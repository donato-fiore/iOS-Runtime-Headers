// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMRESOLVEDLINK_H
#define MCMRESOLVEDLINK_H



#import "MCMLink.h"
#import "MCMConcreteContainerIdentityForLibsystem.h"

@interface MCMResolvedLink : MCMLink

@property (readonly, nonatomic) MCMConcreteContainerIdentityForLibsystem *containerIdentityForLibsystem; // ivar: _containerIdentityForLibsystem
@property (readonly, nonatomic) MCMConcreteContainerIdentityForLibsystem *originContainerIdentityForLibsystem; // ivar: _originContainerIdentityForLibsystem


-(?)createLibsystemLinkWithError;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithLibsystemLink:(struct container_link_s *)arg0 defaultUserIdentity:(id)arg1 userIdentityCache:(id)arg2 error:(*NSUInteger)arg3 ;
-(id)initWithOriginContainerIdentityForLibsystem:(id)arg0 containerIdentityForLibsystem:(id)arg1 attributes:(NSUInteger)arg2 implied:(BOOL)arg3 ;


@end


#endif