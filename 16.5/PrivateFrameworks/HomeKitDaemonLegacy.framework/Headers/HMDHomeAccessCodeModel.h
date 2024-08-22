// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMEACCESSCODEMODEL_H
#define HMDHOMEACCESSCODEMODEL_H

@class NSString;


#import "HMDBackingStoreModelObject.h"

@interface HMDHomeAccessCodeModel : HMDBackingStoreModelObject

@property (copy) NSString *label;
@property (copy) NSString *value;


+(id)modelUUIDForHomeUUID:(id)arg0 accessCodeValue:(id)arg1 ;
+(id)properties;
-(id)initWithHomeUUID:(id)arg0 value:(id)arg1 label:(id)arg2 ;


@end


#endif