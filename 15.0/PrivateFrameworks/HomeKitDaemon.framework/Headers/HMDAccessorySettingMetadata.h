// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDACCESSORYSETTINGMETADATA_H
#define HMDACCESSORYSETTINGMETADATA_H

@class HMFObject, NSArray, NSString;
@protocol HMFObject;


#import "HMDAccessorySettingMergeStrategy.h"

@interface HMDAccessorySettingMetadata : HMFObject <HMFObject>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSArray *constraints; // ivar: _constraints
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *keyPath; // ivar: _keyPath
@property (readonly) HMDAccessorySettingMergeStrategy *mergeStrategy; // ivar: _mergeStrategy
@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly, copy) NSString *privateDescription;
@property (readonly) NSUInteger properties; // ivar: _properties
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly) NSInteger type; // ivar: _type
@property (readonly) id *value; // ivar: _value


+(id)settingWithDictonaryRepresentation:(id)arg0 parentKeyPath:(id)arg1 ;
+(id)settingsWithArrayRepresenation:(id)arg0 parentKeyPath:(id)arg1 ;
+(id)valueWithType:(NSInteger)arg0 constraints:(id)arg1 representation:(id)arg2 ;
-(id)initWithName:(id)arg0 type:(NSInteger)arg1 properties:(NSUInteger)arg2 constraints:(id)arg3 mergeStrategy:(id)arg4 value:(id)arg5 parentKeyPath:(id)arg6 ;
-(id)modelWithParentIdentifier:(id)arg0 ;
-(id)modelsWithParentIdentifier:(id)arg0 ;


@end


#endif