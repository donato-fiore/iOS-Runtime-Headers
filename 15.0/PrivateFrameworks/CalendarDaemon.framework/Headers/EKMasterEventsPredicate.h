// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKMASTEREVENTSPREDICATE_H
#define EKMASTEREVENTSPREDICATE_H



#import "EKPredicate.h"

@interface EKMasterEventsPredicate : EKPredicate



+(BOOL)supportsSecureCoding;
+(id)predicateWithCalendarIDs:(id)arg0 ;
-(id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg0 ;
-(id)predicateFormat;


@end


#endif