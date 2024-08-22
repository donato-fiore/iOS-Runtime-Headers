// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLITEMPROVIDERFETCHER_H
#define QLITEMPROVIDERFETCHER_H

@class NSString, NSNumber, NSItemProvider;
@protocol QLPreviewItemURLProviderDownloadTracker, QLPreviewItemURLProvider;


#import "QLItemFetcher.h"

@interface QLItemProviderFetcher : QLItemFetcher <QLPreviewItemURLProviderDownloadTracker, QLPreviewItemURLProvider>

 {
    NSString *_contentType;
    NSNumber *_fileSize;
    id *_updateBlock;
    id *_completionBlock;
    NSInteger _fileExtensionHandle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSItemProvider *itemProvider; // ivar: _itemProvider
@property (retain, nonatomic) id *lastContent; // ivar: _lastContent
@property (readonly) Class superclass;
@property (retain) NSObject<QLPreviewItemURLProvider> *urlProvider; // ivar: _urlProvider


+(BOOL)supportsSecureCoding;
-(BOOL)canBeCanceled;
-(BOOL)isLongFetchOperation;
-(id)fetchedContent;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentType:(id)arg0 fileSize:(id)arg1 ;
-(id)itemSize;
-(id)newItemProvider;
-(id)shareableItem;
-(void)_updateCompletionBlockWithAllowedOutputClasses:(id)arg0 URL:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
// -(void)fetchContentWithAllowedOutputClasses:(id)arg0 inQueue:(id)arg1 updateBlock:(id)arg2 completionBlock:(unk)arg3  ;
-(void)getURLWithDownloadTracker:(id)arg0 completionHandler:(id)arg1 ;
-(void)updatedURLWithProgress:(CGFloat)arg0 ;


@end


#endif