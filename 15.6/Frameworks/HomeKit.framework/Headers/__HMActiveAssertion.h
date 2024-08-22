// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef __HMACTIVEASSERTION_H
#define __HMACTIVEASSERTION_H

@class HMFAssertion;


#import "HMHomeManager.h"

@interface __HMActiveAssertion : HMFAssertion

@property (readonly, weak) HMHomeManager *manager; // ivar: _manager


-(id)initWithHomeManager:(id)arg0 reason:(id)arg1 ;
-(id)initWithName:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif