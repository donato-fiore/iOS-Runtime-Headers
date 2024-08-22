// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MTLPIPELINECACHE_H
#define _MTLPIPELINECACHE_H

@class NSString;
@protocol MTLPipelineCache;

#import <Foundation/Foundation.h>


@interface _MTLPipelineCache : NSObject <MTLPipelineCache>



@property (readonly) *MTLCompilerCache cache; // ivar: _compilerCache
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL disableRunTimeCompilation; // ivar: _disableRunTimeCompilation
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) BOOL writable; // ivar: _writable


-(id)initWithFilePath:(id)arg0 readOnly:(BOOL)arg1 deviceInfo:(struct MTLTargetDeviceArch *)arg2 ;
-(void)dealloc;
-(void)write;


@end


#endif