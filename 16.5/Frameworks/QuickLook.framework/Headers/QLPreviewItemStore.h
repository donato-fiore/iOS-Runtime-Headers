// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLPREVIEWITEMSTORE_H
#define QLPREVIEWITEMSTORE_H

@class NSPointerArray;
@protocol QLPreviewItemProvider, QLPreviewControllerDataSource, QLPreviewItemStoreDelegate;

#import <Foundation/Foundation.h>

#import "QLDataSource.h"

@interface QLPreviewItemStore : NSObject <QLPreviewItemProvider, QLPreviewControllerDataSource>

 {
    NSPointerArray *_cache;
    QLDataSource *_internalItemProvider;
}


@property (weak) NSObject<QLPreviewItemStoreDelegate> *delegate; // ivar: _delegate
@property (readonly) BOOL isArchive; // ivar: _isArchive
@property (weak, nonatomic) NSObject<QLPreviewItemProvider> *itemProvider; // ivar: _itemProvider
@property (readonly) NSUInteger numberOfItems;
@property (readonly) _NSRange possibleRange; // ivar: _possibleRange


-(BOOL)hasLoadedItemsMatching:(id)arg0 ;
-(NSInteger)indexOfPreviewItem:(id)arg0 ;
-(NSInteger)numberOfPreviewItemsInPreviewController:(id)arg0 ;
-(id)init;
-(id)initWithItemsOfDirectoryAtURL:(id)arg0 ;
-(id)initWithPreviewItems:(id)arg0 ;
-(id)loadedItemsMatching:(id)arg0 ;
-(id)previewController:(id)arg0 previewItemAtIndex:(NSInteger)arg1 ;
-(void)clearCache;
-(void)clearItems;
-(void)dealloc;
-(void)previewItemAtIndex:(NSUInteger)arg0 withCompletionHandler:(id)arg1 ;
-(void)reloadWithNumberOfPreviewItems:(NSUInteger)arg0 ;


@end


#endif