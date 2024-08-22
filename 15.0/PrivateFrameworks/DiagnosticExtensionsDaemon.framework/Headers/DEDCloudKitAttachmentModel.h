// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DEDCLOUDKITATTACHMENTMODEL_H
#define DEDCLOUDKITATTACHMENTMODEL_H

@class NSNumber, NSURL;


#import "DEDCloudKitBaseModel.h"

@interface DEDCloudKitAttachmentModel : DEDCloudKitBaseModel

@property (retain) NSNumber *fileSize; // ivar: _fileSize
@property (retain) NSURL *url; // ivar: _url


-(id)initWithURL:(id)arg0 parameters:(id)arg1 ;
-(id)modelName;


@end


#endif