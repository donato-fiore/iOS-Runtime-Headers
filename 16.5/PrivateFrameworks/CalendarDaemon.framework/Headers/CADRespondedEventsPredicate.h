// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADRESPONDEDEVENTSPREDICATE_H
#define CADRESPONDEDEVENTSPREDICATE_H

@protocol NSSecureCoding;


#import "CADPredicate.h"

@interface CADRespondedEventsPredicate : CADPredicate <NSSecureCoding>





+(BOOL)supportsSecureCoding;
+(id)predicate;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultPropertiesToLoad;
-(id)predicateFormat;


@end


#endif