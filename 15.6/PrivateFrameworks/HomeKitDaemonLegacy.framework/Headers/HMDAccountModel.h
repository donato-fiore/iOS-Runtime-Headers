// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDACCOUNTMODEL_H
#define HMDACCOUNTMODEL_H



#import "HMDBackingStoreModelObject.h"
#import "HMDAccountIdentifier.h"

@interface HMDAccountModel : HMDBackingStoreModelObject

@property (copy, nonatomic) HMDAccountIdentifier *identifier;


+(id)properties;
+(id)schemaHashRoot;


@end


#endif