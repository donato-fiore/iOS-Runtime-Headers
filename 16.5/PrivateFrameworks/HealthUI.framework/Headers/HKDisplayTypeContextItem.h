// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKDISPLAYTYPECONTEXTITEM_H
#define HKDISPLAYTYPECONTEXTITEM_H

@class NSString, NSAttributedString;

#import <Foundation/Foundation.h>

#import "HKUIMetricColors.h"
#import "HKDisplayTypeContextItemTitleAccessory.h"

@interface HKDisplayTypeContextItem : NSObject

@property (copy, nonatomic) NSString *analyticsIdentifier; // ivar: _analyticsIdentifier
@property (copy, nonatomic) NSAttributedString *attributedValue; // ivar: _attributedValue
@property (copy, nonatomic) NSString *dateString; // ivar: _dateString
@property (readonly, nonatomic) BOOL hasTitleAccessory;
@property (nonatomic) BOOL infoHidden; // ivar: _infoHidden
@property (nonatomic) BOOL isUnitIncludedInValue; // ivar: _isUnitIncludedInValue
@property (retain, nonatomic) HKUIMetricColors *metricColors; // ivar: _metricColors
@property (retain, nonatomic) HKUIMetricColors *selectedMetricColors; // ivar: _selectedMetricColors
@property (copy, nonatomic) HKDisplayTypeContextItemTitleAccessory *selectedTitleAccessory; // ivar: _selectedTitleAccessory
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) HKDisplayTypeContextItemTitleAccessory *titleAccessory; // ivar: _titleAccessory
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