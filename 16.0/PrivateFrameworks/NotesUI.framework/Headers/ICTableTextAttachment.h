// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICTABLETEXTATTACHMENT_H
#define ICTABLETEXTATTACHMENT_H



#import "ICTextAttachment.h"

@interface ICTableTextAttachment : ICTextAttachment

@property (nonatomic) CGSize lastAttachmentSize; // ivar: _lastAttachmentSize
@property (nonatomic) CGFloat lastAvailableWidth; // ivar: _lastAvailableWidth


-(BOOL)canDragWithoutSelecting;
-(id)printableTextContentForAppearanceType:(NSUInteger)arg0 ;
-(struct ? )attachmentBoundsMargins;
-(void)fixAttachmentForAttributedString:(id)arg0 range:(struct _NSRange )arg1 forPlainText:(BOOL)arg2 forStandardizedText:(BOOL)arg3 ;


@end


#endif