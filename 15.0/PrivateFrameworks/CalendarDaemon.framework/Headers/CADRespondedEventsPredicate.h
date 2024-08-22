// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CADRESPONDEDEVENTSPREDICATE_H
#define CADRESPONDEDEVENTSPREDICATE_H

@class NSString;
@protocol EKDefaultPropertiesLoading, NSSecureCoding;


#import "CADPredicate.h"

@interface CADRespondedEventsPredicate : CADPredicate <EKDefaultPropertiesLoading, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)predicate;
-(BOOL)shouldLoadDefaultProperties;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultPropertiesToLoad;
-(id)predicateFormat;


@end


#endif