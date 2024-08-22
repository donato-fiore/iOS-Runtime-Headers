// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COMEDIAGROUPSADAPTER_H
#define COMEDIAGROUPSADAPTER_H

@class HMAccessory, MGGroupQuery, NSArray;

#import <Foundation/Foundation.h>

#import "COHomeKitAdapter.h"

@interface COMediaGroupsAdapter : NSObject {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (retain, nonatomic) MGGroupQuery *activityGroupsQuery; // ivar: _activityGroupsQuery
@property (readonly, nonatomic) COHomeKitAdapter *adapter; // ivar: _adapter
@property (copy, nonatomic) NSArray *currentActivityGroups; // ivar: _currentActivityGroups
@property (copy, nonatomic) NSArray *groups; // ivar: _groups


-(BOOL)_prepareAccessory_unsafe;
-(id)initWithHomeKitAdapter:(id)arg0 ;
-(void)_bootstrap;
-(void)_didUpdateActivityGroups:(id)arg0 ;
-(void)_prepareActivityGroupsQuery_unsafe;
-(void)_prepareGroupQuery_unsafe;
-(void)_significantHomeChange:(id)arg0 ;
-(void)_withLock:(id)arg0 ;


@end


#endif