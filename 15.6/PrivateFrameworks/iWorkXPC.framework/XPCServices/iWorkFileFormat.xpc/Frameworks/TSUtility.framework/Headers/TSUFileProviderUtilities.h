// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSUFILEPROVIDERUTILITIES_H
#define TSUFILEPROVIDERUTILITIES_H


#import <Foundation/Foundation.h>


@interface TSUFileProviderUtilities : NSObject



+(void)bookmarkableStringFromSandboxedURL:(id)arg0 completionQueue:(id)arg1 completion:(id)arg2 ;
+(void)didUpdateAlternateContentsDocumentForSandboxedURL:(id)arg0 completionQueue:(id)arg1 completion:(id)arg2 ;
+(void)fetchAlternateContentsURLForSandboxedURL:(id)arg0 completionQueue:(id)arg1 completion:(id)arg2 ;
+(void)initialize;
+(void)setAlternateContentsURL:(id)arg0 onSandboxedURL:(id)arg1 completionQueue:(id)arg2 completion:(id)arg3 ;
-(id)init;


@end


#endif