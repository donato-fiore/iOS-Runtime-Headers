// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CADNOTIFICATIONCENTERVISIBLEEVENTSPREDICATE_H
#define CADNOTIFICATIONCENTERVISIBLEEVENTSPREDICATE_H

@protocol NSSecureCoding;


#import "CADPredicate.h"

@interface CADNotificationCenterVisibleEventsPredicate : CADPredicate <NSSecureCoding>





+(BOOL)supportsSecureCoding;
+(id)predicate;
-(id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)predicateFormat;


@end


#endif