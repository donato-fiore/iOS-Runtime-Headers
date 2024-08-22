// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKREMOTEFEATUREAVAILABILITYRULESET_H
#define HKREMOTEFEATUREAVAILABILITYRULESET_H

@class NSMutableDictionary, NSSet;

#import <Foundation/Foundation.h>


@interface HKRemoteFeatureAvailabilityRuleSet : NSObject

@property (retain, nonatomic) NSMutableDictionary *conditions; // ivar: _conditions
@property (retain, nonatomic) NSSet *supportedConditions; // ivar: _supportedConditions


-(id)evaluateAll;
-(id)initWithRawValue:(id)arg0 dataSource:(id)arg1 supportedConditions:(id)arg2 ;
-(void)_parseRulesFromRawValue:(id)arg0 dataSource:(id)arg1 ;


@end


#endif