// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COMEDIAGROUPSADAPTER_H
#define COMEDIAGROUPSADAPTER_H

@class HMAccessory, NSArray, MGGroupQuery;

#import <Foundation/Foundation.h>

#import "COHomeKitAdapter.h"

@interface COMediaGroupsAdapter : NSObject {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (readonly, nonatomic) COHomeKitAdapter *adapter; // ivar: _adapter
@property (copy, nonatomic) NSArray *groups; // ivar: _groups
@property (retain, nonatomic) MGGroupQuery *query; // ivar: _query


-(BOOL)_prepareAccessory_unsafe;
-(BOOL)isMemberOfMediaGroup;
-(id)currentMediaGroup;
-(id)initWithHomeKitAdapter:(id)arg0 ;
-(void)_bootstrap;
-(void)_didUpdatePermanentGroups:(id)arg0 ;
-(void)_prepareQuery_unsafe;
-(void)_significantHomeChange:(id)arg0 ;
-(void)_withLock:(id)arg0 ;


@end


#endif