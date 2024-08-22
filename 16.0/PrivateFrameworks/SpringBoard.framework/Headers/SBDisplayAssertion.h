// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDISPLAYASSERTION_H
#define SBDISPLAYASSERTION_H

@class FBSDisplayIdentity;
@protocol SBDisplayAssertionDelegate;

#import <Foundation/Foundation.h>

#import "_SBDisplayAssertionStack.h"

@interface SBDisplayAssertion : NSObject {
    _SBDisplayAssertionStack *_assertionStack;
    id<SBDisplayAssertionDelegate> *_delegate;
    BOOL _invalidated;
    BOOL _invalidatedByClient;
    BOOL _hasControlOfDisplay;
}


@property (readonly, nonatomic) NSUInteger deactivationReasonsWhenActive; // ivar: _deactivationReasonsWhenActive
@property (readonly, nonatomic) BOOL hasControlOfDisplay;
@property (readonly, nonatomic) NSUInteger level; // ivar: _level
@property (readonly, nonatomic) FBSDisplayIdentity *rootDisplayIdentity; // ivar: _rootDisplayIdentity


-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithPhysicalDisplay:(id)arg0 level:(NSUInteger)arg1 deactivationReasons:(NSUInteger)arg2 assertionStack:(id)arg3 delegate:(id)arg4 ;
-(id)description;
-(void)_didGainControlOfDisplay;
-(void)_didInvalidateForDisplayDisconnect;
-(void)_didLoseControlOfDisplayForDeactivationReasons:(NSUInteger)arg0 ;
-(void)_didReceiveNewDeactivationReasons:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)updateWithPreferences:(id)arg0 ;


@end


#endif