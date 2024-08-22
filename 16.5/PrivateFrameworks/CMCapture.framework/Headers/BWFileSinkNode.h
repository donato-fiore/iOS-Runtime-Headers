// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWFILESINKNODE_H
#define BWFILESINKNODE_H

@protocol BWNodeFileWriterStatusDelegate;


#import "BWSinkNode.h"

@interface BWFileSinkNode : BWSinkNode

@property (readonly, nonatomic) ? lastFileDuration;
@property (readonly, nonatomic) NSUInteger lastFileSize;
@property (nonatomic) NSObject<BWNodeFileWriterStatusDelegate> *recordingStatusDelegate; // ivar: _recordingStatusDelegate




@end


#endif