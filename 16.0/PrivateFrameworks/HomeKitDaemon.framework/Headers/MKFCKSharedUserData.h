// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKFCKSHAREDUSERDATA_H
#define MKFCKSHAREDUSERDATA_H

@class NSUUID, NSDate, NSString;


#import "MKFCKModel.h"
#import "_MKFUser.h"

@interface MKFCKSharedUserData : MKFCKModel {
    _MKFUser *_workingStoreUser;
}


@property (copy, nonatomic) NSUUID *flags;
@property (copy, nonatomic) NSUUID *homeModelID;
@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSString *writerVersion;


+(id)fetchRequest;
-(id)workingStoreUser;


@end


#endif