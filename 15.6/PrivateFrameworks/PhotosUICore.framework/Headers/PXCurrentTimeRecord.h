// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCURRENTTIMERECORD_H
#define PXCURRENTTIMERECORD_H


#import <Foundation/Foundation.h>


@interface PXCurrentTimeRecord : NSObject {
    CGFloat _sampleTimestamp;
}


@property (readonly, nonatomic) ? currentTime;
@property (readonly, nonatomic) BOOL isValid; // ivar: _isValid
@property (readonly, nonatomic) float rate; // ivar: _rate
@property (readonly, nonatomic) ? sampleTime; // ivar: _sampleTime


-(id)description;
-(id)initWithSampleTime:(struct ? )arg0 ;
-(id)initWithSampleTime:(struct ? )arg0 rate:(float)arg1 ;


@end


#endif