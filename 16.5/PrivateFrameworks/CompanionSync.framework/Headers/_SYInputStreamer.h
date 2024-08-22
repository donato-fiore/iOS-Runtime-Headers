// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SYINPUTSTREAMER_H
#define _SYINPUTSTREAMER_H

@class NSMutableArray, NSString;
@protocol NSStreamDelegate, _SYStreamPropertyProxying, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "SYCompressedFileInputStream.h"

@interface _SYInputStreamer : NSObject <NSStreamDelegate, _SYStreamPropertyProxying>

 {
    SYCompressedFileInputStream *_stream;
    NSMutableArray *_items;
    id *_onComplete;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCompressedFileURL:(id)arg0 callbackQueue:(id)arg1 ;
-(id)streamPropertyForKey:(id)arg0 ;
-(void)_completeAllItemsWithError:(id)arg0 ;
-(void)_tryToReadData;
-(void)close;
-(void)readDataOfLength:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)setStreamProperty:(id)arg0 forKey:(id)arg1 ;
-(void)stream:(id)arg0 handleEvent:(NSUInteger)arg1 ;
-(void)whenComplete:(id)arg0 ;


@end


#endif