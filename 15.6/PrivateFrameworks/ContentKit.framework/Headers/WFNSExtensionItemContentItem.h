// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFNSEXTENSIONITEMCONTENTITEM_H
#define WFNSEXTENSIONITEMCONTENTITEM_H

@class NSExtensionItem, NSArray;
@protocol WFContentItemClass;


#import "WFContentItem.h"

@interface WFNSExtensionItemContentItem : WFContentItem <WFContentItemClass>



@property (readonly, nonatomic) NSExtensionItem *extensionItem;
@property (retain, nonatomic) NSArray *extensionSubItems; // ivar: _extensionSubItems


+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg0 ;
+(id)contentCategories;
+(id)countDescription;
+(id)itemWithObject:(id)arg0 sourceAppBundleIdentifier:(id)arg1 ;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)typeDescription;
-(BOOL)cachesSupportedTypes;
-(BOOL)canGenerateRepresentationForType:(id)arg0 ;
-(BOOL)itemProvidersSupportType:(id)arg0 ;
-(id)generateObjectRepresentationsForClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)itemProviderItems;
-(id)itemProviders;
-(id)name;
-(void)coerceToItemClasses:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)preloadImportantItemsWithCompletionHandler:(id)arg0 ;


@end


#endif