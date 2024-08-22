// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDATAPLANFAILUREALERTITEM_H
#define SBDATAPLANFAILUREALERTITEM_H

@class NSString;


#import "SBDataPlanAccountAlertItem.h"

@interface SBDataPlanFailureAlertItem : SBDataPlanAccountAlertItem

@property (copy, nonatomic) NSString *carrierName; // ivar: _carrierName
@property (nonatomic, getter=isNewAccount) BOOL newAccount; // ivar: _newAccount


+(id)laterButtonTitle;
+(id)nowButtonTitle;
-(id)initWithAccountURL:(id)arg0 carrierName:(id)arg1 newAccount:(BOOL)arg2 ;
-(void)configure:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;


@end


#endif