// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMPROCESSCURRENT_H
#define BMPROCESSCURRENT_H

@class NSNumber;


#import "BMProcess.h"

@interface BMProcessCurrent : BMProcess {
    os_unfair_lock_s _reliesOnLegacyDirectAccessLock;
    NSNumber *_reliesOnLegacyDirectAccess;
}


@property (readonly, nonatomic) BOOL isManaged;
@property (readonly, nonatomic) BOOL isRunningInUserContext;
@property (readonly, nonatomic) BOOL reliesOnLegacyDirectAccess;


-(id)_initWithAuditToken:(struct ? )arg0 ;


@end


#endif