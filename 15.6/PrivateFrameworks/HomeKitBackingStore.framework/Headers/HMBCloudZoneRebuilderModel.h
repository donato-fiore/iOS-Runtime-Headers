// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMBCLOUDZONEREBUILDERMODEL_H
#define HMBCLOUDZONEREBUILDERMODEL_H

@class NSNumber, NSUUID;


#import "HMBModel.h"

@interface HMBCloudZoneRebuilderModel : HMBModel

@property (retain, nonatomic) NSNumber *hasCompleted;
@property (retain, nonatomic) NSUUID *uniqueToken;


+(id)hmbProperties;
+(id)sentinelUUID;
-(id)init;


@end


#endif