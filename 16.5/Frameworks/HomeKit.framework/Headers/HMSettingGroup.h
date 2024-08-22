// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMSETTINGGROUP_H
#define HMSETTINGGROUP_H

@class NSMutableDictionary, NSArray, NSUUID, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMSettingGroup : NSObject <NSSecureCoding>

 {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_settings;
    NSMutableDictionary *_groups;
}


@property (readonly, copy) NSArray *groups;
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (copy) NSString *keyPath; // ivar: _keyPath
@property (readonly, copy) NSString *localizedTitle;
@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly, copy) NSArray *settings;


+(BOOL)supportsSecureCoding;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 groups:(id)arg2 settings:(id)arg3 ;
-(id)longDescription;
-(id)settingGroupWithKeyPath:(id)arg0 ;
-(void)_longDescriptionWithCurrentGroup:(id)arg0 currentSettings:(id)arg1 ;
-(void)addGroup:(id)arg0 ;
-(void)addSetting:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fixNestedKeyPaths;


@end


#endif