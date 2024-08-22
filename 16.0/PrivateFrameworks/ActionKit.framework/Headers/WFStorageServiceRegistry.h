// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSTORAGESERVICEREGISTRY_H
#define WFSTORAGESERVICEREGISTRY_H

@class NSSet, NSArray;

#import <Foundation/Foundation.h>


@interface WFStorageServiceRegistry : NSObject

@property (readonly, nonatomic) NSSet *objectRepresentationClasses;
@property (readonly, nonatomic) NSArray *registeredServices; // ivar: _registeredServices
@property (readonly, nonatomic) NSArray *storageServices;


+(id)sharedRegistry;
+(void)registerAllActionKitStorageServiceClasses;
+(void)registerStorageServiceClass:(Class)arg0 ;
-(id)init;
-(id)storageServiceWithName:(id)arg0 ;


@end


#endif