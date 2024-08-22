// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RAWBAYERPREPROCESSOR_H
#define RAWBAYERPREPROCESSOR_H

@class NSString;
@protocol MOVStreamPreProcessor;

#import <Foundation/Foundation.h>


@interface RawBayerPreProcessor : NSObject <MOVStreamPreProcessor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(?)createTrackFormatDescriptionFromStreamData;
-(?)encodedPixelFormatFromStreamData;
-(?)formatDescriptionForPixelBufferstreamData;
-(?)inputPixelFormatFromStreamData;
-(?)processedPixelBufferCopyOf:(?)arg0 streamDataerror;


@end


#endif