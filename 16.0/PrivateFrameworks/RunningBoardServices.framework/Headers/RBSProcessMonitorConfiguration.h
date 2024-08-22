// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBSPROCESSMONITORCONFIGURATION_H
#define RBSPROCESSMONITORCONFIGURATION_H

@class NSString, NSArray;
@protocol RBSProcessMonitorConfiguring, NSCopying, RBSXPCSecureCoding;

#import <Foundation/Foundation.h>

#import "RBSProcessHandle.h"
#import "RBSProcessStateDescriptor.h"

@interface RBSProcessMonitorConfiguration : NSObject <RBSProcessMonitorConfiguring, NSCopying, RBSXPCSecureCoding>

 {
    RBSProcessHandle *_lastMatch;
    os_unfair_lock_s _lock;
    NSString *_desc;
    int _clientPid;
    id *_preventLaunchUpdateHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger events; // ivar: _events
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger identifier; // ivar: _identifier
@property (copy, nonatomic) NSArray *predicates; // ivar: _predicates
@property (nonatomic) unsigned int serviceClass; // ivar: _serviceClass
@property (copy, nonatomic) RBSProcessStateDescriptor *stateDescriptor; // ivar: _stateDescriptor
@property (readonly) Class superclass;
@property (copy, nonatomic) id *updateHandler; // ivar: _updateHandler


+(BOOL)supportsRBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesProcess:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;
-(void)setPreventLaunchUpdateHandle:(id)arg0 ;


@end


#endif