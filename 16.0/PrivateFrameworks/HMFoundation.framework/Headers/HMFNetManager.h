// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMFNETMANAGER_H
#define HMFNETMANAGER_H

@protocol OS_dispatch_queue;


#import "HMFObject.h"
#import "_HMFNetManagerWoWAssertion.h"

@interface HMFNetManager : HMFObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (weak) _HMFNetManagerWoWAssertion *wowAssertion; // ivar: _wowAssertion


+(id)sharedManager;
+(void)initialize;
-(id)init;
-(void)deregisterObject:(id)arg0 ;
-(void)deregisterWoWAssertionForObject:(id)arg0 ;
-(void)registerWoWAssertionForObject:(id)arg0 ;


@end


#endif