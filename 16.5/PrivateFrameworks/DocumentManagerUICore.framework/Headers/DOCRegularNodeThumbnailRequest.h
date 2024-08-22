// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOCREGULARNODETHUMBNAILREQUEST_H
#define DOCREGULARNODETHUMBNAILREQUEST_H

@class QLThumbnailGenerator, QLThumbnailGenerationRequest;


#import "DOCThumbnailRequest.h"
#import "DOCThumbnailFolderIcon.h"

@interface DOCRegularNodeThumbnailRequest : DOCThumbnailRequest {
    QLThumbnailGenerator *_thumbnailGenerator;
    QLThumbnailGenerationRequest *_thumbnailRequest;
    DOCThumbnailFolderIcon *_folderIcon;
    NSUInteger _style;
}




-(id)initWithNode:(id)arg0 descriptor:(id)arg1 thumbnailGenerator:(id)arg2 ;
-(void)cancel;
-(void)generateThumbnailWithCompletionHandler:(id)arg0 ;


@end


#endif