// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef __HMFWIFIASSERTION_H
#define __HMFWIFIASSERTION_H



#import "HMFAssertion.h"
#import "HMFWiFiManager.h"

@interface __HMFWiFiAssertion : HMFAssertion

@property (readonly) HMFWiFiManager *manager; // ivar: _manager
@property (readonly) NSUInteger options; // ivar: _options


-(BOOL)acquire:(*id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(id)initWithOptions:(NSUInteger)arg0 manager:(id)arg1 reason:(id)arg2 ;
-(void)invalidate;


@end


#endif