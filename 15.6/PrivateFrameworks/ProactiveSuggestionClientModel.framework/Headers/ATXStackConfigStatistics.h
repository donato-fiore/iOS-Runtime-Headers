// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXSTACKCONFIGSTATISTICS_H
#define ATXSTACKCONFIGSTATISTICS_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface ATXStackConfigStatistics : NSObject

@property (readonly, copy, nonatomic) NSString *containerBundleIdentifier; // ivar: _containerBundleIdentifier
@property (readonly, nonatomic) NSInteger countOfNonSmartStacksWithWidget; // ivar: _countOfNonSmartStacksWithWidget
@property (readonly, nonatomic) NSInteger countOfSmartStacksWithWidget; // ivar: _countOfSmartStacksWithWidget
@property (readonly, nonatomic) NSInteger countOfStandaloneWidgets; // ivar: _countOfStandaloneWidgets
@property (readonly, nonatomic) NSInteger countOfWidgetsWithUnknownStackKind; // ivar: _countOfWidgetsWithUnknownStackKind
@property (readonly, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (readonly, copy, nonatomic) NSString *widgetBundleId; // ivar: _widgetBundleId
@property (readonly, nonatomic) NSInteger widgetFamily; // ivar: _widgetFamily
@property (readonly, copy, nonatomic) NSString *widgetKind; // ivar: _widgetKind


+(id)stackConfigStatisticsWithWidgetBundleId:(id)arg0 widgetKind:(id)arg1 containerBundleIdentifier:(id)arg2 widgetFamily:(NSInteger)arg3 withBlock:(id)arg4 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithBuilder:(id)arg0 ;


@end


#endif