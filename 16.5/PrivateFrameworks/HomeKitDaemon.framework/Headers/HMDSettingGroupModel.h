// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSETTINGGROUPMODEL_H
#define HMDSETTINGGROUPMODEL_H

@class HMBModel, NSString, NSUUID;
@protocol HMDSettingGroupModelProtocol;



@interface HMDSettingGroupModel : HMBModel <HMDSettingGroupModelProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *hmbModelID;
@property (readonly, nonatomic) NSUUID *hmbParentModelID;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *nameForKeyPath;
@property (readonly) Class superclass;


+(id)hmbProperties;
-(id)copyWithNewParentModelID:(id)arg0 ;


@end


#endif