// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBACTIVATIONFAILEDALERTITEM_H
#define SBACTIVATIONFAILEDALERTITEM_H

@class SBAlertItem;



@interface SBActivationFailedAlertItem : SBAlertItem {
    BOOL _showRetryButton;
    BOOL _showSupportNumber;
    NSInteger _slot;
}




-(BOOL)suppressForKeynote;
-(id)initWithFailureCount:(int)arg0 slot:(NSInteger)arg1 ;
-(void)configure:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;
-(void)performUnlockAction;


@end


#endif