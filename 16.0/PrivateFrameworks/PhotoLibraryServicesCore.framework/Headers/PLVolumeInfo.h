// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLVOLUMEINFO_H
#define PLVOLUMEINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PLVolumeInfo : NSObject {
    NSString *_mountPoint;
    NSUInteger _blockSize;
    NSUInteger _desiredDiskThreshold;
    NSUInteger _nearLowDiskThreshold;
    NSUInteger _lowDiskThreshold;
    NSUInteger _veryLowDiskThreshold;
}


@property (readonly, nonatomic) NSInteger availableSpace;
@property (readonly, nonatomic) NSUInteger desiredDiskThreshold;
@property (readonly, nonatomic) NSUInteger lowDiskThreshold;
@property (readonly, nonatomic) NSUInteger nearLowDiskThreshold;
@property (readonly, nonatomic) NSUInteger veryLowDiskThreshold;
@property (readonly, nonatomic) NSUInteger volumeSize; // ivar: _volumeSize


-(id)initWithMountPoint:(id)arg0 ;
-(id)initWithPath:(id)arg0 ;


@end


#endif