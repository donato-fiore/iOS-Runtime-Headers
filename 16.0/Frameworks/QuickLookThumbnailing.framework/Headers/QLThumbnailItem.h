// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLTHUMBNAILITEM_H
#define QLTHUMBNAILITEM_H

@class NSString, UTType, NSData, NSURL, FPSandboxingURLWrapper;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface QLThumbnailItem : NSObject <NSSecureCoding>

 {
    NSString *_fileExtensionToken;
    NSInteger _fileExtensionHandle;
}


@property (retain) UTType *computedContentType; // ivar: _computedContentType
@property (copy) NSString *computedContentTypeIdentifier; // ivar: _computedContentTypeIdentifier
@property (readonly) NSData *data; // ivar: _data
@property NSUInteger downloadStatus; // ivar: _downloadStatus
@property BOOL needsAccessToExternalResources; // ivar: _needsAccessToExternalResources
@property (readonly, nonatomic) UTType *overriddenContentType; // ivar: _overriddenContentType
@property (retain, nonatomic) NSString *overriddenContentTypeIdentifier; // ivar: _overriddenContentTypeIdentifier
@property (readonly) NSURL *url; // ivar: _url
@property (readonly) FPSandboxingURLWrapper *urlWrapperForExtension; // ivar: _urlWrapperForExtension
@property (readonly) FPSandboxingURLWrapper *urlWrapperForParentDirectory; // ivar: _urlWrapperForParentDirectory


+(BOOL)supportsSecureCoding;
-(BOOL)needsDownload;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 contentType:(id)arg1 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 URLWrapperForExtension:(id)arg1 ;
-(id)initWithURL:(id)arg0 URLWrapperForExtension:(id)arg1 URLWrapperForParentDirectory:(id)arg2 ;
-(void)consumeFileExtension;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)issueFileExtension;


@end


#endif