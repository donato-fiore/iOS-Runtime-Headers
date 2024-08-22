// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXWIDGETENGAGEMENTRECORD_H
#define ATXWIDGETENGAGEMENTRECORD_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface ATXWidgetEngagementRecord : NSObject

@property (readonly, nonatomic) NSString *containerBundleIdentifier; // ivar: _containerBundleIdentifier
@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) NSString *widgetBundleId; // ivar: _widgetBundleId
@property (readonly, nonatomic) NSInteger widgetFamily; // ivar: _widgetFamily
@property (readonly, nonatomic) NSString *widgetKind; // ivar: _widgetKind


-(id)initWithDate:(id)arg0 type:(NSInteger)arg1 ;
-(id)initWithDate:(id)arg0 type:(NSInteger)arg1 widgetBundleId:(id)arg2 containerBundleIdentifier:(id)arg3 widgetKind:(id)arg4 layoutSize:(NSUInteger)arg5 ;


@end


#endif