// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKVADMINSERVICEFACTORY_H
#define CKVADMINSERVICEFACTORY_H

@class NSString;
@protocol CKVAdminServiceProvider, OS_dispatch_queue, KVDonateServiceProvider;

#import <Foundation/Foundation.h>

#import "CKVIndexManager.h"
#import "CKVTaskHandler.h"
#import "CKVSettings.h"

@interface CKVAdminServiceFactory : NSObject <CKVAdminServiceProvider>

 {
    NSObject<OS_dispatch_queue> *_serviceQueue;
    CKVIndexManager *_indexManager;
    CKVTaskHandler *_taskHandler;
    NSObject<KVDonateServiceProvider> *_serviceProvider;
    CKVSettings *_settings;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)adminService;
-(id)initWithQueue:(id)arg0 indexManager:(id)arg1 settings:(id)arg2 donateTaskProvider:(id)arg3 coalescenceManager:(id)arg4 serviceProvider:(id)arg5 ;


@end


#endif