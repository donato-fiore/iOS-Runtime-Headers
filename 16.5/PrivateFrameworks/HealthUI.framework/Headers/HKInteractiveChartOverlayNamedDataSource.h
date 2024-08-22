// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKINTERACTIVECHARTOVERLAYNAMEDDATASOURCE_H
#define HKINTERACTIVECHARTOVERLAYNAMEDDATASOURCE_H

@class NSString;
@protocol HKChartCacheDataSource;

#import <Foundation/Foundation.h>


@interface HKInteractiveChartOverlayNamedDataSource : NSObject

@property (copy, nonatomic) id *contextTitleForTimeScope; // ivar: _contextTitleForTimeScope
@property (retain, nonatomic) NSObject<HKChartCacheDataSource> *dataSource; // ivar: _dataSource
@property (retain, nonatomic) NSString *name; // ivar: _name


-(id)initWithDataSource:(id)arg0 named:(id)arg1 withContextTitleForTimeScope:(id)arg2 ;


@end


#endif