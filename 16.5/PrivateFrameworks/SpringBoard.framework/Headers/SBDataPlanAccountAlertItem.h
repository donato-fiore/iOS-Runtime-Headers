// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDATAPLANACCOUNTALERTITEM_H
#define SBDATAPLANACCOUNTALERTITEM_H

@class NSURL;
@protocol SBDataPlanAlertActions;


#import "SBDataPlanAlertItem.h"

@interface SBDataPlanAccountAlertItem : SBDataPlanAlertItem <SBDataPlanAlertActions>



@property (copy, nonatomic) NSURL *accountURL; // ivar: _accountURL


+(id)laterButtonTitle;
+(id)nowButtonTitle;
-(id)initWithAccountURL:(id)arg0 ;
-(void)configure:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;
-(void)notNow;
-(void)takeAction;


@end


#endif