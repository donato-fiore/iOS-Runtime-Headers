// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPRIMARYRESOURCEDATASTOREKEY_H
#define PLPRIMARYRESOURCEDATASTOREKEY_H

@class NSString;
@protocol PLTaggedPointerDataStoreKey;


#import "PLResourceDataStoreKey.h"

@interface PLPrimaryResourceDataStoreKey : PLResourceDataStoreKey <PLTaggedPointerDataStoreKey>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)fileURLForPayloadKeyData:(NSUInteger)arg0 assetID:(id)arg1 ;
+(unsigned int)strategyFromExternalResource:(id)arg0 asset:(id)arg1 ;
+(unsigned short)keyLengthWithDataPreview:(unsigned char)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToKey:(id)arg0 ;
-(id)_init;
-(id)_initFromExistingLocationOfExternalResource:(id)arg0 asset:(id)arg1 ;
-(id)_initWithKeyStruct:(*void)arg0 ;
-(id)descriptionForAssetID:(id)arg0 ;
-(id)fileURLForAssetID:(id)arg0 ;
-(id)initFromExistingLocationOfExternalResource:(id)arg0 asset:(id)arg1 ;
-(id)initWithKeyStruct:(*void)arg0 ;
-(id)keyData;
-(id)uniformTypeIdentifier;
-(id)validateForAssetID:(id)arg0 resourceIdentity:(id)arg1 ;


@end


#endif