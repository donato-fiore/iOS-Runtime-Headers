// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDACCESSORYBULLETINREGISTRATIONINFO_H
#define HMDACCESSORYBULLETINREGISTRATIONINFO_H

@class NSUUID, NSPredicate;

#import <Foundation/Foundation.h>


@interface HMDAccessoryBulletinRegistrationInfo : NSObject

@property (retain, nonatomic) NSUUID *accessoryUUID; // ivar: _accessoryUUID
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (nonatomic) NSInteger serviceInstanceID; // ivar: _serviceInstanceID


-(id)description;


@end


#endif