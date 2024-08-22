// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLSHAREDSTREAMSDATASTOREKEY_H
#define PLSHAREDSTREAMSDATASTOREKEY_H

@class NSString;
@protocol PLChooserKeyProperties;


#import "PLResourceDataStoreKey.h"

@interface PLSharedStreamsDataStoreKey : PLResourceDataStoreKey <PLChooserKeyProperties>

 {
    NSString *_relativePath;
    unsigned int _sharedStreamsResourceType;
}




+(NSUInteger)dataLengthFromPreviewByte:(unsigned char)arg0 ;
+(id)_keyDataWithRelativePath:(id)arg0 type:(unsigned int)arg1 ;
+(id)_relativeDCIMFilePathForPersonID:(id)arg0 albumID:(id)arg1 dcimDirectory:(id)arg2 fileName:(id)arg3 ;
+(id)_relativeFilePathForPersonID:(id)arg0 albumID:(id)arg1 fileName:(id)arg2 ;
+(id)_replacementPathExtensionForType:(unsigned int)arg0 ;
-(BOOL)isDerivative;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToKey:(id)arg0 ;
-(id)descriptionForAssetID:(id)arg0 ;
-(id)fileURLForAssetID:(id)arg0 ;
-(id)initWithAsset:(id)arg0 album:(id)arg1 type:(unsigned int)arg2 ;
-(id)initWithKeyStruct:(*void)arg0 ;
-(id)keyData;
-(id)uniformTypeIdentifier;
-(id)validateForAssetID:(id)arg0 resourceIdentity:(id)arg1 ;
-(unsigned int)recipeIDForAssetID:(id)arg0 ;
-(unsigned int)resourceType;
-(unsigned int)resourceVersion;


@end


#endif