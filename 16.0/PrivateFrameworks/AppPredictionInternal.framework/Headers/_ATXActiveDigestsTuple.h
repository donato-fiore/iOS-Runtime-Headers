// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ATXACTIVEDIGESTSTUPLE_H
#define _ATXACTIVEDIGESTSTUPLE_H

@class ATXUserNotificationDigest;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _ATXActiveDigestsTuple : NSObject <NSSecureCoding>



@property (readonly, nonatomic) ATXUserNotificationDigest *activeScheduledDigest; // ivar: _activeScheduledDigest
@property (readonly, nonatomic) ATXUserNotificationDigest *activeUpcomingDigest; // ivar: _activeUpcomingDigest
@property (readonly, nonatomic) ATXUserNotificationDigest *justCompletedDigest; // ivar: _justCompletedDigest


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithActiveUpcomingDigest:(id)arg0 activeScheduledDigest:(id)arg1 justCompletedDigest:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPreviousTuple:(id)arg0 nextDigestEvent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif