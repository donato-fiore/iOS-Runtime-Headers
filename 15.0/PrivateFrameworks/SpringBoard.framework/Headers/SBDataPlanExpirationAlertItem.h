// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBDATAPLANEXPIRATIONALERTITEM_H
#define SBDATAPLANEXPIRATIONALERTITEM_H

@class NSDate;


#import "SBDataPlanAccountAlertItem.h"

@interface SBDataPlanExpirationAlertItem : SBDataPlanAccountAlertItem

@property (retain, nonatomic) NSDate *expirationDate; // ivar: _expirationDate


-(id)initWithAccountURL:(id)arg0 expirationDate:(id)arg1 ;
-(void)configure:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;


@end


#endif