// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKLOCATIONMEDIAOBJECT_H
#define CKLOCATIONMEDIAOBJECT_H

@class NSString;
@protocol MKAnnotation;


#import "CKContactMediaObject.h"

@interface CKLocationMediaObject : CKContactMediaObject <MKAnnotation>



@property (nonatomic) CLLocationCoordinate2D coordinate; // ivar: _coordinate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title;


+(BOOL)isPreviewable;
+(Class)__ck_attachmentItemClass;
+(id)UTITypes;
+(id)fallbackFilenamePrefix;
+(id)placeholderPreviewCache;
+(id)placeholderPreviewForWidth:(CGFloat)arg0 orientation:(char)arg1 ;
+(id)vcardDataFromCLLocation:(id)arg0 ;
-(BOOL)isDroppedPin;
-(Class)balloonViewClass;
-(Class)placeholderBalloonViewClass;
-(Class)previewBalloonViewClass;
-(id)attachmentSummary:(NSUInteger)arg0 ;
-(id)bbPreviewFillToSize:(struct CGSize )arg0 ;
-(id)generatePlaceholderThumbnailFillToSize:(struct CGSize )arg0 contentAlignmentInsets:(struct UIEdgeInsets )arg1 ;
-(id)generatePlaceholderThumbnailForWidth:(CGFloat)arg0 orientation:(char)arg1 ;
-(id)generateThumbnailFillToSize:(struct CGSize )arg0 contentAlignmentInsets:(struct UIEdgeInsets )arg1 ;
-(id)initWithTransfer:(id)arg0 context:(id)arg1 forceInlinePreview:(BOOL)arg2 ;
-(id)mapItem;
-(id)metricsCollectorMediaType;
-(id)pasteboardItemProvider;
-(id)previewCacheKeyWithOrientation:(char)arg0 ;
-(id)previewCachesFileURLWithOrientation:(char)arg0 extension:(id)arg1 generateIntermediaries:(BOOL)arg2 ;
-(id)previewForWidth:(CGFloat)arg0 orientation:(char)arg1 ;
-(id)previewItemTitle;
-(id)rtfDocumentItemsWithFormatString:(id)arg0 selectedTextRange:(struct _NSRange )arg1 ;
-(id)transcriptTraitCollection;
-(id)vCardURLProperties;
-(int)mediaType;
-(struct CGSize )bbSize;


@end


#endif