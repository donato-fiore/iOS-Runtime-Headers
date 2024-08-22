// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBITEM_H
#define PBITEM_H

@class NSUUID, NSArray, NSString, NSMutableDictionary, NSDictionary, NSData, NSURL, NSMutableOrderedSet;
@protocol NSSecureCoding, PBItemRepresentationDataTransferDelegate, PBItemDataTransferDelegate, NSObject;

#import <Foundation/Foundation.h>


@interface PBItem : NSObject <NSSecureCoding, PBItemRepresentationDataTransferDelegate>



@property (readonly, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy, nonatomic) NSArray *availableTypes;
@property (weak, nonatomic) NSObject<PBItemDataTransferDelegate> *dataTransferDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *itemQueue_dataAvailabilityByType; // ivar: _itemQueue_dataAvailabilityByType
@property (weak, nonatomic) NSObject<PBItemDataTransferDelegate> *itemQueue_dataTransferDelegate; // ivar: _itemQueue_dataTransferDelegate
@property (nonatomic) BOOL itemQueue_isStoredOnServer; // ivar: _itemQueue_isStoredOnServer
@property (retain, nonatomic) NSObject<NSObject> *itemQueue_localObject; // ivar: _itemQueue_localObject
@property (retain, nonatomic) id *itemQueue_localUserInfo; // ivar: _itemQueue_localUserInfo
@property (copy, nonatomic) NSDictionary *itemQueue_metadata; // ivar: _itemQueue_metadata
@property (retain, nonatomic) NSMutableDictionary *itemQueue_patternDetections; // ivar: _itemQueue_patternDetections
@property (retain, nonatomic) NSMutableDictionary *itemQueue_preferredRepresentationByType; // ivar: _itemQueue_preferredRepresentationByType
@property (retain, nonatomic) NSData *itemQueue_primaryData; // ivar: _itemQueue_primaryData
@property (retain, nonatomic) NSURL *itemQueue_primaryFileURL; // ivar: _itemQueue_primaryFileURL
@property (retain, nonatomic) NSDictionary *itemQueue_privateMetadata; // ivar: _itemQueue_privateMetadata
@property (retain, nonatomic) NSMutableDictionary *itemQueue_representationByType; // ivar: _itemQueue_representationByType
@property (retain, nonatomic) NSMutableOrderedSet *itemQueue_typeOrder; // ivar: _itemQueue_typeOrder
@property (retain, nonatomic) NSMutableDictionary *itemQueue_visibilityByType; // ivar: _itemQueue_visibilityByType
@property (retain, nonatomic) id *localObject;
@property (retain, nonatomic) id *localUserInfo;
@property (copy, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) NSDictionary *privateMetadata;
@property (readonly, nonatomic) NSArray *representations;
@property (readonly, copy, nonatomic) NSString *suggestedName;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)allowedClassesForSecureCoding;
+(id)item;
+(id)itemWithContentsOfFileURL:(id)arg0 type:(id)arg1 outError:(*id)arg2 ;
+(id)itemWithData:(id)arg0 type:(id)arg1 ;
+(id)itemWithObject:(id)arg0 ;
-(BOOL)_canInstantiateObjectOfClass:(Class)arg0 ;
-(BOOL)canInstantiateObjectOfClass:(Class)arg0 ;
-(BOOL)hasRepresentationConformingToType:(id)arg0 ;
-(BOOL)hasRepresentationOfType:(id)arg0 ;
-(BOOL)isDataAvailableImmediatelyForType:(id)arg0 ;
-(BOOL)itemQueue_canInstantiateObjectOfClass:(Class)arg0 ;
-(BOOL)itemQueue_hasRepresentationConformingToType:(id)arg0 ;
-(BOOL)itemQueue_hasRepresentationOfType:(id)arg0 ;
-(BOOL)uikit_canInstantiateObjectOfClass:(Class)arg0 ;
-(NSInteger)visibilityForType:(id)arg0 ;
-(NSUInteger)preferredRepresentationForType:(id)arg0 ;
-(id)_itemQueue_copyWithDoNothingRepresentations;
-(id)_loadObjectOfClass:(Class)arg0 context:(id)arg1 completionBlock:(id)arg2 ;
-(id)_representationForType:(id)arg0 ;
-(id)availableTypesWithPreferredRepresentation:(NSUInteger)arg0 ;
-(id)copyWithDoNothingRepresentations;
-(id)enumeratePatternDetectionsForPatterns:(id)arg0 usingBlock:(id)arg1 ;
-(id)init;
-(id)initDoNothing;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentsOfFileURL:(id)arg0 type:(id)arg1 outError:(*id)arg2 ;
-(id)initWithData:(id)arg0 type:(id)arg1 ;
-(id)initWithNSItemProvider:(id)arg0 ;
-(id)initWithObject:(id)arg0 ;
-(id)itemQueue_representationForType:(id)arg0 ;
-(id)loadObjectOfClass:(Class)arg0 completionBlock:(id)arg1 ;
-(id)representationConformingToType:(id)arg0 ;
-(id)uikit_loadObjectOfClass:(Class)arg0 completionBlock:(id)arg1 ;
-(id)uikit_loadObjectOfClass:(Class)arg0 context:(id)arg1 completionBlock:(id)arg2 ;
-(id)uikit_v2_loadObjectOfClass:(Class)arg0 completionBlock:(id)arg1 ;
-(void)_addRepresentationType:(id)arg0 loaderBlock:(id)arg1 ;
-(void)_commonInitGenerateUUID:(BOOL)arg0 ;
-(void)_loadRepresentationAsType:(id)arg0 context:(id)arg1 completionBlock:(id)arg2 ;
-(void)addDataRepresentationType:(id)arg0 loader:(id)arg1 ;
-(void)addFileCopyRepresentationType:(id)arg0 loader:(id)arg1 ;
-(void)addOpenInPlaceRepresentationType:(id)arg0 loader:(id)arg1 ;
-(void)addPatternDetections:(id)arg0 ;
-(void)addRepresentation:(id)arg0 ;
-(void)addRepresentationType:(id)arg0 loader:(id)arg1 ;
-(void)addRepresentationType:(id)arg0 loaderBlock:(id)arg1 ;
-(void)addRepresentationType:(id)arg0 preferredRepresentation:(NSUInteger)arg1 loader:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)itemQueue_removeRepresentationOfType:(id)arg0 ;
-(void)itemQueue_setItemRepresentation:(id)arg0 ;
-(void)itemRepresentation:(id)arg0 beganDataTransferWithProgress:(id)arg1 ;
-(void)itemRepresentationFinishedDataTransfer:(id)arg0 ;
-(void)loadRepresentationAsType:(id)arg0 completionBlock:(id)arg1 ;
-(void)removeRepresentationOfType:(id)arg0 ;
-(void)uikit_addRepresentationType:(id)arg0 loaderBlock:(id)arg1 ;
-(void)uikit_loadRepresentationAsType:(id)arg0 completionBlock:(id)arg1 ;
-(void)uikit_loadRepresentationAsType:(id)arg0 context:(id)arg1 completionBlock:(id)arg2 ;
-(void)uikit_v2_loadRepresentationAsType:(id)arg0 completionBlock:(id)arg1 ;
-(void)v2_addFileCopyRepresentationType:(id)arg0 loader:(id)arg1 ;
-(void)v2_addRepresentationType:(id)arg0 preferredRepresentation:(NSUInteger)arg1 loader:(id)arg2 ;


@end


#endif