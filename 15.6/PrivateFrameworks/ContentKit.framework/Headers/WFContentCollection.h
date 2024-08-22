// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCONTENTCOLLECTION_H
#define WFCONTENTCOLLECTION_H

@class NSLock, NSArray, NSMutableArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "WFContentAttributionSet.h"
#import "WFCoercionOptions.h"

@interface WFContentCollection : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) WFContentAttributionSet *attributionSet;
@property (retain, nonatomic) WFCoercionOptions *defaultCoercionOptions; // ivar: _defaultCoercionOptions
@property (retain, nonatomic) NSLock *itemWriteLock; // ivar: _itemWriteLock
@property (readonly, nonatomic) NSArray *items;
@property (retain, nonatomic) NSMutableArray *mutableItems; // ivar: _mutableItems
@property (readonly, nonatomic) NSInteger numberOfItems;


+(BOOL)supportsSecureCoding;
+(id)collectionWithItems:(id)arg0 ;
+(void)generateCollectionFromDragItems:(id)arg0 allowedItemClasses:(id)arg1 completionHandler:(id)arg2 ;
+(void)generateCollectionFromPasteboard:(id)arg0 completionHandler:(id)arg1 ;
+(void)getContentItemsForPasteboardItems:(id)arg0 resultBlock:(id)arg1 ;
-(BOOL)canPerformCoercion:(id)arg0 ;
-(BOOL)isCoercibleToItemClass:(Class)arg0 ;
-(BOOL)isCoercibleToItemClasses:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
// -(id)collectionByFilteringItemsWithBlock:(id)arg0 excludedItems:(unk)arg1  ;
-(id)collectionByFilteringToItemClass:(Class)arg0 excludedItems:(*id)arg1 ;
-(id)collectionByMergingAttributionSet:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)effectiveCoercionOptionsForRequest:(id)arg0 ;
-(id)extensionItems;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDefaultCoercionOptions:(id)arg0 ;
-(id)initWithItems:(id)arg0 defaultCoercionOptions:(id)arg1 ;
-(id)minimalExtensionItems;
-(void)addFile:(id)arg0 ;
-(void)addFile:(id)arg0 origin:(id)arg1 disclosureLevel:(NSUInteger)arg2 ;
-(void)addFileWithOriginAttribution:(id)arg0 ;
-(void)addItem:(id)arg0 ;
-(void)addItems:(id)arg0 ;
-(void)addObject:(id)arg0 ;
-(void)addObject:(id)arg0 named:(id)arg1 ;
-(void)copyToPasteboard:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
// -(void)enumerateFileRepresentations:(id)arg0 forType:(unk)arg1 completionHandler:(id)arg2  ;
// -(void)enumerateObjectRepresentations:(id)arg0 forClass:(unk)arg1 completionHandler:(Class)arg2  ;
-(void)generateCollectionByCoercingToItemClass:(Class)arg0 completionHandler:(id)arg1 ;
-(void)generateCollectionByCoercingToItemClasses:(id)arg0 completionHandler:(id)arg1 ;
-(void)generateCollectionByCoercingToItemClasses:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)generateCollectionByEvaluatingQuery:(id)arg0 forContentItemClass:(Class)arg1 completionHandler:(id)arg2 ;
// -(void)getFileRepresentation:(id)arg0 forType:(unk)arg1  ;
// -(void)getFileRepresentationAndAttributionSet:(id)arg0 forType:(unk)arg1  ;
// -(void)getFileRepresentations:(id)arg0 forType:(unk)arg1  ;
// -(void)getFileRepresentations:(id)arg0 options:(unk)arg1 forType:(id)arg2  ;
// -(void)getObjectRepresentation:(id)arg0 forClass:(unk)arg1  ;
// -(void)getObjectRepresentationAndAttributionSet:(id)arg0 forClass:(unk)arg1  ;
// -(void)getObjectRepresentations:(id)arg0 forClass:(unk)arg1  ;
// -(void)getObjectRepresentations:(id)arg0 options:(unk)arg1 forClass:(id)arg2  ;
-(void)getStringRepresentation:(id)arg0 ;
-(void)getStringRepresentations:(id)arg0 ;
-(void)performCoercion:(id)arg0 ;
-(void)removeItem:(id)arg0 ;
// -(void)transformFileRepresentationsForType:(id)arg0 usingBlock:(id)arg1 completionHandler:(unk)arg2  ;
// -(void)transformFirstFileRepresentationForType:(id)arg0 usingBlock:(id)arg1 completionHandler:(unk)arg2  ;
// -(void)transformFirstObjectRepresentationForClass:(Class)arg0 usingBlock:(id)arg1 completionHandler:(unk)arg2  ;
// -(void)transformItemsAndFlattenUsingBlock:(id)arg0 completionHandler:(unk)arg1  ;
// -(void)transformItemsUsingBlock:(id)arg0 completionHandler:(unk)arg1  ;
// -(void)transformObjectRepresentationsForClass:(Class)arg0 usingBlock:(id)arg1 completionHandler:(unk)arg2  ;


@end


#endif