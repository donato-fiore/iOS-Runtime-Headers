// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPTTIMESTAMPCONVERTER_H
#define PPTTIMESTAMPCONVERTER_H


#import <Foundation/Foundation.h>


@interface PPTTimestampConverter : NSObject {
    CGFloat _timeZoneOffset;
    vector<std::pair<double, double>, std::allocator<std::pair<double, double>>> _systemOffsets;
}




+(id)sharedInstance;
-(BOOL)_initializeSystemOffsetCache;
-(BOOL)_isInitialized;
-(CGFloat)localTimeFromMonotonicTime:(CGFloat)arg0 ;
-(CGFloat)monotonicTimeFromUTCTime:(CGFloat)arg0 ;
-(id)init;


@end


#endif