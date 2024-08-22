// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMBCLOUDSTATEMODEL_H
#define HMBCLOUDSTATEMODEL_H

@class CKServerChangeToken;


#import "HMBModel.h"

@interface HMBCloudStateModel : HMBModel

@property (retain, nonatomic) CKServerChangeToken *serverChangeToken;


+(id)hmbProperties;


@end


#endif