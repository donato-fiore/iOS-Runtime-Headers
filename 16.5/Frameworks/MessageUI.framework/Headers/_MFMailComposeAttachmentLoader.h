// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MFMAILCOMPOSEATTACHMENTLOADER_H
#define _MFMAILCOMPOSEATTACHMENTLOADER_H

@class MFMailMessage;

#import <Foundation/Foundation.h>


@interface _MFMailComposeAttachmentLoader : NSObject {
    MFMailMessage *_message;
    id *_content;
    BOOL _isDraft;
    BOOL _didLoadBestAlternative;
    id *_completionBlock;
}




-(id)initWithMessage:(id)arg0 content:(id)arg1 isDraft:(BOOL)arg2 didLoadBestAlternative:(BOOL)arg3 completion:(id)arg4 ;
-(void)loadAttachments;


@end


#endif