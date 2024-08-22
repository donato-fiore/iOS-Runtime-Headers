// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKQUICKLOOKTHUMBNAILMEDIAOBJECT_H
#define CKQUICKLOOKTHUMBNAILMEDIAOBJECT_H



#import "CKMediaObject.h"

@interface CKQuickLookThumbnailMediaObject : CKMediaObject



+(Class)__ck_attachmentItemClass;
+(id)UTITypes;
-(BOOL)isPreviewable;
-(BOOL)shouldSuppressPreview;
-(id)attachmentSummary:(NSUInteger)arg0 ;
-(id)diskCachedThumbnailForOrientation:(char)arg0 ;
-(id)previewForWidth:(CGFloat)arg0 orientation:(char)arg1 ;


@end


#endif