// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKWATCHFACEMEDIAOBJECT_H
#define CKWATCHFACEMEDIAOBJECT_H

@class LPLinkMetadata;


#import "CKMediaObject.h"

@interface CKWatchfaceMediaObject : CKMediaObject

@property (nonatomic) char cachedOrientation; // ivar: _cachedOrientation
@property (nonatomic) CGFloat cachedWidth; // ivar: _cachedWidth
@property (retain, nonatomic) LPLinkMetadata *linkMetadata; // ivar: _linkMetadata


+(BOOL)canGeneratePreviewInMVSHostProcess;
+(BOOL)isPreviewable;
+(BOOL)shouldUseTranscoderGeneratedPreviewSize;
+(id)UTITypes;
-(BOOL)_isCachedFileLocationValid;
-(BOOL)generatePreviewOutOfProcess;
-(BOOL)hasOutOfProcessPreviewGenerator;
-(Class)placeholderBalloonViewClass;
-(Class)previewBalloonViewClass;
-(id)attachmentSummary:(NSUInteger)arg0 ;
-(id)generatePreviewFromThumbnail:(id)arg0 width:(CGFloat)arg1 orientation:(char)arg2 ;
-(id)generateThumbnailForWidth:(CGFloat)arg0 orientation:(char)arg1 ;
-(id)linkMetadataForWidth:(CGFloat)arg0 orientation:(char)arg1 ;
-(id)metricsCollectorMediaType;
-(int)mediaType;


@end


#endif