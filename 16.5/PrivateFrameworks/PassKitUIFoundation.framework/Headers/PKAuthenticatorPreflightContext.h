// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAUTHENTICATORPREFLIGHTCONTEXT_H
#define PKAUTHENTICATORPREFLIGHTCONTEXT_H

@class LAContext, NSString;
@protocol PKInvalidatable;

#import <Foundation/Foundation.h>


@interface PKAuthenticatorPreflightContext : NSObject <PKInvalidatable>

 {
    LAContext *_context;
    NSInteger _validReferenceCount;
    os_unfair_lock_s _lock;
    BOOL _invalidated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly) Class superclass;


-(id)context;
-(id)init;
-(void)_clearIfPossibleUnsafe;
-(void)dealloc;
-(void)decrementValidReferenceCount;
-(void)incrementValidReferenceCount;
-(void)invalidate;


@end


#endif