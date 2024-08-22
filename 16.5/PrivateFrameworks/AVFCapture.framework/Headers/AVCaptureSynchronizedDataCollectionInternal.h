// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCAPTURESYNCHRONIZEDDATACOLLECTIONINTERNAL_H
#define AVCAPTURESYNCHRONIZEDDATACOLLECTIONINTERNAL_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface AVCaptureSynchronizedDataCollectionInternal : NSObject {
    *id dataOutputs;
    *id synchronizedData;
    char count;
    char maxCount;
    NSUInteger changeSeed;
    ? creationTime;
    NSArray *possibleDataOutputs;
}






@end


#endif