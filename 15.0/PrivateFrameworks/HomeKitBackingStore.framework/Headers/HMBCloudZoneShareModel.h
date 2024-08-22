// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMBCLOUDZONESHAREMODEL_H
#define HMBCLOUDZONESHAREMODEL_H

@class CKShare;


#import "HMBModel.h"

@interface HMBCloudZoneShareModel : HMBModel

@property (retain, nonatomic) CKShare *share;


+(id)hmbExternalRecordType;
+(id)hmbProperties;


@end


#endif