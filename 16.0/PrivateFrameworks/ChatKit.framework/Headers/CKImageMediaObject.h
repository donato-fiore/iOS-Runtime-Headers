// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKIMAGEMEDIAOBJECT_H
#define CKIMAGEMEDIAOBJECT_H

@class NSURL, NSString, PHLivePhoto, UIImage;


#import "CKMediaObject.h"
#import "CKImageData.h"

@interface CKImageMediaObject : CKMediaObject {
    CKImageData *_imageData;
    CKImageData *_backgroundImageData;
    NSURL *_appendedBundleURL;
    CGSize _originalSize;
    NSString *_irisVideoPath;
}


@property (readonly, nonatomic) CKImageData *imageData;
@property (readonly, nonatomic) BOOL isIrisAsset;
@property (readonly, nonatomic) BOOL isSticker; // ivar: _isSticker
@property (readonly, nonatomic) PHLivePhoto *livePhoto; // ivar: _livePhoto
@property (retain, nonatomic) UIImage *thumbnail; // ivar: _thumbnail


+(BOOL)isPreviewable;
+(Class)__ck_attachmentItemClass;
+(id)UTITypes;
+(id)fallbackFilenamePrefix;
-(BOOL)canExport;
-(BOOL)canShareItem;
-(BOOL)isPhotosCompatible;
-(BOOL)supportsUnknownSenderPreview;
-(BOOL)validatePreviewFormat;
-(id)attachmentSummary:(NSUInteger)arg0 ;
-(id)bbPreviewFillToSize:(struct CGSize )arg0 ;
-(id)calculateIrisVideoPath;
-(id)generateThumbnailFillToSize:(struct CGSize )arg0 contentAlignmentInsets:(struct UIEdgeInsets )arg1 ;
-(id)generateThumbnailForWidth:(CGFloat)arg0 orientation:(char)arg1 ;
-(id)getIrisVideoPath;
-(id)initWithTransfer:(id)arg0 context:(id)arg1 forceInlinePreview:(BOOL)arg2 ;
-(id)location;
-(id)metricsCollectorMediaType;
-(id)pasteboardItemProvider;
-(id)previewItemTitle;
-(id)previewItemURL;
-(id)rtfDocumentItemsWithFormatString:(id)arg0 selectedTextRange:(struct _NSRange )arg1 ;
-(int)mediaType;
-(struct CGSize )bbSize;
-(struct CGSize )originalSize;
-(void)legacyExport;


@end


#endif