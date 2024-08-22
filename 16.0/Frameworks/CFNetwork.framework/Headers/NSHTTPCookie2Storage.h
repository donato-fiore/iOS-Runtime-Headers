// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSHTTPCOOKIE2STORAGE_H
#define NSHTTPCOOKIE2STORAGE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NSPersistentHTTPCookie2Storage.h"
#import "NSMemoryHTTPCookie2Storage.h"

@interface NSHTTPCookie2Storage : NSObject {
    NSPersistentHTTPCookie2Storage *persistentStore;
    NSMemoryHTTPCookie2Storage *memoryStore;
    NSObject<OS_dispatch_queue> *_workQueue;
    id *_defaultNotificationHandler;
}




+(id)sharedNSHTTPCookie2Storage;
-(id)identifyingData;
-(id)init;
-(id)initInNSMemoryHTTPCookie2Storage;
-(id)initWithIdentifyingData:(id)arg0 ;
-(id)initWithPath:(id)arg0 ;
-(void)deleteAllCookiesWithCompletionHandler:(id)arg0 ;
-(void)deleteCookie:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)deleteCookiesWithFilter:(id)arg0 completionHandler:(id)arg1 ;
-(void)getAllCookiesWithCompletionHandler:(id)arg0 ;
-(void)getCookiesWithFilter:(id)arg0 completionHandler:(id)arg1 ;
-(void)setCookie:(id)arg0 withFilter:(id)arg1 completionHandler:(id)arg2 ;
-(void)setCookies:(id)arg0 withFilter:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif