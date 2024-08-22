// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLRESOURCEDATASTOREKEY_H
#define PLRESOURCEDATASTOREKEY_H

@class NSString;
@protocol PLResourceDataStoreKey;

#import <Foundation/Foundation.h>


@interface PLResourceDataStoreKey : NSObject <PLResourceDataStoreKey>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)refreshSandboxExtensionForURL:(id)arg0 assetID:(id)arg1 error:(*id)arg2 ;
+(BOOL)refreshSandboxExtensionForURL:(id)arg0 libraryID:(id)arg1 assetUUID:(id)arg2 error:(*id)arg3 ;
-(BOOL)isEqualToKey:(id)arg0 ;
-(id)descriptionForAssetID:(id)arg0 ;
-(id)fileURLForAssetID:(id)arg0 ;
-(id)initWithKeyStruct:(*void)arg0 ;
-(id)keyData;
-(id)uniformTypeIdentifier;
-(id)validateForAssetID:(id)arg0 resourceIdentity:(id)arg1 ;


@end


#endif