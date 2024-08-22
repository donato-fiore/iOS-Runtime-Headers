// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDFDONATIONFEEDBACKSTORE_H
#define CDFDONATIONFEEDBACKSTORE_H

@class NSUbiquitousKeyValueStore, NSMutableSet, NSNumber, NSData;

#import <Foundation/Foundation.h>


@interface CDFDonationFeedbackStore : NSObject {
    NSUbiquitousKeyValueStore *_kvs;
    NSMutableSet *_hashes;
    NSNumber *_resetGeneration;
    NSNumber *_resetTimestamp;
    NSData *_userSalt;
}




+(id)log_t;
-(BOOL)canHashDonation:(id)arg0 ;
-(BOOL)donatedValueHasBeenConfirmedOrRejected:(id)arg0 contactIdentifier:(id)arg1 ;
-(id)_hashableStringsForDonation:(id)arg0 ;
-(id)_hashableStringsForDonation:(id)arg0 contactIdentifier:(id)arg1 ;
-(id)_hashesForDonation:(id)arg0 contactIdentifier:(id)arg1 ;
-(id)_loadHashesForKey:(id)arg0 ;
-(id)_loadResetInfo;
-(id)_loadSalt;
-(id)_randomDataOfLength:(NSUInteger)arg0 ;
-(id)_sha256BytesForStrings:(id)arg0 salt:(id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithKeyValueStore:(id)arg0 ;
-(void)_confirmOrRejectDonatedValues:(id)arg0 contactIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)_handleHashesChangedNotification:(id)arg0 ;
-(void)_hashStrings:(id)arg0 salt:(id)arg1 digest:(char *)arg2 ;
-(void)_saveHashes:(id)arg0 key:(id)arg1 ;
-(void)_saveResetInfo;
-(void)confirmDonatedValues:(id)arg0 contactIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)rejectDonatedValues:(id)arg0 contactIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)reset;
-(void)synchronize;


@end


#endif