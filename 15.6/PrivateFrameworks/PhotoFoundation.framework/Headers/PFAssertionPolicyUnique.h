// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFASSERTIONPOLICYUNIQUE_H
#define PFASSERTIONPOLICYUNIQUE_H

@class NSMutableSet;


#import "PFAssertionPolicyComposite.h"

@interface PFAssertionPolicyUnique : PFAssertionPolicyComposite {
    NSMutableSet *_signatures;
}




-(id)init;
-(void)notifyAssertion:(id)arg0 ;


@end


#endif