// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBSDAEMONPROCESSIDENTITY_H
#define RBSDAEMONPROCESSIDENTITY_H

@class NSString;


#import "RBSProcessIdentity.h"

@interface RBSDaemonProcessIdentity : RBSProcessIdentity {
    NSString *_daemonJobLabel;
}




-(BOOL)_matchesIdentity:(id)arg0 ;
-(BOOL)isAnonymous;
-(BOOL)isDaemon;
-(id)_initDaemonWithJobLabel:(id)arg0 pid:(int)arg1 auid:(unsigned int)arg2 ;
-(id)copyWithAuid:(unsigned int)arg0 ;
-(id)daemonJobLabel;
-(id)debugDescription;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif