// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PARABOLADETECTION_H
#define PARABOLADETECTION_H


#import <Foundation/Foundation.h>


@interface ParabolaDetection : NSObject {
    int UID_counter;
    map<int, InternalObservedParabola, std::less<int>, std::allocator<std::pair<const int, InternalObservedParabola>>> internalParabolas;
    ParabolaSearchBuffer parabolaSearchBuffer;
    InternalParameters internalParams;
    map<int, ObservedParabola, std::less<int>, std::allocator<std::pair<const int, ObservedParabola>>> _observedParabolas;
    ForestAlgoParams _forestAlgoParams;
}




-(id)init;


@end


#endif