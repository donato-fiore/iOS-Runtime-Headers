// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOCICONTHUMBNAILREQUEST_H
#define DOCICONTHUMBNAILREQUEST_H

@class QLThumbnailGenerationRequest, QLThumbnailGenerator;


#import "DOCThumbnailRequest.h"

@interface DOCIconThumbnailRequest : DOCThumbnailRequest {
    QLThumbnailGenerationRequest *_request;
    QLThumbnailGenerator *_thumbnailGenerator;
}




-(id)initWithItem:(id)arg0 descriptor:(id)arg1 thumbnailGenerator:(id)arg2 ;
-(id)initWithURL:(id)arg0 descriptor:(id)arg1 thumbnailGenerator:(id)arg2 ;
-(void)generateThumbnailWithCompletionHandler:(id)arg0 ;


@end


#endif