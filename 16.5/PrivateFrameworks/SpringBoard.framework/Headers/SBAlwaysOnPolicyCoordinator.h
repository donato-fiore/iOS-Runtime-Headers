// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBALWAYSONPOLICYCOORDINATOR_H
#define SBALWAYSONPOLICYCOORDINATOR_H

@class NSMutableSet, NSSet;

#import <Foundation/Foundation.h>


@interface SBAlwaysOnPolicyCoordinator : NSObject {
    NSMutableSet *_policies;
}


@property (readonly, nonatomic) NSSet *activePolicies;


-(void)_activatePolicy:(id)arg0 ;
-(void)activate;
-(void)addExternalPolicy:(id)arg0 ;
-(void)removeExternalPolicy:(id)arg0 ;


@end


#endif