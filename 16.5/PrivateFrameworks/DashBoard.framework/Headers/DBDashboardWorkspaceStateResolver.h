// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBDASHBOARDWORKSPACESTATERESOLVER_H
#define DBDASHBOARDWORKSPACESTATERESOLVER_H

@protocol DBAppPolicyProviding;

#import <Foundation/Foundation.h>


@interface DBDashboardWorkspaceStateResolver : NSObject

@property (weak, nonatomic) NSObject<DBAppPolicyProviding> *policyProvider; // ivar: _policyProvider


-(id)computeNewStateFromState:(id)arg0 andRequest:(id)arg1 ;
-(id)initWithPolicyProvider:(id)arg0 ;


@end


#endif