// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWSSNAPSHOTTER_H
#define NWSSNAPSHOTTER_H


#import <Foundation/Foundation.h>

#import "NWSSnapshotSource.h"

@interface NWSSnapshotter : NSObject

@property NSUInteger kernelSourceRef; // ivar: _kernelSourceRef
@property (retain) NWSSnapshotSource *snapshotSource; // ivar: _snapshotSource


-(id)snapshot;


@end


#endif