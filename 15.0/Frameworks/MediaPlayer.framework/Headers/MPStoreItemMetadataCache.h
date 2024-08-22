// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSTOREITEMMETADATACACHE_H
#define MPSTOREITEMMETADATACACHE_H

@class CPLRUDictionary, NSMapTable;

#import <Foundation/Foundation.h>


@interface MPStoreItemMetadataCache : NSObject {
    CPLRUDictionary *_itemIdentifierToCompositeStoreItemMetadataLRUDictionary;
    NSMapTable *_itemIdentifierToCompositeStoreItemMetadataMapTable;
}


@property (readonly, nonatomic) NSInteger count;


-(id)addMetadata:(id)arg0 forItemIdentifier:(id)arg1 ;
-(id)initWithCacheSize:(NSInteger)arg0 ;
-(id)metadataForItemIdentifier:(id)arg0 ;
-(id)metadataForItemIdentifier:(id)arg0 ignoreExpiration:(BOOL)arg1 ;
-(void)removeExpiredMetadata;


@end


#endif