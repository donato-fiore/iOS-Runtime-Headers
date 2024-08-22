// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPTTIMESTAMPCONVERTER_H
#define PPTTIMESTAMPCONVERTER_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface PPTTimestampConverter : NSObject {
    NSURL *_filepath;
    CGFloat _timeZoneOffset;
    vector<std::pair<double, double>, std::allocator<std::pair<double, double>>> _systemOffsets;
}




-(BOOL)_initializeSystemOffsetCache;
-(BOOL)_isInitialized;
-(CGFloat)epochTimeFromMonotonicTime:(CGFloat)arg0 ;
-(CGFloat)localTimeFromMonotonicTime:(CGFloat)arg0 ;
-(CGFloat)monotonicTimeFromEpochTime:(CGFloat)arg0 ;
-(CGFloat)systemOffsetFromMonotonicTime:(CGFloat)arg0 ;
-(id)initWithFilepath:(id)arg0 ;


@end


#endif