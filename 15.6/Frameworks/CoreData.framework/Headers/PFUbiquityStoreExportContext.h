// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFUBIQUITYSTOREEXPORTCONTEXT_H
#define PFUBIQUITYSTOREEXPORTCONTEXT_H

@class NSString, NSMutableSet;

#import <Foundation/Foundation.h>

#import "PFUbiquityLocation.h"
#import "NSSQLCore.h"
#import "PFUbiquitySwitchboardCacheWrapper.h"

@interface PFUbiquityStoreExportContext : NSObject {
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_localPeerID;
    NSString *_storeName;
    NSMutableSet *_transactionEntries;
    NSSQLCore *_store;
    PFUbiquitySwitchboardCacheWrapper *_cacheWrapper;
}




-(id)description;
-(id)initWithStoreName:(id)arg0 andUbiquityRootLocation:(id)arg1 forLocalPeerID:(id)arg2 ;
-(void)dealloc;


@end


#endif