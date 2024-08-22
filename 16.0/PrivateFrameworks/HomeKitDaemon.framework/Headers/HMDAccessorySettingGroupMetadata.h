// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDACCESSORYSETTINGGROUPMETADATA_H
#define HMDACCESSORYSETTINGGROUPMETADATA_H

@class HMFObject, NSArray, NSString;
@protocol HMFObject;



@interface HMDAccessorySettingGroupMetadata : HMFObject <HMFObject>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *groups; // ivar: _groups
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *keyPath; // ivar: _keyPath
@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSArray *settings; // ivar: _settings
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(id)groupWithDictonaryRepresentation:(id)arg0 parentKeyPath:(id)arg1 ;
+(id)groupsWithArrayRepresenation:(id)arg0 parentKeyPath:(id)arg1 ;
-(id)initWithName:(id)arg0 settings:(id)arg1 groups:(id)arg2 ;
-(id)initWithName:(id)arg0 settings:(id)arg1 groups:(id)arg2 parentKeyPath:(id)arg3 ;
-(id)modelsWithParentIdentifier:(id)arg0 ;


@end


#endif