// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKNOTIFYSUBREGISTRATION_H
#define PKNOTIFYSUBREGISTRATION_H

@class NSString;
@protocol PKInvalidatable;

#import <Foundation/Foundation.h>

#import "PKNotifyRegistration.h"

@interface PKNotifySubregistration : NSObject <PKInvalidatable>

 {
    os_unfair_lock_s _lock;
    PKNotifyRegistration *_parent;
    id *_handler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated; // ivar: _invalidated
@property (readonly) Class superclass;


-(id)init;
-(id)initWithParent:(id)arg0 handler:(id)arg1 ;
-(void)_invalidateFromParent:(BOOL)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)invokeHandler;


@end


#endif