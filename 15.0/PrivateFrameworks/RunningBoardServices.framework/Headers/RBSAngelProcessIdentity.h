// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RBSANGELPROCESSIDENTITY_H
#define RBSANGELPROCESSIDENTITY_H

@class NSString;


#import "RBSProcessIdentity.h"

@interface RBSAngelProcessIdentity : RBSProcessIdentity {
    NSString *_angelJobLabel;
}




-(BOOL)_matchesIdentity:(id)arg0 ;
-(BOOL)isAngel;
-(BOOL)isAnonymous;
-(id)_initAngelWithJobLabel:(id)arg0 ;
-(id)angelJobLabel;
-(id)copyWithAuid:(unsigned int)arg0 ;
-(id)debugDescription;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif