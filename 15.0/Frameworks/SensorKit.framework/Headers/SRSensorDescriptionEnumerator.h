// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SRSENSORDESCRIPTIONENUMERATOR_H
#define SRSENSORDESCRIPTIONENUMERATOR_H

@class NSEnumerator, NSDirectoryEnumerator;


#import "SRSensorsCache.h"

@interface SRSensorDescriptionEnumerator : NSEnumerator {
    SRSensorsCache *_sensorsCache;
    NSUInteger _currentSensorDirectoryIndex;
    NSDirectoryEnumerator *_descriptionFileEnumerator;
}




-(id)nextObject;
-(void)dealloc;


@end


#endif