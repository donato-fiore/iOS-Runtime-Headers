// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLTRANSIENTREPOSITORYSTORAGE_H
#define CPLTRANSIENTREPOSITORYSTORAGE_H



#import "CPLChangeStorage.h"
#import "CPLEngineTransientRepository.h"

@interface CPLTransientRepositoryStorage : CPLChangeStorage

@property (readonly, nonatomic) CPLEngineTransientRepository *transientRepository; // ivar: _transientRepository


-(id)changeWithScopedIdentifier:(id)arg0 ;
-(id)changesWithRelatedScopedIdentifier:(id)arg0 class:(Class)arg1 ;
-(id)initWithTransientRepository:(id)arg0 ;
-(id)storageDescription;


@end


#endif