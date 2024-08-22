// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLINTERSILOPROXYTOINITIATOR_H
#define CLINTERSILOPROXYTOINITIATOR_H



#import "CLIntersiloProxy.h"

@interface CLIntersiloProxyToInitiator : CLIntersiloProxy

@property (readonly, weak, nonatomic) CLIntersiloProxy *peer; // ivar: _peer


-(id)initWithDelegateObject:(id)arg0 delegateSilo:(id)arg1 uninitializedPeer:(id)arg2 ;


@end


#endif