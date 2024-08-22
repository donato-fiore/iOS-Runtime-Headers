// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHIMAGEREQUESTRESOURCE_H
#define PHIMAGEREQUESTRESOURCE_H

@class PLPhotoLibrary, NSString, PLUniformTypeIdentifier;
@protocol PLResourceIdentity;

#import <Foundation/Foundation.h>


@interface PHImageRequestResource : NSObject <PLResourceIdentity>

 {
    PLPhotoLibrary *_photoLibrary;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int recipeID; // ivar: _recipeID
@property (readonly, nonatomic) unsigned int resourceType; // ivar: _resourceType
@property (readonly) Class superclass;
@property (readonly, nonatomic) PLUniformTypeIdentifier *uniformTypeIdentifier; // ivar: _uniformTypeIdentifier
@property (readonly, nonatomic) unsigned int version; // ivar: _version


+(id)dictionaryRepresentationFromResourceIdentity:(id)arg0 ;
+(id)imageRequestResourceForDataStoreKey:(id)arg0 store:(id)arg1 assetObjectID:(id)arg2 context:(id)arg3 ;
+(id)possibleClassesInDictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithResource:(id)arg0 ;
-(id)initWithResourceType:(unsigned int)arg0 version:(unsigned int)arg1 recipeID:(unsigned int)arg2 uti:(id)arg3 conformsToTypes:(NSInteger)arg4 ;


@end


#endif