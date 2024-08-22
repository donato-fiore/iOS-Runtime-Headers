// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HMACCESSORYSETTINGGROUP_H
#define _HMACCESSORYSETTINGGROUP_H

@class HMFUnfairLock, NSMutableSet, NSString, NSArray, NSUUID;
@protocol HMFLogging, HMFMessageReceiver, NSSecureCoding, HMFMerging, _HMAccesorySettingGroupDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMAccessorySettings.h"
#import "_HMContext.h"

@interface _HMAccessorySettingGroup : NSObject <HMFLogging, HMFMessageReceiver, NSSecureCoding, HMFMerging>

 {
    HMFUnfairLock *_lock;
    NSMutableSet *_settings;
    NSMutableSet *_groups;
}


@property (weak, nonatomic) HMAccessorySettings *accessorySettings; // ivar: _accessorySettings
@property (retain, nonatomic) _HMContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<_HMAccesorySettingGroupDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *groups;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly, copy) NSArray *settings;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)shortDescription;
+(id)supportedGroupsClasses;
+(id)supportedSettingsClasses;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)mergeGroups:(id)arg0 ;
-(BOOL)mergeObject:(id)arg0 ;
-(BOOL)mergeSettings:(id)arg0 ;
-(id)clientQueue;
-(id)descriptionWithPointer:(BOOL)arg0 ;
-(id)groupWithIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(id)logIdentifier;
-(id)messageDestination;
-(id)settingWithIdentifier:(id)arg0 ;
-(id)shortDescription;
-(void)_unconfigure;
-(void)_unconfigureContext;
-(void)addGroup:(id)arg0 ;
-(void)addGroup:(id)arg0 toGroup:(id)arg1 completionHandler:(id)arg2 ;
-(void)addSetting:(id)arg0 ;
-(void)addSetting:(id)arg0 toGroup:(id)arg1 completionHandler:(id)arg2 ;
-(void)configureWithAccessorySettings:(id)arg0 context:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)notifyDelegateOfAddedGroup:(id)arg0 ;
-(void)notifyDelegateOfAddedSetting:(id)arg0 ;
-(void)notifyDelegateOfRemovedGroup:(id)arg0 ;
-(void)notifyDelegateOfRemovedSetting:(id)arg0 ;
-(void)removeGroup:(id)arg0 ;
-(void)removeGroup:(id)arg0 fromGroup:(id)arg1 completionHandler:(id)arg2 ;
-(void)removeSetting:(id)arg0 ;
-(void)removeSetting:(id)arg0 fromGroup:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif