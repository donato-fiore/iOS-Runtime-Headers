// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CADNOTIFIABLEEVENTSPREDICATE_H
#define CADNOTIFIABLEEVENTSPREDICATE_H

@class NSString;
@protocol EKDefaultPropertiesLoading, NSSecureCoding;


#import "CADPredicate.h"

@interface CADNotifiableEventsPredicate : CADPredicate <EKDefaultPropertiesLoading, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)predicate;
-(BOOL)shouldLoadDefaultProperties;
-(id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultPropertiesToLoad;
-(id)predicateFormat;


@end


#endif