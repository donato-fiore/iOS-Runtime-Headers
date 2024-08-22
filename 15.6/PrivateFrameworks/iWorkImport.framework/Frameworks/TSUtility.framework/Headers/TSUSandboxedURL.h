// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSUSANDBOXEDURL_H
#define TSUSANDBOXEDURL_H

@class NSURL, NSString;
@protocol NSCopying, TSUURLWrapper;

#import <Foundation/Foundation.h>

#import "TSUSandboxedURL.h"

@interface TSUSandboxedURL : NSObject <NSCopying, TSUURLWrapper>

 {
    NSURL *_URL;
    BOOL _URLStartedAccessingSecurityScopedResource;
}


@property (readonly) NSURL *URL;
@property (readonly) NSURL *URLIfAvailable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL hasSandboxAccess;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isDocumentUploaded;
@property (readonly) BOOL isQuotaErrorPreventingUpload;
@property (readonly) BOOL isUbiquitous;
@property (readonly) TSUSandboxedURL *sandboxedURL;
@property (readonly) Class superclass;


+(id)sandboxedURLByResolvingBookmarkData:(id)arg0 options:(NSUInteger)arg1 relativeToURL:(id)arg2 bookmarkDataIsStale:(*BOOL)arg3 error:(*id)arg4 ;
+(id)sandboxedURLByResolvingBookmarkData:(id)arg0 relativeToURL:(id)arg1 bookmarkDataIsStale:(*BOOL)arg2 error:(*id)arg3 ;
+(void)sandboxedURLByResolvingBookmarkData:(id)arg0 usingQueue:(id)arg1 timeout:(CGFloat)arg2 options:(NSUInteger)arg3 relativeToURL:(id)arg4 completionQueue:(id)arg5 completionHandler:(id)arg6 ;
-(BOOL)hasUnresolvedConflicts;
-(BOOL)hasUnresolvedConflicts:(*BOOL)arg0 error:(*id)arg1 ;
-(BOOL)isDocumentUploaded:(*BOOL)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isShared:(*BOOL)arg0 logContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)isUbiquitous:(*BOOL)arg0 error:(*id)arg1 ;
-(BOOL)isUbiquitous:(*BOOL)arg0 promised:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)isUbiquitousPromised:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fileProviderBookmarkableStringAndReturnError:(*id)arg0 ;
-(id)init;
-(id)initByResolvingBookmarkData:(id)arg0 options:(NSUInteger)arg1 relativeToURL:(id)arg2 bookmarkDataIsStale:(*BOOL)arg3 error:(*id)arg4 ;
-(id)initByResolvingBookmarkData:(id)arg0 relativeToURL:(id)arg1 bookmarkDataIsStale:(*BOOL)arg2 error:(*id)arg3 ;
-(id)initWithURL:(id)arg0 ;
-(id)normalize;
-(void)dealloc;


@end


#endif