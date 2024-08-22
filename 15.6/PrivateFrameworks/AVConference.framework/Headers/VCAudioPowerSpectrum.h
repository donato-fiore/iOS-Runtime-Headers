// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCAUDIOPOWERSPECTRUM_H
#define VCAUDIOPOWERSPECTRUM_H

@class NSString;
@protocol VCAudioPowerSpectrumProtocol;

#import <Foundation/Foundation.h>


@interface VCAudioPowerSpectrum : NSObject <VCAudioPowerSpectrumProtocol>

 {
    _VCAudioPowerSpectrumRealtimeContext _realtimeContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) _VCRange frequencyRange;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *void realtimeContext;
@property (readonly, nonatomic) NSInteger streamToken; // ivar: _streamToken
@property (readonly) Class superclass;


-(id)initWithBinCount:(unsigned int)arg0 streamToken:(NSInteger)arg1 sinkContext:(*void)arg2 sinkCallback:(*unk)arg3 ;
-(void)dealloc;


@end


#endif