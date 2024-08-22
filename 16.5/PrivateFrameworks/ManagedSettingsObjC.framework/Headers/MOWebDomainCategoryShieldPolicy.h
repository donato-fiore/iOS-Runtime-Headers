// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOWEBDOMAINCATEGORYSHIELDPOLICY_H
#define MOWEBDOMAINCATEGORYSHIELDPOLICY_H

@class NSString;
@protocol MOPersistable;


#import "MOCategoryShieldPolicy.h"

@interface MOWebDomainCategoryShieldPolicy : MOCategoryShieldPolicy <MOPersistable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) id *persistableValue;
@property (readonly) Class superclass;


+(BOOL)isValidPersistableRepresentation:(id)arg0 ;
+(id)initializeWithPersistableValue:(id)arg0 ;


@end


#endif