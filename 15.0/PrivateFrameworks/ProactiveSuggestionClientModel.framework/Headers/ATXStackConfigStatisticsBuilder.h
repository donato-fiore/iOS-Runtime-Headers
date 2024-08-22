// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXSTACKCONFIGSTATISTICSBUILDER_H
#define ATXSTACKCONFIGSTATISTICSBUILDER_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface ATXStackConfigStatisticsBuilder : NSObject

@property (readonly, copy, nonatomic) NSString *containerBundleIdentifier; // ivar: _containerBundleIdentifier
@property (nonatomic) NSInteger countOfNonSmartStacksWithWidget; // ivar: _countOfNonSmartStacksWithWidget
@property (nonatomic) NSInteger countOfSmartStacksWithWidget; // ivar: _countOfSmartStacksWithWidget
@property (nonatomic) NSInteger countOfStandaloneWidgets; // ivar: _countOfStandaloneWidgets
@property (nonatomic) NSInteger countOfWidgetsWithUnknownStackKind; // ivar: _countOfWidgetsWithUnknownStackKind
@property (copy, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (readonly, copy, nonatomic) NSString *widgetBundleId; // ivar: _widgetBundleId
@property (readonly, nonatomic) NSInteger widgetFamily; // ivar: _widgetFamily
@property (readonly, copy, nonatomic) NSString *widgetKind; // ivar: _widgetKind


-(id)build;
-(id)initWithWidgetBundleId:(id)arg0 widgetKind:(id)arg1 containerBundleIdentifier:(id)arg2 widgetFamily:(NSInteger)arg3 ;


@end


#endif