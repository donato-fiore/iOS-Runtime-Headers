// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDHOMETHREADNETWORKMODEL_H
#define HMDHOMETHREADNETWORKMODEL_H

@class NSString;


#import "HMDBackingStoreModelObject.h"

@interface HMDHomeThreadNetworkModel : HMDBackingStoreModelObject

@property (copy, nonatomic) NSString *threadNetworkID;


+(id)defaultModelForHome:(id)arg0 ;
+(id)modelIDForHome:(id)arg0 ;
+(id)properties;


@end


#endif