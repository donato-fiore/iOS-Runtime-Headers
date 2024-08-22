// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRICOREZLIBDATACOMPRESSOR_H
#define SIRICOREZLIBDATACOMPRESSOR_H



#import "SiriCoreDataCompressor.h"

@interface SiriCoreZlibDataCompressor : SiriCoreDataCompressor {
    z_stream_s _deflateStream;
    unsigned char _deflateBuffer;
}




-(id)compressedDataForData:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(void)dealloc;


@end


#endif