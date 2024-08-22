// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDACCESSORYBULLETINREGISTRATIONINFO_H
#define HMDACCESSORYBULLETINREGISTRATIONINFO_H

@class NSUUID, NSPredicate;

#import <Foundation/Foundation.h>


@interface HMDAccessoryBulletinRegistrationInfo : NSObject

@property (retain, nonatomic) NSUUID *accessoryUUID; // ivar: _accessoryUUID
@property (nonatomic) NSInteger characteristicInstanceID; // ivar: _characteristicInstanceID
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) NSPredicate *predicate; // ivar: _predicate


-(id)description;


@end


#endif