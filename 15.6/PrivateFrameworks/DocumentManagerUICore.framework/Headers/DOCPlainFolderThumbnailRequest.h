// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOCPLAINFOLDERTHUMBNAILREQUEST_H
#define DOCPLAINFOLDERTHUMBNAILREQUEST_H



#import "DOCThumbnailRequest.h"
#import "DOCThumbnailDescriptor.h"

@interface DOCPlainFolderThumbnailRequest : DOCThumbnailRequest {
    DOCThumbnailDescriptor *_descriptor;
}




-(id)initWithDescriptor:(id)arg0 ;
-(void)generateThumbnailWithCompletionHandler:(id)arg0 ;


@end


#endif