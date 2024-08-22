// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARGEOTRACKINGCONSENSUSANDAVERAGEFILTER_H
#define ARGEOTRACKINGCONSENSUSANDAVERAGEFILTER_H


#import <Foundation/Foundation.h>


@interface ARGeoTrackingConsensusAndAverageFilter : NSObject {
    *void _impl;
}




-(BOOL)getCurrentENUFromVIO:(CGFloat)arg0 ENUFromVIO:(struct ? *)arg1 ;
-(CGFloat)score;
-(id)initWithENUFromECEF:(struct ? )arg0 maxHistory:(int)arg1 minInlierScore:(CGFloat)arg2 ;
-(void)dealloc;
-(void)updateWithVIOPose:(struct ? )arg0 VLPose:(struct ? )arg1 ;


@end


#endif