// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MFATTACHMENTACTIVEREQUEST_H
#define _MFATTACHMENTACTIVEREQUEST_H

@class NSProgress;

#import <Foundation/Foundation.h>

#import "MFAttachment.h"

@interface _MFAttachmentActiveRequest : NSObject

@property (readonly, nonatomic) MFAttachment *attachment; // ivar: _attachment
@property (readonly, nonatomic) NSProgress *downloadProgress; // ivar: _downloadProgress
@property (readonly, copy, nonatomic) id *fetchCompletionBlock; // ivar: _fetchCompletionBlock
@property (nonatomic) NSInteger lastProgressBytes; // ivar: _lastProgressBytes
@property (nonatomic) CGFloat lastProgressTime; // ivar: _lastProgressTime
@property (readonly, nonatomic) BOOL wantsCompletionBlockOffMainThread; // ivar: _wantsCompletionBlockOffMainThread


-(id)initWithAttachment:(id)arg0 ;
-(void)completeWithData:(id)arg0 error:(id)arg1 ;


@end


#endif