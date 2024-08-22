// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFUBIQUITYSTOREMETADATAMEDIC_H
#define PFUBIQUITYSTOREMETADATAMEDIC_H

@class NSString;

#import <Foundation/Foundation.h>

#import "PFUbiquityLocation.h"
#import "NSPersistentStore.h"

@interface PFUbiquityStoreMetadataMedic : NSObject {
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_storeName;
    NSPersistentStore *_store;
}




-(id)initWithStore:(id)arg0 localPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2 ;
-(void)dealloc;


@end


#endif