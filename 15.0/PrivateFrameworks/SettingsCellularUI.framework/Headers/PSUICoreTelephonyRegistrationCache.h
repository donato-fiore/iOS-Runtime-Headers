// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSUICORETELEPHONYREGISTRATIONCACHE_H
#define PSUICORETELEPHONYREGISTRATIONCACHE_H

@class CoreTelephonyClient, NSString, NSMutableDictionary;
@protocol CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PSUICoreTelephonyRegistrationCache : NSObject <CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain, nonatomic) CoreTelephonyClient *client; // ivar: _client
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSMutableDictionary *imsStatusSMSDict; // ivar: _imsStatusSMSDict
@property (retain) NSMutableDictionary *imsStatusVoiceDict; // ivar: _imsStatusVoiceDict
@property (retain) NSMutableDictionary *maxDataRateDict; // ivar: _maxDataRateDict
@property (retain) NSMutableDictionary *operatorNameDict; // ivar: _operatorNameDict
@property (retain) NSMutableDictionary *rejectCauseCodeDict; // ivar: _rejectCauseCodeDict
@property (readonly) Class superclass;
@property (retain) NSMutableDictionary *supportedDataRatesDict; // ivar: _supportedDataRatesDict


+(id)sharedInstance;
-(BOOL)IMSStatusSMS:(id)arg0 ;
-(BOOL)IMSStatusVoice:(id)arg0 ;
-(NSInteger)maxDataRate:(id)arg0 ;
-(id)init;
-(id)initPrivate;
-(id)localizedOperatorName:(id)arg0 ;
-(id)rejectCauseCode:(id)arg0 ;
-(id)supportedDataRates:(id)arg0 ;
-(void)clearCache;
-(void)fetchIMSStatus;
-(void)fetchLocalizedOperatorName;
-(void)fetchMaxDataRate;
-(void)fetchRejectCauseCode;
-(void)fetchSupportedDataRates;
-(void)handleDataUsageChanged;
-(void)imsRegistrationChanged:(id)arg0 info:(id)arg1 ;
-(void)operatorNameChanged:(id)arg0 name:(id)arg1 ;
-(void)preferredDataSimChanged:(id)arg0 ;
-(void)setMaxDataRate:(id)arg0 dataRate:(NSInteger)arg1 ;


@end


#endif