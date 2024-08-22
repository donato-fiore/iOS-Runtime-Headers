// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ATXACTIVEMISSEDNOTIFICATIONRANKINGTUPLE_H
#define _ATXACTIVEMISSEDNOTIFICATIONRANKINGTUPLE_H

@class ATXMissedNotificationRanking;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _ATXActiveMissedNotificationRankingTuple : NSObject <NSSecureCoding>



@property (readonly, nonatomic) ATXMissedNotificationRanking *activeDeliveredRanking; // ivar: _activeDeliveredRanking
@property (readonly, nonatomic) ATXMissedNotificationRanking *activeUpcomingRanking; // ivar: _activeUpcomingRanking
@property (readonly, nonatomic) ATXMissedNotificationRanking *justCompletedRanking; // ivar: _justCompletedRanking


+(BOOL)supportsSecureCoding;
-(id)initWithActiveUpcomingRanking:(id)arg0 activeDeliveredRanking:(id)arg1 justCompletedRanking:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPreviousTuple:(id)arg0 nextRankingEvent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif