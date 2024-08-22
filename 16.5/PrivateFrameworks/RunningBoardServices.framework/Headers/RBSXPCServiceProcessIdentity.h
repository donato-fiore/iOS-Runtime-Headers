// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBSXPCSERVICEPROCESSIDENTITY_H
#define RBSXPCSERVICEPROCESSIDENTITY_H



#import "RBSProcessIdentity.h"
#import "RBSXPCServiceIdentity.h"

@interface RBSXPCServiceProcessIdentity : RBSProcessIdentity {
    RBSXPCServiceIdentity *_serviceIdentity;
}




+(BOOL)shouldManageExtensionWithExtensionPoint:(id)arg0 ;
-(BOOL)_matchesIdentity:(id)arg0 ;
-(BOOL)inheritsCoalitionBand;
-(BOOL)isAnonymous;
-(BOOL)isEqualToIdentity:(id)arg0 ;
-(BOOL)isExtension;
-(BOOL)isXPCService;
-(BOOL)supportsLaunchingDirectly;
-(NSUInteger)hash;
-(id)copyWithAuid:(unsigned int)arg0 ;
-(id)encodeForJob;
-(id)hostIdentifier;
-(id)hostIdentity;
-(id)initWithDecodeFromJob:(id)arg0 ;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(id)persona;
-(id)uuid;
-(id)validationToken;
-(id)xpcServiceIdentifier;
-(unsigned char)defaultManageFlags;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif