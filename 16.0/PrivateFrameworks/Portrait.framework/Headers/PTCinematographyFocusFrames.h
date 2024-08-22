// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTCINEMATOGRAPHYFOCUSFRAMES_H
#define PTCINEMATOGRAPHYFOCUSFRAMES_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "PTCinematographyFocusFramesOptions.h"

@interface PTCinematographyFocusFrames : NSObject

@property (retain, nonatomic) NSArray *frames; // ivar: _frames
@property (copy, nonatomic) PTCinematographyFocusFramesOptions *options; // ivar: _options


-(NSInteger)_framesIndex:(NSUInteger)arg0 earlierBy:(struct ? )arg1 ;
-(NSInteger)startIndexForLinearRackFocusPullToFrameAtIndex:(NSUInteger)arg0 ;
-(id)initWithFrames:(id)arg0 options:(id)arg1 ;


@end


#endif