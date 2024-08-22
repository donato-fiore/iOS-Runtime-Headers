// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKANIMATEDEMOJIMEDIAOBJECT_H
#define CKANIMATEDEMOJIMEDIAOBJECT_H



#import "CKAnimatedImageMediaObject.h"

@interface CKAnimatedEmojiMediaObject : CKAnimatedImageMediaObject



+(BOOL)shouldScaleUpPreview;
+(BOOL)shouldShadePreview;
+(id)UTITypes;
-(Class)previewBalloonViewClass;
-(id)attachmentSummary:(NSUInteger)arg0 ;
-(id)backgroundColorOverride;
-(id)icon;
-(id)previewForWidth:(CGFloat)arg0 orientation:(char)arg1 ;
-(id)previewItemTitle;


@end


#endif