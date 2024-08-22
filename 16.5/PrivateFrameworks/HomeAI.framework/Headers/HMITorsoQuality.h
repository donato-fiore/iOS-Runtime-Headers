// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMITORSOQUALITY_H
#define HMITORSOQUALITY_H

@class HMFObject, NSString;
@protocol HMFLogging;



@interface HMITorsoQuality : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(float)entropy:(*void)arg0 numPixels:(int)arg1 ;
+(float)entropyOfLaplacianForBGRAPixelBuffer:(struct __CVBuffer *)arg0 ;
+(float)entropyOfSaturationForBGRAPixelBuffer:(struct __CVBuffer *)arg0 ;
+(id)logCategory;


@end


#endif