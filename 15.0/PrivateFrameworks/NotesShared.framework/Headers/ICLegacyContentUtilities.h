// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICLEGACYCONTENTUTILITIES_H
#define ICLEGACYCONTENTUTILITIES_H


#import <Foundation/Foundation.h>


@interface ICLegacyContentUtilities : NSObject



+(id)contentStringFromWebArchive:(id)arg0 ;
+(id)createAttachmentFromWebResource:(id)arg0 inContext:(id)arg1 ;
+(id)createAttachmentWithContentID:(id)arg0 mimeType:(id)arg1 data:(id)arg2 filename:(id)arg3 inContext:(id)arg4 ;
+(id)generateContentID;
+(id)newNoteBasedOnModernNote:(id)arg0 inFolder:(id)arg1 context:(id)arg2 ;
+(id)suggestedFilenameForURL:(id)arg0 mimeType:(id)arg1 ;


@end


#endif