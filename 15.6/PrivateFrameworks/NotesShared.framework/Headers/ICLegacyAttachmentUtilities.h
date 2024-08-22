// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICLEGACYATTACHMENTUTILITIES_H
#define ICLEGACYATTACHMENTUTILITIES_H


#import <Foundation/Foundation.h>


@interface ICLegacyAttachmentUtilities : NSObject



+(id)attachmentWithContentID:(id)arg0 context:(id)arg1 ;
+(id)contentIDStringFromCIDURL:(id)arg0 ;
+(id)typeUTIFromFileURL:(id)arg0 mimeType:(id)arg1 ;
+(void)importFileAtURL:(id)arg0 toAttachment:(id)arg1 attachmentPreviewGenerator:(id)arg2 ;
+(void)importLegacyAttachment:(id)arg0 toNote:(id)arg1 attachmentPreviewGenerator:(id)arg2 ;


@end


#endif