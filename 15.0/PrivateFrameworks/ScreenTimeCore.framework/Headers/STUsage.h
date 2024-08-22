// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STUSAGE_H
#define STUSAGE_H

@class NSManagedObject, NSSet, NSDate;


#import "STCoreDevice.h"
#import "STCoreUser.h"

@interface STUsage : NSManagedObject

@property (retain, nonatomic) NSSet *blocks;
@property (retain, nonatomic) STCoreDevice *device;
@property (retain, nonatomic) NSDate *lastEventDate;
@property (retain, nonatomic) NSDate *lastUpdatedDate;
@property (retain, nonatomic) STCoreUser *user;


+(id)fetchRequestMatchingUser:(id)arg0 device:(id)arg1 ;


@end


#endif