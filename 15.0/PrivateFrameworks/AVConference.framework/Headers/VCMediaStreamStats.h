// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCMEDIASTREAMSTATS_H
#define VCMEDIASTREAMSTATS_H


#import <Foundation/Foundation.h>


@interface VCMediaStreamStats : NSObject {
    *tagHANDLE _summerHandle;
    CGFloat _lastRecordingTime;
}


@property (readonly, nonatomic) unsigned int bitrateKbps;
@property (readonly, nonatomic) CGFloat framerate;
@property (nonatomic) unsigned int maxBitrateKbps; // ivar: _maxBitrateKbps
@property (nonatomic) unsigned short maxFrameDurationMillis; // ivar: _maxFrameDurationMillis
@property (nonatomic) CGFloat maxFramerate; // ivar: _maxFramerate
@property (nonatomic) unsigned int minBitrateKbps; // ivar: _minBitrateKbps
@property (nonatomic) CGFloat minFramerate; // ivar: _minFramerate


-(CGFloat)getFramerateSinceTime:(CGFloat)arg0 ;
-(id)init;
-(unsigned int)getBitrateKbpsSinceTime:(CGFloat)arg0 ;
-(void)dealloc;
-(void)recordDataWithSize:(CGFloat)arg0 atTime:(CGFloat)arg1 ;
-(void)updateMinMaxSinceTime:(CGFloat)arg0 ;


@end


#endif