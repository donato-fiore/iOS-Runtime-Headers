// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKFLOCALAPPLEMEDIASENSORPAIRING_H
#define MKFLOCALAPPLEMEDIASENSORPAIRING_H

@class NSUUID;


#import "HMDManagedObject.h"

@interface MKFLocalAppleMediaSensorPairing : HMDManagedObject

@property (copy, nonatomic) NSUUID *pairedSensorUUID;


+(id)fetchRequest;


@end


#endif