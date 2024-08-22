// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSITEMPROVIDER_H
#define NSITEMPROVIDER_H

@class NSMutableDictionary, NSArray, NSMutableOrderedSet, NSDictionary;
@protocol NSSecureCoding, NSCopying, _NSItemProviderLoading, NSItemProviderDataTransferDelegate;

#import <Foundation/Foundation.h>

#import "NSUUID.h"
#import "NSString.h"

@interface NSItemProvider : NSObject <NSSecureCoding, NSCopying>

 {
    id *_previewImageHandler;
    NSMutableDictionary *_metadata;
}


@property (readonly) NSUUID *_UUID; // ivar: _UUID
@property (retain) NSObject<_NSItemProviderLoading> *_loadOperator; // ivar: _loadOperator
@property (retain, nonatomic) NSMutableDictionary *_preferredRepresentationByType; // ivar: _preferredRepresentationByType
@property (retain, nonatomic) NSMutableDictionary *_representationByType; // ivar: _representationByType
@property (readonly) NSArray *_representations; // ivar: _representations
@property (readonly, copy) NSString *_sanitizedSuggestedName; // ivar: _sanitizedSuggestedName
@property (retain, nonatomic) NSMutableOrderedSet *_typeOrder; // ivar: _typeOrder
@property (weak) NSObject<NSItemProviderDataTransferDelegate> *dataTransferDelegate; // ivar: _dataTransferDelegate
@property (copy) id *previewImageHandler;
@property (readonly, copy) NSArray *registeredTypeIdentifiers;
@property (copy) NSString *suggestedName; // ivar: _suggestedName
@property (copy) NSDictionary *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
-(BOOL)_hasRepresentationConformingToType:(id)arg0 ;
-(BOOL)_hasRepresentationOfType:(id)arg0 ;
-(BOOL)canLoadObjectOfClass:(Class)arg0 ;
-(BOOL)hasItemConformingToTypeIdentifier:(id)arg0 ;
-(BOOL)hasRepresentationConformingToTypeIdentifier:(id)arg0 fileOptions:(NSInteger)arg1 ;
-(id)_availableTypes;
-(id)_availableTypesWithFilterBlock:(id)arg0 ;
-(id)_loadObjectOfClass:(Class)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(id)_metadataValueForKey:(id)arg0 ;
-(id)_representationConformingToType:(id)arg0 ;
-(id)_representationForType:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentsOfURL:(id)arg0 ;
-(id)initWithItem:(id)arg0 typeIdentifier:(id)arg1 ;
-(id)initWithObject:(id)arg0 ;
-(id)loadDataRepresentationForTypeIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(id)loadFileRepresentationForTypeIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(id)loadInPlaceFileRepresentationForTypeIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(id)loadObjectOfClass:(Class)arg0 completionHandler:(id)arg1 ;
-(id)registeredTypeIdentifiersWithFileOptions:(NSInteger)arg0 ;
-(id)representations;
-(void)_addRepresentationType:(id)arg0 preferredRepresentation:(NSInteger)arg1 loader:(id)arg2 ;
-(void)_addRepresentationType:(id)arg0 preferredRepresentation:(NSInteger)arg1 visibility:(NSInteger)arg2 loader:(id)arg3 ;
-(void)_addRepresentationType_v2:(id)arg0 preferredRepresentation:(NSInteger)arg1 loader:(id)arg2 ;
-(void)_commonInitGenerateUUID:(BOOL)arg0 ;
-(void)_loadItemOfClass:(Class)arg0 forTypeIdentifier:(id)arg1 options:(id)arg2 coerceForCoding:(BOOL)arg3 completionHandler:(id)arg4 ;
// -(void)_loadItemOfClass:(Class)arg0 withLoadHandler:(id)arg1 options:(unk)arg2 coerceForCoding:(id)arg3 completionHandler:(BOOL)arg4  ;
-(void)_loadPreviewImageOfClass:(Class)arg0 options:(id)arg1 coerceForCoding:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)_setItemRepresentation:(id)arg0 ;
-(void)_setMetadataValue:(id)arg0 forKey:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadItemForTypeIdentifier:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)loadPreviewImageWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)registerDataRepresentationForTypeIdentifier:(id)arg0 visibility:(NSInteger)arg1 loadHandler:(id)arg2 ;
-(void)registerFileRepresentationForTypeIdentifier:(id)arg0 fileOptions:(NSInteger)arg1 visibility:(NSInteger)arg2 loadHandler:(id)arg3 ;
-(void)registerItemForTypeIdentifier:(id)arg0 loadHandler:(id)arg1 ;
-(void)registerObject:(id)arg0 visibility:(NSInteger)arg1 ;
-(void)registerObjectOfClass:(Class)arg0 visibility:(NSInteger)arg1 loadHandler:(id)arg2 ;


@end


#endif