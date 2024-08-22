// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIVIDEOANALYZEREVENTTRACKER_H
#define HMIVIDEOANALYZEREVENTTRACKER_H

@class HMFObject, NSMutableArray, NSArray;



@interface HMIVideoAnalyzerEventTracker : HMFObject

@property (retain) NSMutableArray *mutableTracks; // ivar: _mutableTracks
@property (readonly) NSArray *tracks;


-(id)init;
-(void)addTrack:(id)arg0 ;
-(void)trackEvent:(id)arg0 ;
-(void)trackFrameResult:(id)arg0 ;


@end


#endif