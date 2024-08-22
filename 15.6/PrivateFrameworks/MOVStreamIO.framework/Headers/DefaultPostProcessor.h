// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DEFAULTPOSTPROCESSOR_H
#define DEFAULTPOSTPROCESSOR_H

@class NSString;
@protocol MOVStreamPostProcessor;

#import <Foundation/Foundation.h>

#import "MOVStreamFrameConverter.h"

@interface DefaultPostProcessor : NSObject <MOVStreamPostProcessor>

 {
    MOVStreamFrameConverter *_converter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) id *exactBytesPerRow; // ivar: exactBytesPerRow
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int originalPixelFormat; // ivar: originalPixelFormat
@property (readonly) unsigned int processedPixelFormat;
@property BOOL removePadding; // ivar: removePadding
@property (readonly) Class superclass;


-(BOOL)shouldChangeBytesPerRowOfPixelBuffer:(struct __CVBuffer *)arg0 ;
-(BOOL)shouldRemovePaddingOfPixelBuffer:(struct __CVBuffer *)arg0 metadata:(id)arg1 ;
-(NSUInteger)minimumBytesPerRowForPixelBuffer:(struct __CVBuffer *)arg0 ;
-(id)initWithOriginalPixelFormat:(unsigned int)arg0 ;
-(struct __CVBuffer *)pixelBufferWithExactBytesPerRow:(id)arg0 fromPixelBuffer:(struct __CVBuffer *)arg1 error:(*id)arg2 ;
-(struct __CVBuffer *)pixelBufferWithoutPaddingFromPixelBuffer:(struct __CVBuffer *)arg0 error:(*id)arg1 ;
-(struct __CVBuffer *)processedPixelBufferFrom:(struct __CVBuffer *)arg0 metadata:(id)arg1 error:(*id)arg2 ;
-(void)dealloc;


@end


#endif