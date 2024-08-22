// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPRIMARYRESOURCEDATASTOREREFERENCEFILEKEY_H
#define PLPRIMARYRESOURCEDATASTOREREFERENCEFILEKEY_H

@class NSURL;


#import "PLPrimaryResourceDataStoreKey.h"

@interface PLPrimaryResourceDataStoreReferenceFileKey : PLPrimaryResourceDataStoreKey {
    NSURL *_cachedUrl;
    PLPrimaryDataStore_ReferenceFileStrategy_KeyStruct_V1 _keyStruct;
}




+(id)fileURLForPayloadKeyData:(NSUInteger)arg0 assetID:(id)arg1 ;
+(unsigned short)keyLengthWithDataPreview:(unsigned char)arg0 ;
-(id)fileURLForAssetID:(id)arg0 ;
-(id)fileURLForAssetID:(id)arg0 inContext:(id)arg1 ;
-(id)initFromExistingLocationOfExternalResource:(id)arg0 asset:(id)arg1 ;
-(id)initWithKeyStruct:(*void)arg0 ;
-(id)initWithResourceType:(unsigned int)arg0 ;
-(id)keyData;
-(id)uniformTypeIdentifier;


@end


#endif