// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKPASSBOOKMEDIAOBJECT_H
#define CKPASSBOOKMEDIAOBJECT_H

@class PKPass;


#import "CKMediaObject.h"

@interface CKPassbookMediaObject : CKMediaObject

@property (retain, nonatomic) PKPass *pass; // ivar: _pass
@property (readonly, nonatomic, getter=isSupported) BOOL supported;


+(BOOL)isPreviewable;
+(id)UTITypes;
+(id)fallbackFilenamePrefix;
-(BOOL)shouldBeQuickLooked;
-(BOOL)shouldShowDisclosure;
-(BOOL)shouldShowViewer;
-(Class)previewBalloonViewClass;
-(id)attachmentSummary:(NSUInteger)arg0 ;
-(id)generateThumbnailForWidth:(CGFloat)arg0 orientation:(char)arg1 ;
-(id)metricsCollectorMediaType;
-(id)previewForWidth:(CGFloat)arg0 orientation:(char)arg1 ;
-(id)previewItemTitle;
-(int)mediaType;


@end


#endif