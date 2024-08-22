// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCNOTIFICATIONRICHSHORTLOOKVIEW_H
#define NCNOTIFICATIONRICHSHORTLOOKVIEW_H



#import "NCNotificationShortLookView.h"

@interface NCNotificationRichShortLookView : NCNotificationShortLookView

@property (nonatomic, getter=isAttachmentImageFeatured) BOOL attachmentImageFeatured;


-(id)_newNotificationContentView;
-(id)_richContentView;
-(void)_layoutNotificationContentView;


@end


#endif