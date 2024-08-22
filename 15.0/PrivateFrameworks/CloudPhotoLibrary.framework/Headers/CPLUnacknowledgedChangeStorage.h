// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLUNACKNOWLEDGEDCHANGESTORAGE_H
#define CPLUNACKNOWLEDGEDCHANGESTORAGE_H



#import "CPLChangeStorage.h"
#import "CPLEngineStore.h"

@interface CPLUnacknowledgedChangeStorage : CPLChangeStorage

@property (readonly, nonatomic) CPLEngineStore *store; // ivar: _store


-(id)changeWithScopedIdentifier:(id)arg0 ;
-(id)changesWithRelatedScopedIdentifier:(id)arg0 class:(Class)arg1 ;
-(id)initWithStore:(id)arg0 ;
-(id)storageDescription;


@end


#endif