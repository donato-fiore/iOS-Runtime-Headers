// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSVTASKASSERTION_H
#define MSVTASKASSERTION_H

@class NSString, BKSProcessAssertion;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface MSVTaskAssertion : NSObject {
    NSString *_uuid;
    NSString *_subsystem;
    int _pid;
    NSObject<OS_dispatch_source> *_invalidationTimer;
    BOOL _acquired;
    BKSProcessAssertion *_processAssertion;
}


@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic, getter=isValid) BOOL valid;


-(BOOL)acquire;
-(BOOL)isAcquired;
-(id)_initWithName:(id)arg0 bundleID:(id)arg1 pid:(int)arg2 subsystem:(id)arg3 reason:(NSUInteger)arg4 flags:(NSUInteger)arg5 ;
-(id)description;
-(id)init;
-(id)initWithName:(id)arg0 bundleID:(id)arg1 subsystem:(id)arg2 reason:(NSUInteger)arg3 flags:(NSUInteger)arg4 ;
-(id)initWithName:(id)arg0 pid:(int)arg1 bundleID:(id)arg2 subsystem:(id)arg3 reason:(NSUInteger)arg4 flags:(NSUInteger)arg5 ;
-(id)initWithName:(id)arg0 pid:(int)arg1 subsystem:(id)arg2 reason:(NSUInteger)arg3 flags:(NSUInteger)arg4 ;
-(unsigned int)_BSKFlagsForMSVFlags:(NSUInteger)arg0 ;
-(unsigned int)_BSKReasonForMSVReason:(NSUInteger)arg0 ;
-(void)_cancelInvalidationTimerWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)invalidateOnDate:(id)arg0 ;


@end


#endif