// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFMAILDROPATTACHMENTPREVIEWDATAPROVIDER_H
#define MFMAILDROPATTACHMENTPREVIEWDATAPROVIDER_H



#import "MFAttachmentLibraryDataProvider.h"

@interface MFMailDropAttachmentPreviewDataProvider : MFAttachmentLibraryDataProvider



+(id)fullResolutionAttachmentForAttachment:(id)arg0 ;
+(id)fullResolutionAttachmentURLForAttachmentURL:(id)arg0 ;
+(id)fullResolutionStorageLocationForAttachmentWithMimePart:(id)arg0 withMessage:(id)arg1 ;
-(id)storageLocationForAttachment:(id)arg0 withMessage:(id)arg1 ;
-(void)fetchDataForAttachment:(id)arg0 consumer:(id)arg1 progress:(id)arg2 completion:(id)arg3 ;


@end


#endif