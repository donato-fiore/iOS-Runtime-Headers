// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SYOUTPUTSTREAMER_H
#define _SYOUTPUTSTREAMER_H

@class NSMutableArray, NSString;
@protocol NSStreamDelegate, _SYStreamPropertyProxying, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "SYCompressedFileOutputStream.h"

@interface _SYOutputStreamer : NSObject <NSStreamDelegate, _SYStreamPropertyProxying>

 {
    SYCompressedFileOutputStream *_stream;
    NSMutableArray *_items;
    id *_onComplete;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasWrittenData; // ivar: _hasWrittenData
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_getCompletionBlock:(SEL)arg0 ;
-(id)initWithCompressedFileURL:(id)arg0 callbackQueue:(id)arg1 ;
-(id)streamPropertyForKey:(id)arg0 ;
-(void)_completeAllItemsWithError:(id)arg0 ;
-(void)_tryToSendData;
-(void)close;
-(void)setStreamProperty:(id)arg0 forKey:(id)arg1 ;
-(void)stream:(id)arg0 handleEvent:(NSUInteger)arg1 ;
-(void)whenComplete:(id)arg0 ;
-(void)writeData:(id)arg0 completion:(id)arg1 ;


@end


#endif