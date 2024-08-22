// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKATTACHMENTITEM_H
#define CKATTACHMENTITEM_H

@class NSURL, NSDate, NSString;
@protocol QLPreviewItem;

#import <Foundation/Foundation.h>


@interface CKAttachmentItem : NSObject <QLPreviewItem>

 {
    CGSize _size;
    NSURL *_appendedBundleURL;
}


@property (retain, nonatomic) NSDate *createdDate; // ivar: _createdDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (copy, nonatomic) NSString *guid; // ivar: _guid
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *irisVideoPath; // ivar: _irisVideoPath
@property (nonatomic) BOOL isIrisAsset; // ivar: _isIrisAsset
@property (nonatomic) BOOL isSticker; // ivar: _isSticker
@property (readonly, nonatomic) NSString *previewItemTitle;
@property (readonly, nonatomic) NSURL *previewItemURL;
@property (retain, nonatomic) NSURL *previewURL; // ivar: _previewURL
@property (nonatomic) BOOL showDocumentIcon; // ivar: _showDocumentIcon
@property (readonly, nonatomic) CGSize size;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *transferGUID; // ivar: _transferGUID


+(NSUInteger)pxWidth;
+(id)UTITypes;
+(id)previewCache;
+(id)previewSizingQueue;
+(struct CGSize )defaultSize;
-(BOOL)canShareItem;
-(BOOL)isEqual:(id)arg0 ;
-(id)UTIType;
-(id)_getIrisBundleLocation;
-(id)_getIrisBundleURL;
-(id)_savedPreviewFromURL:(id)arg0 ;
-(id)cachedPreview;
-(id)calculateIrisVideoPath;
-(id)dragItem;
-(id)fileIcon;
-(id)getIrisVideoPath;
-(id)imageData;
-(id)initWithFileURL:(id)arg0 size:(struct CGSize )arg1 transferGUID:(id)arg2 guid:(id)arg3 createdDate:(id)arg4 ;
-(id)pasteboardItem;
-(id)previewURL:(BOOL)arg0 ;
-(id)uncachedPreviewURL;
-(void)_savePreview:(id)arg0 ;
-(void)generatePreviewWithCompletion:(id)arg0 ;
-(void)startDeferredSetup;


@end


#endif