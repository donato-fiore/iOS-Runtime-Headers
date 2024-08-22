// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLCHANGEBATCHCHANGESTORAGE_H
#define CPLCHANGEBATCHCHANGESTORAGE_H

@class NSDictionary, NSString;


#import "CPLChangeStorage.h"
#import "CPLChangeBatch.h"

@interface CPLChangeBatchChangeStorage : CPLChangeStorage {
    NSDictionary *_changesPerScopedIdentifier;
    NSString *_storageDescription;
}


@property (readonly, nonatomic) CPLChangeBatch *batch; // ivar: _batch


-(id)changeWithScopedIdentifier:(id)arg0 ;
-(id)changesWithRelatedScopedIdentifier:(id)arg0 class:(Class)arg1 ;
-(id)initWithBatch:(id)arg0 name:(id)arg1 ;
-(id)storageDescription;


@end


#endif