// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCHANGEQUEUEENDACTIONCOMMAND_H
#define MPCHANGEQUEUEENDACTIONCOMMAND_H

@class NSArray;


#import "MPRemoteCommand.h"

@interface MPChangeQueueEndActionCommand : MPRemoteCommand

@property (nonatomic) NSInteger currentQueueEndAction; // ivar: _currentQueueEndAction
@property (copy, nonatomic) NSArray *supportedQueueEndActions; // ivar: _supportedQueueEndActions


-(id)_mediaRemoteCommandInfoOptions;


@end


#endif