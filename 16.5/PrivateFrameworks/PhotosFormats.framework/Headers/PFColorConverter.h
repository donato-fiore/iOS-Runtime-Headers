// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFCOLORCONVERTER_H
#define PFCOLORCONVERTER_H

@class CIContext, NSString;
@protocol PFAVReaderWriterAdjustDelegate;

#import <Foundation/Foundation.h>

#import "PFAVReaderWriter.h"

@interface PFColorConverter : NSObject <PFAVReaderWriterAdjustDelegate>

 {
    PFAVReaderWriter *_readerWriter;
    CIContext *_conversionContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)adjustPixelBuffer:(struct __CVBuffer *)arg0 toOutputBuffer:(struct __CVBuffer *)arg1 ;
// -(void)convertWithVideoURL:(id)arg0 outURL:(id)arg1 progress:(id)arg2 completion:(unk)arg3  ;


@end


#endif