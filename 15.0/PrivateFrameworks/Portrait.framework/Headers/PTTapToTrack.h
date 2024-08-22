// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTTAPTOTRACK_H
#define PTTAPTOTRACK_H

@class FTCinematicTapToTrack, NSMutableArray;

#import <Foundation/Foundation.h>


@interface PTTapToTrack : NSObject {
    CGRect _tmpCurrentRect;
    FTCinematicTapToTrack *_tracker;
}


@property (retain, nonatomic) NSMutableArray *detections; // ivar: _detections


-(BOOL)addDetectionAndStartTrackingRect:(struct CGRect )arg0 time:(struct ? )arg1 colorBuffer:(struct __CVBuffer *)arg2 disparityBuffer:(struct __CVBuffer *)arg3 ;
-(id)addDetectionForNextFrameAt:(struct ? )arg0 colorBuffer:(struct __CVBuffer *)arg1 disparityBuffer:(struct __CVBuffer *)arg2 ;
-(id)finalizeTrack;
-(id)getRectForPoint:(struct CGPoint )arg0 colorBuffer:(struct __CVBuffer *)arg1 ;
-(id)initWithCommandQueue:(id)arg0 ;
-(void)addDetectionAtTime:(struct ? )arg0 rect:(struct CGRect )arg1 disparityBuffer:(struct __CVBuffer *)arg2 ;
-(void)resetTrack;


@end


#endif