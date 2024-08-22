// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMSEGMENTMANAGERPROTECTEDSTATE_H
#define BMSEGMENTMANAGERPROTECTEDSTATE_H

@class NSMutableOrderedSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface BMSegmentManagerProtectedState : NSObject {
    BOOL _canReadOrPruneData;
    NSMutableOrderedSet *_segmentNames;
    NSMutableDictionary *_segmentFileHandles;
}




-(id)initWithDeviceStateIsUnlocked:(BOOL)arg0 ;


@end


#endif