// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPCONNECTIONSSCOREDLOCATIONGUARDEDDATA_H
#define PPCONNECTIONSSCOREDLOCATIONGUARDEDDATA_H

@class NSMutableArray, NSMutableSet;

#import <Foundation/Foundation.h>


@interface PPConnectionsScoredLocationGuardedData : NSObject {
    NSMutableArray *_locations;
    NSMutableSet *_seenValues;
}




-(id)init;


@end


#endif