// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEDCLOUDKITATTACHMENTMODEL_H
#define DEDCLOUDKITATTACHMENTMODEL_H

@class NSNumber, NSString, NSURL;


#import "DEDCloudKitBaseModel.h"

@interface DEDCloudKitAttachmentModel : DEDCloudKitBaseModel

@property (retain) NSNumber *fileSize; // ivar: _fileSize
@property (retain) NSString *queueItem; // ivar: _queueItem
@property (retain) NSURL *url; // ivar: _url


-(id)initWithURL:(id)arg0 withQueueItem:(id)arg1 parameters:(id)arg2 ;
-(id)modelName;


@end


#endif