// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPCTRTRACKER_H
#define VCPCTRTRACKER_H

@protocol VCPBaseTracker;

#import <Foundation/Foundation.h>


@interface VCPCtrTracker : NSObject <VCPBaseTracker>

 {
    *? context;
}


@property *CGPoint box; // ivar: P
@property float confidence; // ivar: _confidence
@property BOOL lostTrackInd; // ivar: lostTrack
@property BOOL stableInd; // ivar: stable


-(id)init;
-(void)dealloc;
-(void)setupTrackerWithReferenceFrame:(struct __CVBuffer *)arg0 withROI:(struct CGPoint *)arg1 ;
-(void)trackInFrame:(struct __CVBuffer *)arg0 ;


@end


#endif