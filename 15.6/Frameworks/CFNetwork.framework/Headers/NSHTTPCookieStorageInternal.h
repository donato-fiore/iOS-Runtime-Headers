// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSHTTPCOOKIESTORAGEINTERNAL_H
#define NSHTTPCOOKIESTORAGEINTERNAL_H

@class NSRecursiveLock;

#import <Foundation/Foundation.h>


@interface NSHTTPCookieStorageInternal : NSObject {
    *OpaqueCFHTTPCookieStorage storage;
    *OpaqueCFHTTPCookieStorage privateStorage;
    NSRecursiveLock *dataLock;
    BOOL privateBrowsing;
}




-(void)_syncCookies;
-(void)dealloc;
-(void)registerForPostingNotificationsWithContext:(id)arg0 ;


@end


#endif