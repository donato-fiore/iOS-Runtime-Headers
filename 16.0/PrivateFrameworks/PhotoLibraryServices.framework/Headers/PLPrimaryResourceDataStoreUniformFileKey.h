// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPRIMARYRESOURCEDATASTOREUNIFORMFILEKEY_H
#define PLPRIMARYRESOURCEDATASTOREUNIFORMFILEKEY_H

@protocol PLChooserKeyProperties;


#import "PLPrimaryResourceDataStoreKey.h"

@interface PLPrimaryResourceDataStoreUniformFileKey : PLPrimaryResourceDataStoreKey <PLChooserKeyProperties>



@property (nonatomic) PLPrimaryDataStore_UniformFileStrategy_KeyStruct_V1 keyStruct; // ivar: _keyStruct


+(id)_fileURLFromKeyStruct:(struct PLPrimaryDataStore_UniformFileStrategy_KeyStruct_V1 *)arg0 assetID:(id)arg1 ;
+(id)fileURLForPayloadKeyData:(NSUInteger)arg0 assetID:(id)arg1 ;
+(unsigned short)keyLengthWithDataPreview:(unsigned char)arg0 ;
-(BOOL)isDerivative;
-(id)fileURLForAssetID:(id)arg0 ;
-(id)initFromExistingLocationOfExternalResource:(id)arg0 asset:(id)arg1 ;
-(id)initWithFilePath:(id)arg0 resourceVersion:(unsigned int)arg1 resourceType:(unsigned int)arg2 recipeID:(unsigned int)arg3 bundleScope:(unsigned short)arg4 pathManager:(id)arg5 ;
-(id)initWithKeyStruct:(*void)arg0 ;
-(id)keyData;
-(id)uniformTypeIdentifier;
-(id)validateForAssetID:(id)arg0 resourceIdentity:(id)arg1 ;
-(unsigned int)recipeIDForAssetID:(id)arg0 ;
-(unsigned int)resourceType;
-(unsigned int)resourceVersion;


@end


#endif