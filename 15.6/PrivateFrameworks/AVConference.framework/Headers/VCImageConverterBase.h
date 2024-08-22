// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCIMAGECONVERTERBASE_H
#define VCIMAGECONVERTERBASE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface VCImageConverterBase : NSObject {
    *__CVPixelBufferPool _bufferPool;
    unsigned int _formatType;
    NSUInteger _outputWidth;
    NSUInteger _outputHeight;
    NSMutableDictionary *_bufferPoolDictionary;
}




-(BOOL)ensureBufferPoolSupportsOutputWidth:(NSUInteger)arg0 outputHeight:(NSUInteger)arg1 ;
-(BOOL)setUpBufferPoolForOutputWidth:(NSUInteger)arg0 outputHeight:(NSUInteger)arg1 ;
-(id)initWithFormatType:(unsigned int)arg0 ;
-(void)dealloc;


@end


#endif