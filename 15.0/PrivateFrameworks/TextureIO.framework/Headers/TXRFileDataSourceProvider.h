// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TXRFILEDATASOURCEPROVIDER_H
#define TXRFILEDATASOURCEPROVIDER_H

@class NSString;
@protocol TXRDataSourceProvider, TXRBufferAllocator, OS_dispatch_queue, OS_dispatch_semaphore, TXRParser;

#import <Foundation/Foundation.h>

#import "TXRTextureInfo.h"

@interface TXRFileDataSourceProvider : NSObject <TXRDataSourceProvider>

 {
    id<TXRBufferAllocator> *_bufferAllocator;
    NSObject<OS_dispatch_queue> *_fileIOQueue;
    NSObject<OS_dispatch_semaphore> *_infoLoaded;
    id<TXRParser> *_parser;
    TXRTextureInfo *_textureInfo;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)_determineFileType:(id)arg0 ;
-(id)initWithData:(id)arg0 bufferAllocator:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)initWithURL:(id)arg0 bufferAllocator:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)provideImageInfoAtLevel:(NSUInteger)arg0 element:(NSUInteger)arg1 face:(NSUInteger)arg2 ;
-(id)provideTextureInfo;
-(void)_parseData:(id)arg0 bufferAllocator:(id)arg1 options:(id)arg2 error:(*id)arg3 ;


@end


#endif