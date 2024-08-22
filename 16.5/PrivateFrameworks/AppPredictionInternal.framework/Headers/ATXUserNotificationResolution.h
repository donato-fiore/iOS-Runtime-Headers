// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXUSERNOTIFICATIONRESOLUTION_H
#define ATXUSERNOTIFICATIONRESOLUTION_H

@class NSUUID, NSDate;

#import <Foundation/Foundation.h>


@interface ATXUserNotificationResolution : NSObject

@property (readonly, nonatomic) NSUUID *notificationUUID; // ivar: _notificationUUID
@property (readonly, nonatomic) NSUInteger numExpansions; // ivar: _numExpansions
@property (readonly, nonatomic) NSDate *resolutionTimestamp; // ivar: _resolutionTimestamp
@property (readonly, nonatomic) NSInteger resolutionType; // ivar: _resolutionType


-(id)initWithNotificationUUID:(id)arg0 numExpansions:(NSUInteger)arg1 resolutionType:(NSInteger)arg2 resolutionTimestamp:(id)arg3 ;


@end


#endif