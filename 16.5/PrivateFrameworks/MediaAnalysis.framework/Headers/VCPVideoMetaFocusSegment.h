// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPVIDEOMETAFOCUSSEGMENT_H
#define VCPVIDEOMETAFOCUSSEGMENT_H



#import "VCPMetaSegment.h"

@interface VCPVideoMetaFocusSegment : VCPMetaSegment

@property NSInteger focusStatus; // ivar: _focusStatus


-(id)initWithFocusStatus:(NSInteger)arg0 atTime:(struct ? )arg1 ;
-(void)resetSegment:(NSInteger)arg0 atTime:(struct ? )arg1 ;
-(void)updateSegment:(NSInteger)arg0 atTime:(struct ? )arg1 ;


@end


#endif