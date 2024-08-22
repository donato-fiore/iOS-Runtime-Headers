// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDASHBOARDBALANCEITEM_H
#define PKDASHBOARDBALANCEITEM_H

@class NSString, UIColor;
@protocol PKDashboardItem;

#import <Foundation/Foundation.h>


@interface PKDashboardBalanceItem : NSObject <PKDashboardItem>



@property (retain, nonatomic) NSString *availableCredit; // ivar: _availableCredit
@property (retain, nonatomic) NSString *balance; // ivar: _balance
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UIColor *titleColor; // ivar: _titleColor
@property (copy, nonatomic) id *topUpAction; // ivar: _topUpAction
@property (nonatomic) BOOL topUpEnabled; // ivar: _topUpEnabled
@property (retain, nonatomic) NSString *topUpTitle; // ivar: _topUpTitle


+(id)identifier;


@end


#endif