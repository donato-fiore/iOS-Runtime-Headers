// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKGREENFIELDSERVICE_H
#define NTKGREENFIELDSERVICE_H

@protocol NTKGreenfieldDecodingServiceProtocol;

#import <Foundation/Foundation.h>


@interface NTKGreenfieldService : NSObject <NTKGreenfieldDecodingServiceProtocol>





+(id)_unzipWatchfaceFromURL:(id)arg0 ;
-(void)removeFileAtPath:(id)arg0 withSandboxExtension:(char *)arg1 completionBlock:(id)arg2 ;
-(void)unzipWatchfaceFromURL:(id)arg0 withSandboxExtension:(char *)arg1 completionBlock:(id)arg2 ;


@end


#endif