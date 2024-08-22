// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSEXTENSIONURLRESULT_H
#define NSEXTENSIONURLRESULT_H

@class NSURL;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface NSExtensionURLResult : NSObject {
    NSObject<OS_dispatch_semaphore> *_sema;
    NSURL *_url;
    os_unfair_lock_s _lock;
}


@property (copy, setter=setURL:) NSURL *url;


-(BOOL)wait:(CGFloat)arg0 ;
-(id)copiedURL;
-(id)init;
-(void)dealloc;
-(void)signal;


@end


#endif