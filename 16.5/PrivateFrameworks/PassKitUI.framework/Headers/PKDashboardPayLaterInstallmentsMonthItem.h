// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDASHBOARDPAYLATERINSTALLMENTSMONTHITEM_H
#define PKDASHBOARDPAYLATERINSTALLMENTSMONTHITEM_H

@class NSString, PKPayLaterInstallmentsMonth;
@protocol PKDashboardItem, PKCalendarMonthAppearance, PKCalendarMonthDataSource;

#import <Foundation/Foundation.h>


@interface PKDashboardPayLaterInstallmentsMonthItem : NSObject <PKDashboardItem>



@property (readonly, weak, nonatomic) NSObject<PKCalendarMonthAppearance> *appearance; // ivar: _appearance
@property (readonly, weak, nonatomic) NSObject<PKCalendarMonthDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKPayLaterInstallmentsMonth *installmentsMonth; // ivar: _installmentsMonth
@property (readonly) Class superclass;


+(id)identifier;
-(id)initWithDataSource:(id)arg0 appearance:(id)arg1 installmentsMonth:(id)arg2 ;


@end


#endif