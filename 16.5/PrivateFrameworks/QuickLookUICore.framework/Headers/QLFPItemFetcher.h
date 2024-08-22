// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLFPITEMFETCHER_H
#define QLFPITEMFETCHER_H

@class FPItem, QLURLHandler, FPItemCollection, NSString;
@protocol FPItemCollectionDelegate;


#import "QLUbiquitousItemFetcher.h"

@interface QLFPItemFetcher : QLUbiquitousItemFetcher <FPItemCollectionDelegate>

 {
    FPItem *_fpItem;
    QLURLHandler *_fetchedURLHandler;
    FPItemCollection *_itemCollection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isLongFetchOperation;
-(id)fileURL;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFPItem:(id)arg0 shouldZipPackageIfNeeded:(BOOL)arg1 ;
-(id)itemSize;
-(id)shareableItem;
-(void)_registerItemCollectionIfNeeded;
-(void)_unregisterItemCollectionIfNeeded;
-(void)_urlHandler:(id)arg0 ;
-(void)collection:(id)arg0 didDeleteItemsAtIndexPaths:(id)arg1 ;
-(void)collection:(id)arg0 didInsertItemsAtIndexPaths:(id)arg1 ;
-(void)collection:(id)arg0 didMoveItemsFromIndexPaths:(id)arg1 toIndexPaths:(id)arg2 ;
-(void)collection:(id)arg0 didPerformBatchUpdateWithReplayBlock:(id)arg1 ;
-(void)collection:(id)arg0 didUpdateItemsAtIndexPaths:(id)arg1 changes:(id)arg2 ;
-(void)collection:(id)arg0 didUpdateObservedItem:(id)arg1 ;
-(void)dataForCollectionShouldBeReloaded:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
// -(void)fetchContentWithAllowedOutputClasses:(id)arg0 inQueue:(id)arg1 updateBlock:(id)arg2 completionBlock:(unk)arg3  ;
-(void)prepareShareableItem:(id)arg0 ;


@end


#endif