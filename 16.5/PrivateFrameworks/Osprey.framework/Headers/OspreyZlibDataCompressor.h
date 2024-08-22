// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OSPREYZLIBDATACOMPRESSOR_H
#define OSPREYZLIBDATACOMPRESSOR_H


#import <Foundation/Foundation.h>


@interface OspreyZlibDataCompressor : NSObject {
    z_stream_s _deflateStream;
    unsigned char _deflateBuffer;
}




-(id)compressedDataForData:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithOptions:(NSInteger)arg0 ;
-(void)dealloc;


@end


#endif