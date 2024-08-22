// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDATAPLANACTIVATIONALERTITEM_H
#define SBDATAPLANACTIVATIONALERTITEM_H



#import "SBDataPlanAccountAlertItem.h"

@interface SBDataPlanActivationAlertItem : SBDataPlanAccountAlertItem {
    BOOL _promptToDisable;
}


@property (nonatomic, getter=isNewAccount) BOOL newAccount; // ivar: _newAccount


-(id)initWithAccountURL:(id)arg0 newAccount:(BOOL)arg1 promptToDisable:(BOOL)arg2 ;
-(void)configure:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;
-(void)notNow;


@end


#endif