// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKORDERMEDIAOBJECT_H
#define CKORDERMEDIAOBJECT_H

@class FKOrderMessagesPreviewMetadata, NSURL, LPWebLinkPresentationProperties, NSString;
@protocol CKMediaObjectMetadataPreview;


#import "CKMediaObject.h"

@interface CKOrderMediaObject : CKMediaObject <CKMediaObjectMetadataPreview>



@property (retain, nonatomic) FKOrderMessagesPreviewMetadata *metadata; // ivar: _metadata
@property (retain, nonatomic) NSURL *overrideFileURL; // ivar: _overrideFileURL
@property (retain, nonatomic) NSURL *overrideMetadataProperties; // ivar: _overrideMetadataProperties
@property (retain, nonatomic) LPWebLinkPresentationProperties *presentationProperties; // ivar: _presentationProperties
@property (readonly, copy, nonatomic) NSString *previewMetadataFilenameExtension;
@property (readonly, nonatomic) BOOL supportsPreviewMetadata;


+(BOOL)isPreviewable;
+(BOOL)shouldUseTranscoderGeneratedPreviewSize;
+(id)UTITypes;
+(id)_modifyColor:(id)arg0 lighten:(BOOL)arg1 ;
+(id)_paddedImage:(id)arg0 imageType:(unsigned char)arg1 bubbleWidth:(CGFloat)arg2 ;
+(id)fallbackFilenamePrefix;
+(void)_setTextForPresentationRow:(id)arg0 representation:(id)arg1 ;
+(void)_updatePresentationPropertiesForRow:(id)arg0 representation:(id)arg1 ;
-(BOOL)generatePreviewOutOfProcess;
-(BOOL)isSupported;
-(BOOL)shouldBeQuickLooked;
-(BOOL)shouldShowDisclosure;
-(BOOL)shouldShowViewer;
-(BOOL)writePreviewMetadata:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(Class)balloonViewClassForWidth:(CGFloat)arg0 orientation:(char)arg1 ;
-(Class)previewBalloonViewClass;
-(id)_initWithOverrideFileURL:(id)arg0 ;
-(id)attachmentSummary:(NSUInteger)arg0 ;
-(id)generatePreviewMetadata;
-(id)generateThumbnailFillToSize:(struct CGSize )arg0 contentAlignmentInsets:(struct UIEdgeInsets )arg1 ;
-(id)generateThumbnailForWidth:(CGFloat)arg0 orientation:(char)arg1 ;
-(id)metricsCollectorMediaType;
-(id)presentationPropertiesForWidth:(CGFloat)arg0 ;
-(id)presentationPropertiesForWidth:(CGFloat)arg0 orientation:(char)arg1 ;
-(id)previewForWidth:(CGFloat)arg0 orientation:(char)arg1 ;
-(id)previewItemTitle;
-(id)previewMetadata;
-(id)previewMetadataWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
-(int)mediaType;


@end


#endif