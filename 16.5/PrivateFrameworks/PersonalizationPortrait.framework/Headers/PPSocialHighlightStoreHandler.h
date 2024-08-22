// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPSOCIALHIGHLIGHTSTOREHANDLER_H
#define PPSOCIALHIGHLIGHTSTOREHANDLER_H

@class NSError;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface PPSocialHighlightStoreHandler : NSObject {
    BOOL _successful;
    NSError *_error;
    id *_block;
    NSObject<OS_dispatch_semaphore> *_sem;
}






@end


#endif