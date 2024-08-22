// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VTCORRUPTDETECTOR_H
#define VTCORRUPTDETECTOR_H


#import <Foundation/Foundation.h>


@interface VTCorruptDetector : NSObject {
    int _zeroSamplesCount;
    int _maxZeroSamplesCount;
}




-(BOOL)audioHasZeroRun;
-(id)init;
-(int)getMaxZeroSampleCount;
-(void)analyze:(struct AudioBuffer )arg0 ;
-(void)reset;


@end


#endif