// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHAPRIVATEFEDERATEDLEARNINGPACKAGER_H
#define PHAPRIVATEFEDERATEDLEARNINGPACKAGER_H

@class NSNumber, DESPFLEncryptor;

#import <Foundation/Foundation.h>


@interface PHAPrivateFederatedLearningPackager : NSObject

@property (readonly, nonatomic) NSNumber *clippingNorm; // ivar: _clippingNorm
@property (retain, nonatomic) DESPFLEncryptor *encryptor; // ivar: _encryptor
@property (readonly, nonatomic) NSNumber *normBinCount; // ivar: _normBinCount
@property (readonly, nonatomic) _NSRange privacyIdentifierLargeRange; // ivar: _privacyIdentifierLargeRange
@property (readonly, nonatomic) _NSRange privacyIdentifierRange; // ivar: _privacyIdentifierRange
@property (readonly, nonatomic) _NSRange privacyIdentifierSmallRange; // ivar: _privacyIdentifierSmallRange


-(BOOL)_addNoiseToPrePackagedResults:(*float)arg0 elementsCount:(id)arg1 shouldAddNoise:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)_callPFLPrivatizeCustomNorm:(*float)arg0 elementsCount:(id)arg1 clippingNorm:(id)arg2 normBinCount:(id)arg3 privacyIdentifier:(id)arg4 ;
-(BOOL)_generateError:(*id)arg0 errorCode:(NSInteger)arg1 errorMessage:(id)arg2 underlyingError:(id)arg3 ;
-(id)_encryptFlattenedTrainingResults:(*float)arg0 elementsCount:(NSInteger)arg1 withEncryptionKey:(id)arg2 shouldEncrypt:(BOOL)arg3 error:(*id)arg4 ;
-(id)_flattenTrainingResults:(id)arg0 ;
-(id)dataPackageFromTrainingResults:(id)arg0 withEncryptionKey:(id)arg1 shouldAddNoise:(BOOL)arg2 shouldEncrypt:(BOOL)arg3 error:(*id)arg4 ;
-(id)initWithClippingNorm:(id)arg0 normBinCount:(id)arg1 ;


@end


#endif