// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MEDIADOWNLOADINSTANCE_H
#define MEDIADOWNLOADINSTANCE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MediaDownloadInstance : NSObject

@property (nonatomic) int downloadState; // ivar: _downloadState
@property (nonatomic) BOOL originatedInForeground; // ivar: _originatedInForeground
@property (retain, nonatomic) NSString *originator; // ivar: _originator
@property (nonatomic) int resumeCount; // ivar: _resumeCount




@end


#endif