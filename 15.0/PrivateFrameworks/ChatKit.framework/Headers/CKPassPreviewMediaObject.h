// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKPASSPREVIEWMEDIAOBJECT_H
#define CKPASSPREVIEWMEDIAOBJECT_H

@class NSURL, PKPassSecurePreviewContext, LPWebLinkPresentationProperties, NSString;
@protocol CKMediaObjectMetadataPreview;


#import "CKPassbookMediaObject.h"

@interface CKPassPreviewMediaObject : CKPassbookMediaObject <CKMediaObjectMetadataPreview>



@property (retain, nonatomic) NSURL *overrideFileURL; // ivar: _overrideFileURL
@property (retain, nonatomic) NSURL *overrideMetadataProperties; // ivar: _overrideMetadataProperties
@property (retain, nonatomic) PKPassSecurePreviewContext *passPreview; // ivar: _passPreview
@property (retain, nonatomic) LPWebLinkPresentationProperties *presentationProperties; // ivar: _presentationProperties
@property (readonly, copy, nonatomic) NSString *previewMetadataFilenameExtension;
@property (readonly, nonatomic) BOOL supportsPreviewMetadata;


+(BOOL)isPreviewable;
+(BOOL)isSupported;
+(BOOL)shouldUseTranscoderGeneratedPreviewSize;
+(id)_colorFromColorString:(id)arg0 ;
+(id)_colorFromDictionaryRepresentation:(id)arg0 ;
+(id)_darkenColor:(id)arg0 ;
+(id)_dictionaryRepresentationForColorString:(id)arg0 ;
+(id)_dictionaryRepresentationForText:(id)arg0 colorString:(id)arg1 ;
+(id)_paddedImage:(id)arg0 ;
+(void)_updatePresentationPropertiesForRow:(id)arg0 representation:(id)arg1 ;
+(void)_updatePresentationPropertiesForRow:(id)arg0 text:(id)arg1 color:(id)arg2 ;
-(BOOL)generatePreviewOutOfProcess;
-(BOOL)writePreviewMetadata:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(Class)balloonViewClassForWidth:(CGFloat)arg0 orientation:(char)arg1 ;
-(Class)previewBalloonViewClass;
-(id)_initWithOverrideFileURL:(id)arg0 ;
-(id)fileURL;
-(id)generatePreviewMetadata;
-(id)generateThumbnailFillToSize:(struct CGSize )arg0 contentAlignmentInsets:(struct UIEdgeInsets )arg1 ;
-(id)presentationPropertiesForWidth:(CGFloat)arg0 orientation:(char)arg1 ;
-(id)previewMetadata;
-(id)previewMetadataWithContentsOfURL:(id)arg0 error:(*id)arg1 ;


@end


#endif