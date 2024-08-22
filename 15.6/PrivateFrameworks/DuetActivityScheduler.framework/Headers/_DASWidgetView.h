// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DASWIDGETVIEW_H
#define _DASWIDGETVIEW_H

@class DASWidgetInfo, NSDate, NSString;



@interface _DASWidgetView : DASWidgetInfo

@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (nonatomic) BOOL inStack; // ivar: _inStack
@property (nonatomic) NSInteger pageID; // ivar: _pageID
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (nonatomic) CGFloat timeUntilContentExpiration; // ivar: _timeUntilContentExpiration
@property (readonly, copy, nonatomic) NSString *viewID; // ivar: _viewID


+(id)viewFrom:(id)arg0 to:(id)arg1 forWidgetID:(id)arg2 ;
-(id)initWithViewID:(id)arg0 budgetID:(id)arg1 extensionBundleID:(id)arg2 from:(id)arg3 to:(id)arg4 ;


@end


#endif