// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OSPREYZLIBDATADECOMPRESSOR_H
#define OSPREYZLIBDATADECOMPRESSOR_H


#import <Foundation/Foundation.h>


@interface OspreyZlibDataDecompressor : NSObject {
    z_stream_s _inflateStream;
    unsigned char _inflateBuffer;
}




-(id)decompressedDataForData:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithOptions:(NSInteger)arg0 ;
-(void)dealloc;


@end


#endif