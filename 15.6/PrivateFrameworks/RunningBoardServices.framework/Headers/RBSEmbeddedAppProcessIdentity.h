// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBSEMBEDDEDAPPPROCESSIDENTITY_H
#define RBSEMBEDDEDAPPPROCESSIDENTITY_H

@class NSString;


#import "RBSProcessIdentity.h"

@interface RBSEmbeddedAppProcessIdentity : RBSProcessIdentity {
    NSString *_embeddedApplicationIdentifier;
}




-(BOOL)_matchesIdentity:(id)arg0 ;
-(BOOL)isAnonymous;
-(BOOL)isApplication;
-(BOOL)isEmbeddedApplication;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithAuid:(unsigned int)arg0 ;
-(id)debugDescription;
-(id)embeddedApplicationIdentifier;
-(id)encodeForJob;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(unsigned char)defaultManageFlags;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif