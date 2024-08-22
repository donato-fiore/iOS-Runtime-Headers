// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSHAREDUSERDATAMODEL_H
#define HMDSHAREDUSERDATAMODEL_H

@class NSUUID;


#import "HMDUserDataModel.h"

@interface HMDSharedUserDataModel : HMDUserDataModel

@property (retain) NSUUID *assistantAccessControlModelUUID;
@property (retain) NSUUID *mediaContentProfileAccessControlModelUUID;
@property (retain) NSUUID *supportsAutomaticHH2MigrationModelUUID;
@property (retain) NSUUID *userListeningHistoryUpdateControlModelUUID;


+(id)hmbProperties;


@end


#endif