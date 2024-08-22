// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARGEOTRACKINGGRADUALCORRECTIONFILTER_H
#define ARGEOTRACKINGGRADUALCORRECTIONFILTER_H


#import <Foundation/Foundation.h>


@interface ARGeoTrackingGradualCorrectionFilter : NSObject {
    ? _ENUFromVIOCurrent;
    ? _lastVIOPose;
    CGFloat _lastTimestamp;
    os_unfair_lock_s _targetLock;
    vector<float, std::allocator<float>> _posHistory;
    vector<unsigned char, std::allocator<unsigned char>> _posHistoryC;
}


@property (nonatomic) ? ENUFromVIOTarget; // ivar: _ENUFromVIOTarget


-(BOOL)getCurrentENUFromVIO:(struct ? *)arg0 ;
-(id)initWithTargetTransform:(struct ? )arg0 ;
-(void)setTargetRotation:(struct ? )arg0 ;
-(void)setTargetTranslation;
-(void)updateWithVIOPose:(struct ? )arg0 timestamp:(CGFloat)arg1 ;


@end


#endif