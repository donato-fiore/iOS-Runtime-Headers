// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COMPANDEDRAWBAYERPREPROCESSOR_H
#define COMPANDEDRAWBAYERPREPROCESSOR_H

@class NSString;
@protocol MOVStreamPreProcessor;

#import <Foundation/Foundation.h>


@interface CompandedRawBayerPreProcessor : NSObject <MOVStreamPreProcessor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(?)encodedPixelFormatFromStreamData;
-(?)formatDescriptionForPixelBufferstreamData;
-(?)inputPixelFormatFromStreamData;
-(?)processedPixelBufferCopyOf:(?)arg0 streamDataerror;
-(?)trackFormatDescriptionFromStreamData;


@end


#endif