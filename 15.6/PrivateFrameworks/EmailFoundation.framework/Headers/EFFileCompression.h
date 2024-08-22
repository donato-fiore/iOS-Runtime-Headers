// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EFFILECOMPRESSION_H
#define EFFILECOMPRESSION_H

@class NSString;
@protocol EFLoggable;

#import <Foundation/Foundation.h>


@interface EFFileCompression : NSObject <EFLoggable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_compressFile:(char *)arg0 error:(*id)arg1 ;
+(BOOL)_doCompressFile:(char *)arg0 errorCode:(*NSInteger)arg1 ;
// +(BOOL)compressDirectory:(id)arg0 shouldCancel:(id)arg1 error:(unk)arg2  ;
+(BOOL)compressFile:(id)arg0 error:(*id)arg1 ;
+(id)_compressionLock;
+(id)log;
+(struct CompressionQueueContext_s *)_compressionQueueContext;


@end


#endif