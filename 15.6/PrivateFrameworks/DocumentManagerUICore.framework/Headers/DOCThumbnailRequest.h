// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOCTHUMBNAILREQUEST_H
#define DOCTHUMBNAILREQUEST_H


#import <Foundation/Foundation.h>


@interface DOCThumbnailRequest : NSObject

@property (copy, nonatomic) id *thumbnailGenerationRequiresDownloadHandler; // ivar: _thumbnailGenerationRequiresDownloadHandler


+(id)iconRequestForItem:(id)arg0 descriptor:(id)arg1 thumbnailGenerator:(id)arg2 ;
+(id)iconRequestForURL:(id)arg0 descriptor:(id)arg1 thumbnailGenerator:(id)arg2 ;
+(id)requestForItem:(id)arg0 descriptor:(id)arg1 thumbnailGenerator:(id)arg2 ;
-(void)cancel;
-(void)generateThumbnailWithCompletionHandler:(id)arg0 ;


@end


#endif