// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DASWIDGETREFRESH_H
#define _DASWIDGETREFRESH_H

@class DASWidgetInfo, NSDate, NSString;



@interface _DASWidgetRefresh : DASWidgetInfo

@property (nonatomic) BOOL isDASInitiated; // ivar: _isDASInitiated
@property (readonly, nonatomic) NSDate *refreshDate; // ivar: _refreshDate
@property (copy, nonatomic) NSString *refreshReason; // ivar: _refreshReason


+(id)refreshAt:(id)arg0 forWidgetID:(id)arg1 ;
-(id)initWithBudgetID:(id)arg0 extensionBundleID:(id)arg1 refreshDate:(id)arg2 ;


@end


#endif