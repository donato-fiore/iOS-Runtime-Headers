// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEAPPSIDECARPOLICYSESSION_H
#define NEAPPSIDECARPOLICYSESSION_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "NEPolicySession.h"

@interface NEAppSidecarPolicySession : NSObject

@property (retain) NSMutableArray *policyIDList; // ivar: _policyIDList
@property (retain) NEPolicySession *policySession; // ivar: _policySession


+(id)connectionIdentifier;
-(BOOL)installPolicies;
-(BOOL)uninstallPolicies;
-(id)init;


@end


#endif