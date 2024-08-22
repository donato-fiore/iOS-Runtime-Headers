// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DCDDEVICEMETADATA_H
#define DCDDEVICEMETADATA_H

@class DCContext;
@protocol DCCryptoProxy;

#import <Foundation/Foundation.h>


@interface DCDDeviceMetadata : NSObject {
    id<DCCryptoProxy> *_cryptoProxy;
    DCContext *_context;
}




-(id)initWithContext:(id)arg0 cryptoProxy:(id)arg1 ;
-(void)baaSignatureForData:(id)arg0 completion:(id)arg1 ;
-(void)baaSignaturesForData:(id)arg0 completion:(id)arg1 ;
-(void)generateEncryptedBlobWithCompletion:(id)arg0 ;


@end


#endif