// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKBUGFORMATTACHMENTPREVIEW_H
#define FBKBUGFORMATTACHMENTPREVIEW_H


#import <Foundation/Foundation.h>


@interface FBKBugFormAttachmentPreview : NSObject



+(BOOL)canPreviewItem:(id)arg0 ;
+(BOOL)extensionIsTextFile:(id)arg0 ;
+(BOOL)hasIps_dot_synced:(id)arg0 ;
+(BOOL)hasLog_dot_number:(id)arg0 ;
+(BOOL)urlPointsToTextFile:(id)arg0 ;
+(id)URLByRemovingInvalidExtensions:(id)arg0 ;
+(id)previewTypeURL:(id)arg0 ;
+(id)textFileForString:(id)arg0 withFileName:(id)arg1 ;
+(id)textFileForURL:(id)arg0 ;


@end


#endif