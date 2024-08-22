// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDUSERACCESSCODEMODEL_H
#define HMDUSERACCESSCODEMODEL_H

@class NSUUID, NSString;


#import "HMDBackingStoreModelObject.h"

@interface HMDUserAccessCodeModel : HMDBackingStoreModelObject

@property (retain) NSUUID *changedByUserUUID;
@property (copy) NSString *value;


+(id)modelUUIDWithUUID:(id)arg0 ;
+(id)properties;
-(id)initWithUserUUID:(id)arg0 ;


@end


#endif