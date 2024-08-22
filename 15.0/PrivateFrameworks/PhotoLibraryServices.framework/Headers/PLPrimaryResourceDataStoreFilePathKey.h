// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLPRIMARYRESOURCEDATASTOREFILEPATHKEY_H
#define PLPRIMARYRESOURCEDATASTOREFILEPATHKEY_H

@class NSString;


#import "PLPrimaryResourceDataStoreKey.h"

@interface PLPrimaryResourceDataStoreFilePathKey : PLPrimaryResourceDataStoreKey

@property (copy, nonatomic) NSString *filePathSuffix; // ivar: _filePathSuffix
@property (nonatomic) PLPrimaryDataStoreKeyStrategy_FilePath_KeyStruct_V1 keyStruct; // ivar: _keyStruct


+(id)fileURLForPayloadKeyData:(NSUInteger)arg0 assetID:(id)arg1 ;
+(unsigned short)keyLengthWithDataPreview:(unsigned char)arg0 ;
-(id)descriptionForAssetID:(id)arg0 ;
-(id)extension;
-(id)fileURLForAssetID:(id)arg0 ;
-(id)initFromExistingLocationOfExternalResource:(id)arg0 asset:(id)arg1 ;
-(id)initWithFilePath:(id)arg0 andLibraryID:(id)arg1 ;
-(id)initWithKeyStruct:(*void)arg0 ;
-(id)keyData;
-(id)uniformTypeIdentifier;
-(id)validateForAssetID:(id)arg0 resourceIdentity:(id)arg1 ;


@end


#endif