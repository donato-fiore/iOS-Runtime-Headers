// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPVIDEOACTIVITYDESCRIPTOR_H
#define VCPVIDEOACTIVITYDESCRIPTOR_H


#import <Foundation/Foundation.h>


@interface VCPVideoActivityDescriptor : NSObject {
    float descriptors;
    int _widthInMb;
    int _heightInMb;
    *NSInteger _motionMagnitudeHistogram;
    *float _motionMagnitude;
}


@property (readonly) *float descriptors;


-(?)ExtractActivityDescriptorFromStats;
-(id)initWithFrameWidthInMb:(int)arg0 heightInMb:(int)arg1 ;
-(void)dealloc;
-(void)reset;
-(void)spatialDescriptorWithMvMagnitudeMean:(float)arg0 ;


@end


#endif