// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUASSERTIONPOLICYUNIQUE_H
#define NUASSERTIONPOLICYUNIQUE_H

@class NSMutableSet;


#import "NUAssertionPolicyComposite.h"

@interface NUAssertionPolicyUnique : NUAssertionPolicyComposite {
    NSMutableSet *_signatures;
}




-(id)init;
-(void)notifyAssertion:(id)arg0 ;


@end


#endif