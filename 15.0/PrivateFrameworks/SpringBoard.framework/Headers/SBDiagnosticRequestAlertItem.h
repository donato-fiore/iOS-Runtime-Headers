// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBDIAGNOSTICREQUESTALERTITEM_H
#define SBDIAGNOSTICREQUESTALERTITEM_H

@class SBAlertItem, NSString, NSArray;



@interface SBDiagnosticRequestAlertItem : SBAlertItem

@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (copy, nonatomic) NSArray *radarAttachments; // ivar: _radarAttachments
@property (nonatomic) NSInteger radarClassification; // ivar: _radarClassification
@property (copy, nonatomic) NSString *radarDescription; // ivar: _radarDescription
@property (nonatomic) NSInteger radarReproducibility; // ivar: _radarReproducibility
@property (copy, nonatomic) NSString *radarTitle; // ivar: _radarTitle
@property (copy, nonatomic) NSString *title; // ivar: _title


-(BOOL)reappearsAfterLock;
-(BOOL)reappearsAfterUnlock;
-(BOOL)shouldShowInLockScreen;
-(id)_noButtonTitle;
-(id)_stringFromClassification:(NSInteger)arg0 ;
-(id)_stringFromReproducibility:(NSInteger)arg0 ;
-(id)_yesButtonTitle;
-(void)_fileRadar;
-(void)configure:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;
-(void)performUnlockAction;


@end


#endif