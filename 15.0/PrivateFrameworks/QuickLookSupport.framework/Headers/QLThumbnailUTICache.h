// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLTHUMBNAILUTICACHE_H
#define QLTHUMBNAILUTICACHE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface QLThumbnailUTICache : NSObject {
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
}


@property (retain, nonatomic) NSMutableDictionary *dataItemTypeCache; // ivar: _dataItemTypeCache
@property (retain) NSMutableDictionary *itemTypeCache; // ivar: _itemTypeCache


+(id)_iWorkUTIs;
+(id)sharedCache;
-(BOOL)_contentType:(id)arg0 isEqualToContentTypeInArray:(id)arg1 ;
-(BOOL)_contentTypeIsIWorkType:(id)arg0 ;
-(BOOL)_contentTypeShouldBeHandledByAppleExtension:(id)arg0 ;
-(BOOL)requestedBadgeType:(NSUInteger)arg0 isValidForContentType:(id)arg1 ;
-(NSUInteger)_itemTypeByUTIResolutionForContentType:(id)arg0 isDataItem:(BOOL)arg1 ;
-(NSUInteger)itemTypeForContentType:(id)arg0 ;
-(NSUInteger)itemTypeForContentType:(id)arg0 isDataItem:(BOOL)arg1 ;
-(NSUInteger)itemTypeForItem:(id)arg0 ;
-(id)init;


@end


#endif