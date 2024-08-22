// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXMLIVECONTINUOUSTONE_H
#define AXMLIVECONTINUOUSTONE_H



#import "AXMTone.h"

@interface AXMLiveContinuousTone : AXMTone

@property (nonatomic) NSUInteger framesRendered; // ivar: _framesRendered
@property (nonatomic) BOOL muted; // ivar: _muted
@property (readonly, nonatomic) CGFloat phase; // ivar: _phase
@property (nonatomic) NSUInteger releaseFrame; // ivar: _releaseFrame
@property (nonatomic) BOOL releasing; // ivar: _releasing


-(id)initWithSampleRate:(CGFloat)arg0 envelope:(id)arg1 ;
-(void)renderInBuffer:(*void)arg0 atFrame:(NSUInteger)arg1 numSamples:(NSUInteger)arg2 ;
-(void)resetRelease;
-(void)setFrequency:(CGFloat)arg0 ;
-(void)startRelease;


@end


#endif