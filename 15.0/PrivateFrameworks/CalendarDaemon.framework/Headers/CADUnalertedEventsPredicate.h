// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CADUNALERTEDEVENTSPREDICATE_H
#define CADUNALERTEDEVENTSPREDICATE_H

@protocol NSSecureCoding;


#import "CADPredicate.h"

@interface CADUnalertedEventsPredicate : CADPredicate <NSSecureCoding>





+(BOOL)supportsSecureCoding;
+(id)predicate;
-(id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)predicateFormat;


@end


#endif