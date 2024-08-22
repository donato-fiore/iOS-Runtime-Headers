// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDSETTINGGROUP_H
#define HMDSETTINGGROUP_H

@class NSString, NSArray, NSMutableSet, NSUUID;
@protocol HMDSettingGroup;

#import <Foundation/Foundation.h>


@interface HMDSettingGroup : NSObject <HMDSettingGroup>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *groups;
@property (retain) NSMutableSet *groupsInternal; // ivar: _groupsInternal
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (copy) NSString *keyPath; // ivar: _keyPath
@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly, copy) NSUUID *parentIdentifier; // ivar: _parentIdentifier
@property (readonly, copy) NSArray *settings;
@property (retain) NSMutableSet *settingsInternal; // ivar: _settingsInternal
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 parentIdentifier:(id)arg1 name:(id)arg2 groups:(id)arg3 settings:(id)arg4 ;
-(id)initWithModel:(id)arg0 ;
-(void)addGroup:(id)arg0 ;
-(void)addSetting:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif