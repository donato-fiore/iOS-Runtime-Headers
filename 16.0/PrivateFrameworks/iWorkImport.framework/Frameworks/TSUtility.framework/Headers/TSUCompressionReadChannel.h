// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUCOMPRESSIONREADCHANNEL_H
#define TSUCOMPRESSIONREADCHANNEL_H

@class NSString;
@protocol TSUStreamReadChannel;

#import <Foundation/Foundation.h>

#import "TSUStreamCompression.h"

@interface TSUCompressionReadChannel : NSObject <TSUStreamReadChannel>

 {
    id<TSUStreamReadChannel> *_readChannel;
    TSUStreamCompression *_compressor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithReadChannel:(id)arg0 compressionAlgorithm:(int)arg1 operation:(int)arg2 ;
-(void)close;
-(void)dealloc;
-(void)readWithHandler:(id)arg0 ;
-(void)readWithHandlerAndWait:(id)arg0 ;


@end


#endif