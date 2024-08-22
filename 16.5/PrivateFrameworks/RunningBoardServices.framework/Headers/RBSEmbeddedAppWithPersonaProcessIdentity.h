// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBSEMBEDDEDAPPWITHPERSONAPROCESSIDENTITY_H
#define RBSEMBEDDEDAPPWITHPERSONAPROCESSIDENTITY_H

@class NSString;


#import "RBSProcessIdentity.h"

@interface RBSEmbeddedAppWithPersonaProcessIdentity : RBSProcessIdentity {
    NSString *_embeddedApplicationIdentifier;
    NSString *_personaString;
}




-(BOOL)_matchesIdentity:(id)arg0 ;
-(BOOL)isAnonymous;
-(BOOL)isApplication;
-(BOOL)isEmbeddedApplication;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)supportsLaunchingDirectly;
-(BOOL)treatedAsAnAppByFrontBoard:(*id)arg0 ;
-(id)_initEmbeddedApp:(id)arg0 personaString:(id)arg1 ;
-(id)_initEmbeddedAppWithAppInfoProvider:(id)arg0 ;
-(id)copyWithAuid:(unsigned int)arg0 ;
-(id)debugDescription;
-(id)embeddedApplicationIdentifier;
-(id)encodeForJob;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(id)personaString;
-(unsigned char)defaultManageFlags;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif