// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPVIDEOOBJECTTRACKER_H
#define VCPVIDEOOBJECTTRACKER_H


#import <Foundation/Foundation.h>

#import "VCPCtrTracker.h"

@interface VCPVideoObjectTracker : NSObject {
    VCPCtrTracker *_correlationTracker;
}


@property (readonly, nonatomic) float confidence; // ivar: _confidence
@property (readonly, nonatomic) int lostCount; // ivar: _lostCount
@property (readonly, nonatomic) CGRect objectBounds; // ivar: _objectBounds
@property (readonly, nonatomic) CGRect objectBoundsInitial; // ivar: _objectBoundsInitial
@property (readonly, nonatomic) ? start; // ivar: _start


-(id)initWithObjectBounds:(struct CGRect )arg0 inFrame:(struct __CVBuffer *)arg1 timestamp:(struct ? )arg2 ;
-(int)trackObjectInFrame:(struct __CVBuffer *)arg0 ;


@end


#endif