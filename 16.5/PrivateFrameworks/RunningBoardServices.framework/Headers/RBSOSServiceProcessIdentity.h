// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBSOSSERVICEPROCESSIDENTITY_H
#define RBSOSSERVICEPROCESSIDENTITY_H

@class NSString;


#import "RBSProcessIdentity.h"

@interface RBSOSServiceProcessIdentity : RBSProcessIdentity {
    NSString *_jobLabel;
    unsigned char _type;
}




-(BOOL)_matchesIdentity:(id)arg0 ;
-(BOOL)hasConsistentLaunchdJob;
-(BOOL)isAngel;
-(BOOL)isAnonymous;
-(BOOL)isDaemon;
-(BOOL)supportsLaunchingDirectly;
-(BOOL)treatedAsAnAppByFrontBoard:(*id)arg0 ;
-(id)_initAngelWithJobLabel:(id)arg0 ;
-(id)_initDaemonWithJobLabel:(id)arg0 pid:(int)arg1 auid:(unsigned int)arg2 ;
-(id)_initServiceWithJobLabel:(id)arg0 pid:(int)arg1 auid:(unsigned int)arg2 type:(unsigned char)arg3 ;
-(id)_initUnknownOSServiceWithJobLabel:(id)arg0 ;
-(id)angelJobLabel;
-(id)consistentLaunchdJobLabel;
-(id)copyWithAuid:(unsigned int)arg0 ;
-(id)daemonJobLabel;
-(id)debugDescription;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(unsigned char)osServiceType;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;
-(void)setOsServiceType:(unsigned char)arg0 ;


@end


#endif