// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CXCALLDIRECTORYSTOREMIGRATOR_H
#define CXCALLDIRECTORYSTOREMIGRATOR_H


#import <Foundation/Foundation.h>

#import "CXCallDirectoryStore.h"

@interface CXCallDirectoryStoreMigrator : NSObject

@property (copy, nonatomic) id *retrieveExtensionBlock; // ivar: _retrieveExtensionBlock
@property (retain, nonatomic) CXCallDirectoryStore *store; // ivar: _store
@property (copy, nonatomic) id *storeCreationBlock; // ivar: _storeCreationBlock


-(id)_performMigrationsStartingAtSchemaVersion:(NSInteger)arg0 error:(*id)arg1 ;
-(id)init;
-(id)performMigrationsWithError:(*id)arg0 ;


@end


#endif