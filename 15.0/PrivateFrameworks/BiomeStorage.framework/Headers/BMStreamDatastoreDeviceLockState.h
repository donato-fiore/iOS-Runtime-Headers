// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMSTREAMDATASTOREDEVICELOCKSTATE_H
#define BMSTREAMDATASTOREDEVICELOCKSTATE_H

@class NSMutableDictionary, NSMutableOrderedSet;

#import <Foundation/Foundation.h>


@interface BMStreamDatastoreDeviceLockState : NSObject

@property (nonatomic) BOOL canReadOrPruneData; // ivar: _canReadOrPruneData
@property (retain, nonatomic) NSMutableDictionary *segmentFileHandles; // ivar: _segmentFileHandles
@property (retain, nonatomic) NSMutableOrderedSet *segmentNames; // ivar: _segmentNames


-(id)initWithDeviceStateIsUnlocked:(BOOL)arg0 ;


@end


#endif