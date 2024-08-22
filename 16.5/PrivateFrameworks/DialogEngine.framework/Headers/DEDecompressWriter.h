// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEDECOMPRESSWRITER_H
#define DEDECOMPRESSWRITER_H

@protocol DEWriter;

#import <Foundation/Foundation.h>


@interface DEDecompressWriter : NSObject <DEWriter>



@property (nonatomic) z_stream_s stream; // ivar: _stream
@property (nonatomic) BOOL streamEnded; // ivar: _streamEnded
@property (nonatomic) BOOL streamInitialized; // ivar: _streamInitialized
@property (retain, nonatomic) NSObject<DEWriter> *writer; // ivar: _writer


-(id)decompress:(id)arg0 ;
-(id)init;
-(id)initWithWriter:(id)arg0 ;
-(void)close;
-(void)dealloc;
-(void)writeData:(id)arg0 ;


@end


#endif