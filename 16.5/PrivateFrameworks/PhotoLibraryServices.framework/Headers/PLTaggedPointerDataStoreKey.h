// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLTAGGEDPOINTERDATASTOREKEY_H
#define PLTAGGEDPOINTERDATASTOREKEY_H

@class PLTaggedPointer, NSString;
@protocol PLResourceDataStoreKey, PLTableThumbResourceKey, PLChooserKeyProperties;



@interface PLTaggedPointerDataStoreKey : PLTaggedPointer <PLResourceDataStoreKey, PLTableThumbResourceKey, PLChooserKeyProperties>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)keyWithKeyStruct:(*void)arg0 keyLength:(NSUInteger)arg1 forStoreClassID:(unsigned short)arg2 inLibraryWithID:(id)arg3 ;
-(BOOL)isDerivative;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToKey:(id)arg0 ;
-(BOOL)representsSquareResource;
-(id)_heapAllocatedRepresentationInLibraryWithID:(id)arg0 ;
-(id)descriptionForAssetID:(id)arg0 ;
-(id)fileURLForAssetID:(id)arg0 ;
-(id)initWithKeyStruct:(*void)arg0 ;
-(id)keyData;
-(id)uniformTypeIdentifier;
-(id)validateForAssetID:(id)arg0 resourceIdentity:(id)arg1 ;
-(unsigned int)recipeIDForAssetID:(id)arg0 ;
-(unsigned int)resourceType;
-(unsigned int)resourceVersion;
-(void)tableType:(*unsigned int)arg0 index:(*int)arg1 ;


@end


#endif