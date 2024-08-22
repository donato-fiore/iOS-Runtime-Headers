// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDREMOVEDUSERACCESSCODEMODEL_H
#define HMDREMOVEDUSERACCESSCODEMODEL_H

@class NSString, HMRemovedUserInfo, NSData;


#import "HMDBackingStoreModelObject.h"

@interface HMDRemovedUserAccessCodeModel : HMDBackingStoreModelObject

@property (copy) NSString *accessCode;
@property (readonly, copy) HMRemovedUserInfo *removedUserInfo;
@property (retain) NSData *removedUserInfoData;


+(id)modelUUIDForHomeUUID:(id)arg0 removedUserInfo:(id)arg1 accessCode:(id)arg2 ;
+(id)properties;
-(id)initWithRemovedUserInfo:(id)arg0 accessCode:(id)arg1 homeUUID:(id)arg2 ;


@end


#endif