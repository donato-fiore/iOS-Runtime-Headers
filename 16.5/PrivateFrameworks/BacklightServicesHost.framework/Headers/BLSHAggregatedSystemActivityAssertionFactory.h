// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHAGGREGATEDSYSTEMACTIVITYASSERTIONFACTORY_H
#define BLSHAGGREGATEDSYSTEMACTIVITYASSERTIONFACTORY_H


#import <Foundation/Foundation.h>

#import "BLSHAggregateSystemActivityAssertion.h"

@interface BLSHAggregatedSystemActivityAssertionFactory : NSObject {
    os_unfair_lock_s _lock;
    BLSHAggregateSystemActivityAssertion *_lock_aggregateAssertion;
}




-(id)createAggregatedSystemActivityAssertionWithIdentifier:(id)arg0 usingOSInterfaceProvider:(id)arg1 ;
-(id)init;


@end


#endif