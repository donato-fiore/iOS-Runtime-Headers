// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBKMUTABLESTOREURLBAGCONTEXT_H
#define SBKMUTABLESTOREURLBAGCONTEXT_H

@class NSString, NSURL;


#import "SBKStoreURLBagContext.h"

@interface SBKMutableStoreURLBagContext : SBKStoreURLBagContext

@property (copy, nonatomic) NSString *domain;
@property (nonatomic) BOOL domainDisabled;
@property (nonatomic) CGFloat pollingIntervalInSeconds;
@property (retain, nonatomic) NSURL *pullAllKeyValueRequestURL;
@property (retain, nonatomic) NSURL *pullKeyValueRequestURL;
@property (retain, nonatomic) NSURL *pushAllKeyValueRequestURL;
@property (retain, nonatomic) NSURL *pushKeyValueRequestURL;
@property (retain, nonatomic) NSURL *syncRequestURL;




@end


#endif