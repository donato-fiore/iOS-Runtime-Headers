// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPDFDOCUMENT_H
#define UIPDFDOCUMENT_H

@class NSString;
@protocol NSObject><UIPDFDocumentDelegate;

#import <Foundation/Foundation.h>

#import "UIPDFPageImageCache.h"

@interface UIPDFDocument : NSObject {
    NSUInteger _numberOfPages;
    CGFloat _cachedWidth;
    CGFloat _cachedHeight;
    NSString *_documentID;
    NSString *_documentName;
    UIPDFPageImageCache *_pageImageCache;
    NSUInteger _imageCacheCount;
    NSUInteger _imageCacheLookAhead;
    CGFloat _imageCacheResolution;
    os_unfair_lock_s _lock;
    os_unfair_lock_s _imageCacheLock;
    UIPDFPageImageCache *_thumbnailCache;
    os_unfair_lock_s _thumbnailLock;
}


@property (readonly) *CGPDFDocument CGDocument; // ivar: _cgDocument
@property (nonatomic) NSObject<NSObject><UIPDFDocumentDelegate> *delegate; // ivar: _delegate
@property (readonly) NSString *documentID;
@property (readonly) NSUInteger numberOfPages;
@property (retain) UIPDFPageImageCache *pageImageCache;
@property (retain) UIPDFPageImageCache *thumbnailCache;


+(id)documentNamed:(id)arg0 ;
-(BOOL)allowsCopying;
-(BOOL)copyDocumentTo:(id)arg0 ;
-(CGFloat)maxHeight;
-(CGFloat)maxWidth;
-(CGFloat)sumHeight;
-(CGFloat)sumWidth;
-(id)copyPageAtIndex:(NSUInteger)arg0 ;
-(id)initWithCGPDFDocument:(struct CGPDFDocument *)arg0 ;
-(id)initWithCGPDFDocumentLimitedMemory:(struct CGPDFDocument *)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)pageAtIndex:(NSUInteger)arg0 ;
-(struct CGPDFDocument *)copyCGPDFDocument;
-(void)dealloc;
-(void)purgePagesBefore:(NSUInteger)arg0 ;
-(void)setImageCacheCount:(NSUInteger)arg0 lookAhead:(NSUInteger)arg1 withResolution:(CGFloat)arg2 ;
-(void)updateWidthHeightCache;


@end


#endif