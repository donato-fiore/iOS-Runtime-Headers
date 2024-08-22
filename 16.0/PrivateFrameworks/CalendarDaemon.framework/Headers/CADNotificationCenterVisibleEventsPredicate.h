// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CADNOTIFICATIONCENTERVISIBLEEVENTSPREDICATE_H
#define CADNOTIFICATIONCENTERVISIBLEEVENTSPREDICATE_H

@protocol NSSecureCoding;


#import "CADPredicate.h"

@interface CADNotificationCenterVisibleEventsPredicate : CADPredicate <NSSecureCoding>





+(BOOL)supportsSecureCoding;
+(id)predicate;
-(?)copyMatchingItemsWithDatabase;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)predicateFormat;


@end


#endif