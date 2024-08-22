// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOCREGULARITEMTHUMBNAILREQUEST_H
#define DOCREGULARITEMTHUMBNAILREQUEST_H

@class QLThumbnailGenerator, QLThumbnailGenerationRequest;


#import "DOCThumbnailRequest.h"
#import "DOCThumbnailFolderIcon.h"

@interface DOCRegularItemThumbnailRequest : DOCThumbnailRequest {
    QLThumbnailGenerator *_thumbnailGenerator;
    QLThumbnailGenerationRequest *_thumbnailRequest;
    DOCThumbnailFolderIcon *_folderIcon;
    NSUInteger _style;
}




-(id)initWithItem:(id)arg0 descriptor:(id)arg1 thumbnailGenerator:(id)arg2 ;
-(void)cancel;
-(void)generateThumbnailWithCompletionHandler:(id)arg0 ;


@end


#endif