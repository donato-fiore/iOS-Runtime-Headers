// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCDOWNLOADTHUMBNAIL_H
#define BRCDOWNLOADTHUMBNAIL_H



#import "BRCDownload.h"

@interface BRCDownloadThumbnail : BRCDownload



-(BOOL)_stageWithSession:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)initWithDocument:(id)arg0 stageID:(id)arg1 etag:(id)arg2 ;
-(int)kind;


@end


#endif