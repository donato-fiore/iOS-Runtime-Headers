// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBCOMPLEXCONCRETETARGET_H
#define RBCOMPLEXCONCRETETARGET_H

@class NSString, RBSProcessIdentity;


#import "RBConcreteTarget.h"
#import "RBProcess.h"

@interface RBComplexConcreteTarget : RBConcreteTarget {
    NSString *_description;
    RBProcess *_process;
    RBSProcessIdentity *_identity;
    NSString *_environment;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSystem;
-(NSUInteger)hash;
-(id)createRBSTarget;
-(id)description;
-(id)environment;
-(id)identity;
-(id)process;


@end


#endif