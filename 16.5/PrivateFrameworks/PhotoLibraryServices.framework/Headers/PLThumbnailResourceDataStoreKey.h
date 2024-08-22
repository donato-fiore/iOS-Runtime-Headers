// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLTHUMBNAILRESOURCEDATASTOREKEY_H
#define PLTHUMBNAILRESOURCEDATASTOREKEY_H

@class NSString;
@protocol PLResourceDataStoreKey, PLTableThumbResourceKey;

#import <Foundation/Foundation.h>


@interface PLThumbnailResourceDataStoreKey : NSObject <PLResourceDataStoreKey, PLTableThumbResourceKey>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int index;
@property (nonatomic) PLThumbnailDataStoreKeyStruct_V1 keyStruct; // ivar: _keyStruct
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned int tableType;


+(BOOL)representsSquareResourceForPayloadKeyData:(NSUInteger)arg0 ;
+(id)fileURLForPayloadKeyData:(NSUInteger)arg0 assetID:(id)arg1 ;
+(unsigned int)recipeIDForTableType:(unsigned int)arg0 inStore:(id)arg1 ;
-(BOOL)isDerivative;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToKey:(id)arg0 ;
-(BOOL)representsSquareResource;
-(id)descriptionForAssetID:(id)arg0 ;
-(id)fileURLForAssetID:(id)arg0 ;
-(id)initWithKeyStruct:(*void)arg0 ;
-(id)keyData;
-(id)uniformTypeIdentifier;
-(id)validateForAssetID:(id)arg0 resourceIdentity:(id)arg1 ;
-(unsigned int)resourceType;
-(unsigned int)resourceVersion;
-(void)tableType:(*unsigned int)arg0 index:(*int)arg1 ;


@end


#endif