// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DPPRIVACYBUDGETPROPERTIES_H
#define _DPPRIVACYBUDGETPROPERTIES_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface _DPPrivacyBudgetProperties : NSObject

@property (retain, nonatomic) NSNumber *interval; // ivar: _interval
@property (retain, nonatomic) NSNumber *intervalBudgetValue; // ivar: _intervalBudgetValue
@property (retain, nonatomic) NSNumber *intervalChunksValue; // ivar: _intervalChunksValue
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSNumber *refillAmount; // ivar: _refillAmount
@property (retain, nonatomic) NSNumber *refillInterval; // ivar: _refillInterval


+(id)allBudgetPropertiesKeys;
+(id)budgetMaintenanceSchedule;
+(id)budgetPropertiesForKey:(id)arg0 ;
+(id)budgetPropertiesFromDictionary:(id)arg0 ;
+(id)budgetPropertiesFromFile:(id)arg0 ;
+(void)initializeAllBudgetProperties;
-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif