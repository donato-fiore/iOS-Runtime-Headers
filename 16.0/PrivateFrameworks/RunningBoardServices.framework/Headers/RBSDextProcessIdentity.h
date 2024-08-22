// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBSDEXTPROCESSIDENTITY_H
#define RBSDEXTPROCESSIDENTITY_H

@class NSString;


#import "RBSProcessIdentity.h"

@interface RBSDextProcessIdentity : RBSProcessIdentity {
    NSString *_serverName;
    NSString *_label;
    NSString *_bundleID;
    unsigned char _type;
}




-(BOOL)_matchesIdentity:(id)arg0 ;
-(BOOL)isAnonymous;
-(BOOL)isDext;
-(id)_initDextWithServerName:(id)arg0 label:(id)arg1 containingAppBundleID:(id)arg2 ;
-(id)_initDextWithServerName:(id)arg0 tagString:(id)arg1 containingAppBundleID:(id)arg2 ;
-(id)copyWithAuid:(unsigned int)arg0 ;
-(id)debugDescription;
-(id)dextContainingAppBundleID;
-(id)dextLabel;
-(id)dextServerName;
-(id)encodeForJob;
-(id)initWithDecodeFromJob:(id)arg0 ;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif