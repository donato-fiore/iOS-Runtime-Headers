// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDRELAYACCESSTOKENMODEL_H
#define HMDRELAYACCESSTOKENMODEL_H

@class NSData, NSString;


#import "HMDBackingStoreModelObject.h"

@interface HMDRelayAccessTokenModel : HMDBackingStoreModelObject

@property (retain, nonatomic) NSData *accessToken;
@property (retain, nonatomic) NSString *accessoryIdentifier;


+(id)properties;
-(id)dependentUUIDs;


@end


#endif