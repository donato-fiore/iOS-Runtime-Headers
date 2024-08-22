// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEAPPSIDECARPOLICYSESSION_H
#define NEAPPSIDECARPOLICYSESSION_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "NEPolicySession.h"

@interface NEAppSidecarPolicySession : NSObject {
    NEPolicySession *_policySession;
    NSMutableArray *_policyIDList;
}




+(id)connectionIdentifier;
-(BOOL)installPolicies;
-(BOOL)uninstallPolicies;
-(id)init;


@end


#endif