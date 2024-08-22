// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSETTINGROOTGROUPMODEL_H
#define HMDSETTINGROOTGROUPMODEL_H

@class NSUUID;
@protocol HMDConflictResolutionModel;


#import "HMDSettingGroupModel.h"

@interface HMDSettingRootGroupModel : HMDSettingGroupModel <HMDConflictResolutionModel>



@property (copy, nonatomic) NSUUID *conflictResolutionToken;


+(id)hmbProperties;
-(id)copyWithNewParentModelID:(id)arg0 ;
-(id)initWithModelID:(id)arg0 parentModelID:(id)arg1 ;
-(id)nameForKeyPath;


@end


#endif