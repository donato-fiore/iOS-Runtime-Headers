// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVFRAMERATERANGE_H
#define AVFRAMERATERANGE_H


#import <Foundation/Foundation.h>

#import "AVFrameRateRangeInternal.h"

@interface AVFrameRateRange : NSObject {
    AVFrameRateRangeInternal *_internal;
}


@property (readonly) ? maxFrameDuration;
@property (readonly) CGFloat maxFrameRate;
@property (readonly) ? minFrameDuration;
@property (readonly) CGFloat minFrameRate;


+(id)frameRateRangeWithMinRate:(int)arg0 maxFrameRate:(int)arg1 ;
+(void)initialize;
-(BOOL)includesFrameDuration:(struct ? )arg0 ;
-(BOOL)includesFrameRate:(CGFloat)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithMinFrameRate:(int)arg0 maxFrameRate:(int)arg1 ;
-(void)dealloc;


@end


#endif