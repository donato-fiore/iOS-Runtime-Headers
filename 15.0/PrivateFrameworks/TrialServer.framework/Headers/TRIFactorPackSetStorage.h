// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIFACTORPACKSETSTORAGE_H
#define TRIFACTORPACKSETSTORAGE_H

@protocol TRIPaths;

#import <Foundation/Foundation.h>


@interface TRIFactorPackSetStorage : NSObject {
    id<TRIPaths> *_paths;
}




-(BOOL)_forceRemoveItemAtPath:(id)arg0 ;
-(BOOL)_nonAtomicOverwriteWithSrc:(id)arg0 dest:(id)arg1 ;
-(BOOL)hasFactorPackSetWithId:(id)arg0 path:(*id)arg1 ;
-(BOOL)removeUnreferencedFactorPackSetsWithServerContext:(id)arg0 removedCount:(*unsigned int)arg1 ;
-(BOOL)saveFactorPackSet:(id)arg0 ;
-(id)_collectFactorPackSets;
-(id)init;
-(id)initWithPaths:(id)arg0 ;
-(id)parentDirForFactorPackSets;
-(id)pathForFactorPackSetWithId:(id)arg0 ;
-(void)enumerateFactorPacksForFactorPackSet:(id)arg0 usingLegacyPaths:(BOOL)arg1 withBlock:(id)arg2 ;


@end


#endif