// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOCSTATICBADGEDFOLDERTHUMBNAILREQUEST_H
#define DOCSTATICBADGEDFOLDERTHUMBNAILREQUEST_H



#import "DOCThumbnailRequest.h"
#import "DOCThumbnailDescriptor.h"

@interface DOCStaticBadgedFolderThumbnailRequest : DOCThumbnailRequest {
    NSUInteger _folderType;
    DOCThumbnailDescriptor *_descriptor;
}




-(id)initWithFolderType:(NSUInteger)arg0 descriptor:(id)arg1 ;
-(void)generateThumbnailWithCompletionHandler:(id)arg0 ;


@end


#endif