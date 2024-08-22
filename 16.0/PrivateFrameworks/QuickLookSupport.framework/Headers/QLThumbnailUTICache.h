// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLTHUMBNAILUTICACHE_H
#define QLTHUMBNAILUTICACHE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface QLThumbnailUTICache : NSObject {
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
}


@property (retain, nonatomic) NSMutableDictionary *dataItemTypeCache; // ivar: _dataItemTypeCache
@property (retain, nonatomic) NSMutableDictionary *dataItemUseExtensionCache; // ivar: _dataItemUseExtensionCache
@property (retain, nonatomic) NSMutableDictionary *itemTypeCache; // ivar: _itemTypeCache
@property (retain, nonatomic) NSMutableDictionary *useExtensionCache; // ivar: _useExtensionCache


+(BOOL)contentType:(id)arg0 conformsToContentTypeInArray:(id)arg1 ;
+(BOOL)contentTypeIdentifier:(id)arg0 conformsToContentTypeIdentifierInArray:(id)arg1 ;
+(BOOL)contentTypeIsIWorkType:(id)arg0 ;
+(id)_iWorkUTIs;
+(id)iWorkTypes;
+(id)sharedCache;
-(BOOL)_contentTypeShouldBeHandledByAppleExtension:(id)arg0 ;
-(BOOL)requestedBadgeType:(NSUInteger)arg0 isValidForContentType:(id)arg1 ;
-(BOOL)useExtensionForContentType:(id)arg0 isDataItem:(BOOL)arg1 ;
-(BOOL)useExtensionForItem:(id)arg0 ;
-(BOOL)useExtensionUncachedForContentType:(id)arg0 isDataItem:(BOOL)arg1 ;
-(NSUInteger)_itemTypeByUTIResolutionForContentType:(id)arg0 isDataItem:(BOOL)arg1 ;
-(NSUInteger)itemTypeForContentType:(id)arg0 ;
-(NSUInteger)itemTypeForContentType:(id)arg0 isDataItem:(BOOL)arg1 ;
-(NSUInteger)itemTypeForItem:(id)arg0 ;
-(id)init;


@end


#endif