// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBDATAPLANCOMPLETIONALERTITEM_H
#define SBDATAPLANCOMPLETIONALERTITEM_H

@class NSString;


#import "SBDataPlanAlertItem.h"

@interface SBDataPlanCompletionAlertItem : SBDataPlanAlertItem

@property (copy, nonatomic) NSString *carrierName; // ivar: _carrierName
@property (nonatomic, getter=isNewAccount) BOOL newAccount; // ivar: _newAccount


-(id)initWithCarrierName:(id)arg0 newAccount:(BOOL)arg1 ;
-(void)configure:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;


@end


#endif