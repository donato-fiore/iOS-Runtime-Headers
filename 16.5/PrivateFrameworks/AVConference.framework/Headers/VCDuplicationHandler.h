// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCDUPLICATIONHANDLER_H
#define VCDUPLICATIONHANDLER_H


#import <Foundation/Foundation.h>


@interface VCDuplicationHandler : NSObject {
    unsigned char _duplicationState;
    BOOL _moreThanOneConnectionAvailable;
    ? _localAlertInfo;
    ? _remoteAlertInfo;
    BOOL _forceDisableDuplication;
}


@property BOOL allowDuplication; // ivar: _allowDuplication
@property (readonly) unsigned char duplicationReason; // ivar: _duplicationReason
@property BOOL iRATDuplicationEnabled; // ivar: _iRATDuplicationEnabled
@property (readonly) BOOL isDuplicationEnabled;
@property (readonly) BOOL isDuplicationPending;
@property BOOL isRemotePreAzul; // ivar: _isRemotePreAzul


-(BOOL)isDuplicationDueToWRMSuggestion;
-(BOOL)updateDuplicationStateWithAlertInfo:(BOOL)arg0 ;
-(id)init;
-(struct ? )handleDuplicationStateUpdateEvent:(struct ? )arg0 ;
-(void)disableDuplication;
-(void)enableDuplication;
-(void)shareLocalInterfacePreferenceWithPeerDuringActiveDuplicationForEvent:(struct ? )arg0 updateResult:(struct ? *)arg1 ;
-(void)stopRemoteDuplicationAndUpdateResult:(struct ? *)arg0 updateAlertState:(BOOL)arg1 ;
-(void)updateDuplicationStateForAlertStateUpdatedEvent:(struct ? )arg0 updateResult:(struct ? *)arg1 ;
-(void)updateDuplicationStateForConnectionArrayUpdatedEvent:(struct ? )arg0 updateResult:(struct ? *)arg1 ;
-(void)updateDuplicationStateForLocalWRMSuggestingCellularEvent:(struct ? )arg0 updateResult:(struct ? *)arg1 ;
-(void)updateDuplicationStateForLocalWRMSuggestingWiFiEvent:(struct ? )arg0 updateResult:(struct ? *)arg1 ;
-(void)updateDuplicationStateForMediaHealthRecovered:(struct ? )arg0 updateResult:(struct ? *)arg1 ;
-(void)updateDuplicationStateForMediaHealthUnrecoverable:(struct ? )arg0 updateResult:(struct ? *)arg1 ;
-(void)updateDuplicationStateForMissingPacketsUpdateEvent:(struct ? )arg0 updateResult:(struct ? *)arg1 ;
-(void)updateDuplicationStateForReceivingPacketsUpdateEvent:(struct ? )arg0 updateResult:(struct ? *)arg1 ;
-(void)updateDuplicationStateForRemoteDuplicationChanged:(struct ? )arg0 updateResult:(struct ? *)arg1 updateAlertState:(BOOL)arg2 ;
-(void)updateDuplicationStateForRemoteWRMSuggestingWiFiEvent:(struct ? )arg0 updateResult:(struct ? *)arg1 ;
-(void)updateDuplicationStateForTurnOffDuplicationForHandoverEvent:(struct ? )arg0 updateResult:(struct ? *)arg1 ;
-(void)updateDuplicationStateForTurnOnDuplicationForHandoverEvent:(struct ? )arg0 updateResult:(struct ? *)arg1 ;


@end


#endif