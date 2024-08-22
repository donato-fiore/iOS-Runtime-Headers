// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SRWRISTDETECTION_H
#define SRWRISTDETECTION_H

@class NSString;
@protocol SRSampling, SRSampleExporting;

#import <Foundation/Foundation.h>


@interface SRWristDetection : NSObject <SRSampling, SRSampleExporting>



@property (readonly) NSInteger crownOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL onWrist;
@property (readonly) Class superclass;
@property (nonatomic) unsigned char wristDetectionRawValue; // ivar: _wristDetectionRawValue
@property (readonly) NSInteger wristLocation;


+(void)initialize;
-(id)initWithBinarySampleRepresentation:(id)arg0 metadata:(id)arg1 timestamp:(CGFloat)arg2 ;
-(id)sr_dictionaryRepresentation;


@end


#endif