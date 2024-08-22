// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDHOMEMANAGERMODEL_H
#define HMDHOMEMANAGERMODEL_H

@class NSDictionary, NSString;


#import "HMDBackingStoreModelObject.h"

@interface HMDHomeManagerModel : HMDBackingStoreModelObject

@property (retain, nonatomic) NSDictionary *cloudZoneInformation;
@property (retain, nonatomic) NSString *controllerKeyIdentifier;
@property (retain, nonatomic) NSString *primaryHomeUUID;


+(id)properties;


@end


#endif