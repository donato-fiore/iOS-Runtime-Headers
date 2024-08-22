// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __CFN_COALESCINGDOMAINHOLDER_H
#define __CFN_COALESCINGDOMAINHOLDER_H


#import <Foundation/Foundation.h>

#import "__CFN_PathPolicyManager.h"

@interface __CFN_CoalescingDomainHolder : NSObject {
    CoalescingDomain _coalescingDomain;
    __CFN_PathPolicyManager *_pathPolicyManager;
}




-(id)init;
-(void)dealloc;


@end


#endif