// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OFRESCALER_H
#define OFRESCALER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface OFRescaler : NSObject {
    NSArray *_segments;
    CGFloat _sharedCompressibility1;
    CGFloat _sharedCompressibility2;
    CGFloat _sharedExpandability1;
    CGFloat _sharedExpandability2;
    CGFloat _compressibility1Weight;
    CGFloat _compressibility2Weight;
    CGFloat _expandability1Weight;
    CGFloat _expandability2Weight;
}


@property (readonly) CGFloat defaultDuration; // ivar: _defaultDuration
@property (readonly) CGFloat maximumDuration; // ivar: _maximumDuration
@property (readonly) CGFloat minimumDuration; // ivar: _minimumDuration


-(CGFloat)computeSegmentDurations:(*CGFloat)arg0 forSpeedFactor:(CGFloat)arg1 ;
-(CGFloat)computeSegmentDurations:(*CGFloat)arg0 forTotalDuration:(CGFloat)arg1 ;
-(id)initWithSegments:(id)arg0 ;
-(void)dealloc;


@end


#endif