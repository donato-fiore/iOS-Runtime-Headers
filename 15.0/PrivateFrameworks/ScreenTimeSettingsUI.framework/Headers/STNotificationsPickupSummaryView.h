// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STNOTIFICATIONSPICKUPSUMMARYVIEW_H
#define STNOTIFICATIONSPICKUPSUMMARYVIEW_H

@class UIView, UIStackView;


#import "STUsageReport.h"

@interface STNotificationsPickupSummaryView : UIView

@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (retain, nonatomic) STUsageReport *usageReport; // ivar: _usageReport


-(id)_attributedString:(id)arg0 withFont:(id)arg1 ;
-(id)_attributedStringForNotificationsDetailText;
-(id)_attributedStringForNotificationsTitle;
-(id)_attributedStringForPickUpDetailText;
-(id)_attributedStringForPickUpTitle;
-(id)initWithUsageReport:(id)arg0 ;


@end


#endif