// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICCLOUDSTATE_H
#define ICCLOUDSTATE_H

@class NSManagedObject, NSDate;


#import "ICCloudSyncingObject.h"

@interface ICCloudState : NSManagedObject

@property (retain, nonatomic) ICCloudSyncingObject *cloudSyncingObject;
@property (nonatomic) NSInteger currentLocalVersion;
@property (nonatomic) BOOL inCloud;
@property (nonatomic) NSInteger latestVersionSyncedToCloud;
@property (retain, nonatomic) NSDate *localVersionDate;


-(BOOL)isInCloud;


@end


#endif