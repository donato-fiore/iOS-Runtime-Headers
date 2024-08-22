// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKDISPLAYTYPECONTEXTITEM_H
#define HKDISPLAYTYPECONTEXTITEM_H

@class NSAttributedString, NSString;

#import <Foundation/Foundation.h>

#import "HKUIMetricColors.h"

@interface HKDisplayTypeContextItem : NSObject

@property (copy, nonatomic) NSAttributedString *attributedValue; // ivar: _attributedValue
@property (copy, nonatomic) NSString *dateString; // ivar: _dateString
@property (nonatomic) BOOL infoHidden; // ivar: _infoHidden
@property (retain, nonatomic) HKUIMetricColors *metricColors; // ivar: _metricColors
@property (retain, nonatomic) HKUIMetricColors *selectedMetricColors; // ivar: _selectedMetricColors
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSString *unit; // ivar: _unit
@property (nonatomic) BOOL useTightSpacingBetweenValueAndUnit; // ivar: _useTightSpacingBetweenValueAndUnit
@property (nonatomic) BOOL userInteractive; // ivar: _userInteractive
@property (copy, nonatomic) NSString *value; // ivar: _value
@property (copy, nonatomic) NSString *valueContext; // ivar: _valueContext


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToContextItem:(id)arg0 ;
-(NSUInteger)hash;
-(id)debugDescription;
-(id)init;


@end


#endif