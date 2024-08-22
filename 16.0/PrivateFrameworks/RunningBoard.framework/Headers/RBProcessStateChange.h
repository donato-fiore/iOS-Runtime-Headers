// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBPROCESSSTATECHANGE_H
#define RBPROCESSSTATECHANGE_H

@class RBSProcessIdentity;

#import <Foundation/Foundation.h>

#import "RBProcessState.h"

@interface RBProcessStateChange : NSObject

@property (readonly, nonatomic) RBSProcessIdentity *identity; // ivar: _identity
@property (readonly, nonatomic) RBProcessState *originalState; // ivar: _originalState
@property (readonly, nonatomic) RBProcessState *updatedState; // ivar: _updatedState


-(id)changeByApplyingChange:(id)arg0 ;
-(id)initWithIdentity:(id)arg0 originalState:(id)arg1 updatedState:(id)arg2 ;


@end


#endif