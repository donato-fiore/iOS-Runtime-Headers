// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BASETRACK_H
#define BASETRACK_H


#import <Foundation/Foundation.h>

#import "Detection.h"
#import "BaseTrack.h"

@interface BaseTrack : NSObject {
    *void _topMidBoxPointTrack;
    *void _boxSizeTrack;
}


@property (readonly, nonatomic) CGRect estimatedBoundingBox;
@property (readonly, nonatomic) Detection *firstObservation; // ivar: _firstObservation
@property (readonly, nonatomic) ? firstTimestamp; // ivar: _firstTimestamp
@property (readonly, nonatomic) NSInteger identifier; // ivar: _identifier
@property (readonly, nonatomic) Detection *lastObservation; // ivar: _lastObservation
@property (readonly, nonatomic) ? lastTimestamp; // ivar: _lastTimestamp
@property (weak, nonatomic) BaseTrack *pairTrack; // ivar: pairTrack
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)initWithObservation:(id)arg0 identifier:(NSInteger)arg1 type:(NSInteger)arg2 atTime:(struct ? )arg3 ;
-(void)addObservation:(id)arg0 atTime:(struct ? )arg1 ;
-(void)dealloc;


@end


#endif