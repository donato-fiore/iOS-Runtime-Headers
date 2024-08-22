// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPGABORFILTER_H
#define VCPGABORFILTER_H


#import <Foundation/Foundation.h>


@interface VCPGaborFilter : NSObject {
    ? _filterBanks;
    int _numScales;
    int _numOrientations;
    int _num;
}




-(id)initWithNumberOfScales:(int)arg0 numOfOrientations:(int)arg1 width:(NSUInteger)arg2 height:(NSUInteger)arg3 ;
-(int)createGaborFilterKernel:(struct Kernel )arg0 sigmaX:(float)arg1 sigmaY:(float)arg2 lambda:(float)arg3 thetaInDegree:(float)arg4 phaseInDegree:(float)arg5 ;
-(int)processWithFilterScaleIdx:(int)arg0 orientIdx:(int)arg1 srcImage:(*float)arg2 outImage:(*float)arg3 width:(NSUInteger)arg4 height:(NSUInteger)arg5 ;
-(void)dealloc;


@end


#endif