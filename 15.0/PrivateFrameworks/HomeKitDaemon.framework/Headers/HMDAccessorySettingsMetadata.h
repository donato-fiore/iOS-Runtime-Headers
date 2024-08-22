// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDACCESSORYSETTINGSMETADATA_H
#define HMDACCESSORYSETTINGSMETADATA_H

@class HMFObject, NSArray, NSString;
@protocol HMFObject;


#import "HMDAccessorySettingGroupMetadata.h"

@interface HMDAccessorySettingsMetadata : HMFObject <HMFObject>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) HMDAccessorySettingGroupMetadata *rootGroup; // ivar: _rootGroup
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithURL:(id)arg0 ;


@end


#endif