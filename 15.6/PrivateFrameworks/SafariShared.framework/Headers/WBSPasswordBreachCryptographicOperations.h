// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSPASSWORDBREACHCRYPTOGRAPHICOPERATIONS_H
#define WBSPASSWORDBREACHCRYPTOGRAPHICOPERATIONS_H


#import <Foundation/Foundation.h>

#import "WBSPasswordBreachConfiguration.h"

@interface WBSPasswordBreachCryptographicOperations : NSObject {
    WBSPasswordBreachConfiguration *_configuration;
    *cc_blinding_keys_ctx _blindingKeys;
}




+(BOOL)isValidScryptHashWorkFactor:(NSUInteger)arg0 blockSizeR:(NSUInteger)arg1 parallelismFactorP:(NSUInteger)arg2 ;
-(id)_blindPasswordHash:(id)arg0 ;
-(id)_bucketIdentifierWithBitCount:(NSUInteger)arg0 ofData:(id)arg1 ;
-(id)_encodePasswordForLowFrequencyBucket:(id)arg0 withHashSmoothingBits:(unsigned char)arg1 ;
-(id)_exportHashToCurve:(id)arg0 ;
-(id)_exportKeyFromCryptor:(struct _CCECCryptor *)arg0 ;
-(id)encodePasswordForHighFrequencyBucket:(id)arg0 ;
-(id)encodePasswordForLowFrequencyBucket:(id)arg0 ;
-(id)generateFakeEncodedPasswordForHighFrequencyBucket;
-(id)generateFakeEncodedPasswordForLowFrequencyBucket;
-(id)initWithConfiguration:(id)arg0 ;
-(id)unblindHash:(id)arg0 ;
-(struct _CCECCryptor *)_hashToCurve:(id)arg0 ;
-(void)dealloc;


@end


#endif