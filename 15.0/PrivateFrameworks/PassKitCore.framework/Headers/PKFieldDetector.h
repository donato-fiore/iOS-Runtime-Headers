// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKFIELDDETECTOR_H
#define PKFIELDDETECTOR_H

@class NFFieldDetectSession, NFLoyaltyAndPaymentSession, NFDigitalCarKeySession, NSHashTable, NSString;
@protocol NFFieldDetectSessionDelegate, NFLoyaltyAndPaymentSessionDelegate, NFDigitalCarKeySessionDelegate, NFSession, OS_dispatch_source, OS_dispatch_queue, PKFieldDetectorDelegate;

#import <Foundation/Foundation.h>

#import "PKFieldProperties.h"

@interface PKFieldDetector : NSObject <NFFieldDetectSessionDelegate, NFLoyaltyAndPaymentSessionDelegate, NFDigitalCarKeySessionDelegate>

 {
    NFFieldDetectSession *_fieldDetectSession;
    NSUInteger _fieldDetectSessionRetryCount;
    BOOL _fieldDetectSessionRequested;
    BOOL _nfcRadioEnabled;
    PKFieldProperties *_fieldPropertiesToLookup;
    NFLoyaltyAndPaymentSession *_fieldPropertiesLookupLoyaltySession;
    NFDigitalCarKeySession *_fieldPropertiesLookupDigitalCarKeySession;
    NSObject<NFSession> *_fieldPropertiesLookupSessionHandle;
    NSObject<OS_dispatch_source> *_fieldPropertiesLookupTimer;
    NSUInteger _fieldPropertieslookupSynchronizer;
    os_unfair_lock_s _lock;
    NSHashTable *_observers;
    NSUInteger _enablePersistentFieldDetectionReasons;
    PKFieldProperties *_fieldProperties;
    NSObject<OS_dispatch_queue> *_fieldDetectorSerialQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKFieldDetectorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) PKFieldProperties *fieldProperties;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)_endLookup;
-(void)_endLookupAndNotify;
-(void)_evaulatePersistentFieldDetectionEnablementReasons;
-(void)_invalidateFieldDetectSession;
-(void)_restartFieldDetectSession;
-(void)_setPersistentFieldDetectionEnabled:(BOOL)arg0 ;
-(void)_startFieldDetectSession;
-(void)_startLookup;
-(void)dealloc;
-(void)fieldDetectSession:(id)arg0 didEnterFieldWithNotification:(id)arg1 ;
-(void)fieldDetectSessionDidEndUnexpectedly:(id)arg0 ;
-(void)fieldDetectSessionDidExitField:(id)arg0 ;
-(void)loyaltyAndPaymentSession:(id)arg0 didEndTransaction:(id)arg1 ;
-(void)loyaltyAndPaymentSession:(id)arg0 didPerformValueAddedServiceTransactions:(id)arg1 ;
-(void)loyaltyAndPaymentSessionDidEndUnexpectedly:(id)arg0 ;
-(void)registerObserver:(id)arg0 ;
-(void)requestPersistentFieldDetectionEnabled:(BOOL)arg0 withReason:(NSUInteger)arg1 ;
-(void)session:(id)arg0 didEndTransaction:(id)arg1 ;
-(void)sessionDidEndUnexpectedly:(id)arg0 ;
-(void)setPersistentFieldDetectionEnabled:(BOOL)arg0 ;
-(void)unregisterObserver:(id)arg0 ;
-(void)updateRadioState;


@end


#endif