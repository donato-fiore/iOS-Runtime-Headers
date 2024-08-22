// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CADUPCOMINGEVENTSPREDICATE_H
#define CADUPCOMINGEVENTSPREDICATE_H

@protocol NSSecureCoding;


#import "CADPredicate.h"

@interface CADUpcomingEventsPredicate : CADPredicate <NSSecureCoding>



@property (readonly, nonatomic) int limit; // ivar: _limit


+(BOOL)supportsSecureCoding;
+(id)predicateWithLimit:(int)arg0 ;
-(id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLimit:(int)arg0 ;
-(id)predicateFormat;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif