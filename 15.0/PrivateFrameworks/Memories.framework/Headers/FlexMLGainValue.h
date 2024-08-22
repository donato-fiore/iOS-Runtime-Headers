// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FLEXMLGAINVALUE_H
#define FLEXMLGAINVALUE_H


#import <Foundation/Foundation.h>


@interface FlexMLGainValue : NSObject

@property (readonly, nonatomic) float gain; // ivar: _gain
@property (readonly, nonatomic) ? segmentTime; // ivar: _segmentTime


-(NSInteger)compare:(id)arg0 ;
-(id)initWithGain:(float)arg0 segmentTime:(struct ? )arg1 ;


@end


#endif