// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCONTACTMEDIAOBJECT_H
#define CKCONTACTMEDIAOBJECT_H

@class NSDictionary, UIImage, CNContactVCardSummary;


#import "CKCardMediaObject.h"

@interface CKContactMediaObject : CKCardMediaObject

@property (retain, nonatomic) NSDictionary *contactMediaInfo; // ivar: _contactMediaInfo
@property (nonatomic) NSUInteger oopPreviewRequestCount; // ivar: _oopPreviewRequestCount
@property (retain, nonatomic) UIImage *vCardImage; // ivar: _vCardImage
@property (nonatomic) BOOL vCardParsingFailed; // ivar: _vCardParsingFailed
@property (retain, nonatomic) CNContactVCardSummary *vCardSummary; // ivar: _vCardSummary


+(BOOL)isPreviewable;
+(BOOL)shouldUseTranscoderGeneratedPreviewSize;
+(id)UTITypes;
+(id)fallbackFilenamePrefix;
-(BOOL)generatePreviewOutOfProcess;
-(BOOL)supportsBlastDoor;
-(Class)balloonViewClass;
-(Class)placeholderBalloonViewClass;
-(Class)previewBalloonViewClass;
-(id)_transcodeControllerSharedInstance;
-(id)attachmentSummary:(NSUInteger)arg0 ;
-(id)contactCardPayloadFileURL:(id)arg0 ;
-(id)generateThumbnailFillToSize:(struct CGSize )arg0 contentAlignmentInsets:(struct UIEdgeInsets )arg1 ;
-(id)generateThumbnailForWidth:(CGFloat)arg0 orientation:(char)arg1 ;
-(id)icon;
-(id)metricsCollectorMediaType;
-(id)previewCacheKey;
-(id)previewDispatchCache;
-(id)previewItemTitle;
-(id)previewItemURL;
-(id)subtitle;
-(id)title;
-(id)vCardImageOfSize:(struct CGSize )arg0 ;
-(int)mediaType;
-(struct CGSize )bbSize;
-(void)generateOOPPreview;


@end


#endif