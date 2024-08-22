// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFATTACHMENTUTILITIES_H
#define MFATTACHMENTUTILITIES_H


#import <Foundation/Foundation.h>


@interface MFAttachmentUtilities : NSObject



+(BOOL)shouldCreatePlaceholderAttachmentForAttachmentWithSize:(NSInteger)arg0 ;
+(id)_temporaryDirectoryUniqueURL;
+(id)makeAttachmentPlaceholder:(id)arg0 fileSize:(NSInteger)arg1 mimeType:(id)arg2 contentID:(id)arg3 ;
+(id)mimeTypeForFileName:(id)arg0 ;
+(id)securityScopeForFileURL:(id)arg0 ;
+(id)temporaryDirectory;
+(id)temporaryFileURLWithExtension:(id)arg0 ;
+(id)writeData:(id)arg0 toTemporaryFileURLWithFileName:(id)arg1 ;


@end


#endif