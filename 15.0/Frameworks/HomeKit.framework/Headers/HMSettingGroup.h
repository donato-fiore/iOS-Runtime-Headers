// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMSETTINGGROUP_H
#define HMSETTINGGROUP_H

@class NSMutableDictionary, NSString, NSArray, NSUUID;
@protocol HMSettingDataSource, HMSettingGroupDataSource, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMSettingGroup : NSObject <HMSettingDataSource, HMSettingGroupDataSource, NSSecureCoding>

 {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_settings;
    NSMutableDictionary *_groups;
}


@property (weak) NSObject<HMSettingGroupDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *groups;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy) NSString *keyPath;
@property (readonly, copy) NSString *localizedTitle;
@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly, copy) NSArray *settings;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)_descriptionWithDepth:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 groups:(id)arg2 settings:(id)arg3 ;
-(id)parentKeyPathForSetting:(id)arg0 ;
-(id)parentKeyPathForSettingGroup:(id)arg0 ;
-(void)addGroup:(id)arg0 ;
-(void)addSetting:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif