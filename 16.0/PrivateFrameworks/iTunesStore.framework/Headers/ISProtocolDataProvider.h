// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISPROTOCOLDATAPROVIDER_H
#define ISPROTOCOLDATAPROVIDER_H

@class SSBiometricAuthenticationContext, NSString;
@protocol NSCopying;


#import "ISDataProvider.h"

@interface ISProtocolDataProvider : ISDataProvider <NSCopying>

 {
    BOOL _shouldProcessTouchIDDialogs;
    SSBiometricAuthenticationContext *_biometricAuthenticationContext;
}


@property (copy) NSString *presentingSceneIdentifier; // ivar: _presentingSceneIdentifier
@property BOOL shouldPostFooterSectionChanged; // ivar: _shouldPostFooterSectionChanged
@property BOOL shouldProcessAccount; // ivar: _shouldProcessAccount
@property BOOL shouldProcessAuthenticationDialogs; // ivar: _shouldProcessAuthenticationDialogs
@property BOOL shouldProcessDialogs; // ivar: _shouldProcessDialogs
@property BOOL shouldProcessDialogsOutsideDaemon; // ivar: _shouldProcessDialogsOutsideDaemon
@property BOOL shouldProcessProtocol; // ivar: _shouldProcessProtocol
@property (readonly) BOOL shouldProcessTouchIDDialogs;
@property BOOL shouldTriggerDownloads; // ivar: _shouldTriggerDownloads


-(BOOL)_processFailureTypeFromDictionary:(id)arg0 error:(*id)arg1 ;
-(BOOL)_shouldAttemptPasswordPaymentSheetForError:(id)arg0 ;
-(BOOL)_shouldFailWithTokenErrorForDialog:(id)arg0 dictionary:(id)arg1 error:(*id)arg2 ;
-(BOOL)parseData:(id)arg0 returningError:(*id)arg1 ;
-(BOOL)processDialogFromDictionary:(id)arg0 error:(*id)arg1 ;
-(BOOL)processDictionary:(id)arg0 error:(*id)arg1 ;
-(id)_metricsDictionaryForResponse:(id)arg0 ;
-(id)_touchIDDialogForResponse:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)_checkBiometricFailureForResponse:(id)arg0 ;
-(void)_checkDownloadQueues;
-(void)_checkInAppPurchaseQueueForAction:(id)arg0 ;
-(void)_performActionsForResponse:(id)arg0 ;
-(void)_presentDialog:(id)arg0 ;
-(void)_refreshSubscriptionStatus;
-(void)_selectFooterSection:(id)arg0 ;


@end


#endif