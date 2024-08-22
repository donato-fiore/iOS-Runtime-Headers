// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDASHBOARDPAYLATERELIGIBLESPENDITEM_H
#define PKDASHBOARDPAYLATERELIGIBLESPENDITEM_H

@class NSString, PKAccount;
@protocol PKDashboardItem;

#import <Foundation/Foundation.h>


@interface PKDashboardPayLaterEligibleSpendItem : NSObject <PKDashboardItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKAccount *payLaterAccount; // ivar: _payLaterAccount
@property (readonly) Class superclass;


+(id)identifier;
-(id)initWithPayLaterAccount:(id)arg0 ;


@end


#endif