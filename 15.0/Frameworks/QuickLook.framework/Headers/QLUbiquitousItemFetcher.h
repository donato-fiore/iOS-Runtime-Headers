// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLUBIQUITOUSITEMFETCHER_H
#define QLUBIQUITOUSITEMFETCHER_H

@class FPSandboxingURLWrapper, NSFileCoordinator, NSMutableArray, NSNumber, QLURLHandler, NSURL;


#import "QLItemFetcher.h"

@interface QLUbiquitousItemFetcher : QLItemFetcher {
    FPSandboxingURLWrapper *_sandboxingWrapper;
    NSFileCoordinator *_fileCoordinator;
    NSMutableArray *_updateBlocks;
    id *_progressSubscriber;
    NSNumber *_sizeTotalUnitCount;
    QLURLHandler *_zipPackageUrlHandler;
    BOOL _shouldZipPackageIfNeeded;
    BOOL _isAccessingURL;
}


@property (readonly, nonatomic) NSURL *fileURL;


+(BOOL)supportsSecureCoding;
-(BOOL)canBeCanceled;
-(BOOL)isLongFetchOperation;
-(id)_createURLForPackageIfNeeded;
-(id)fetchedContent;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSandboxingURLWrapper:(id)arg0 shouldZipPackageIfNeeded:(BOOL)arg1 ;
-(id)initWithURL:(id)arg0 shouldZipPackageIfNeeded:(BOOL)arg1 ;
-(id)initWithZippingPackageIfNeeded:(BOOL)arg0 ;
-(id)itemSize;
-(id)newItemProvider;
-(id)shareableItem;
-(void)_deleteTempraryZipPackageFileIfNeeded;
-(void)_removeUpdateBlockIfNeeded:(id)arg0 ;
-(void)cancelFetch;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
// -(void)fetchContentWithAllowedOutputClasses:(id)arg0 inQueue:(id)arg1 updateBlock:(id)arg2 completionBlock:(unk)arg3  ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)subscribeToPreviewItemProgress;


@end


#endif