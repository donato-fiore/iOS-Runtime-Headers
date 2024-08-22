// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHAASSETPROCESSINGJOB_H
#define PHAASSETPROCESSINGJOB_H

@class NSArray, NSMutableDictionary, NSRecursiveLock;


#import "PHAWorkerJob.h"

@interface PHAAssetProcessingJob : PHAWorkerJob

@property (readonly, nonatomic) NSArray *assetLocalIdentifiers; // ivar: _assetLocalIdentifiers
@property (readonly, copy, nonatomic) NSArray *incompleteAssetLocalIdentifiers;
@property (readonly, nonatomic) NSMutableDictionary *resultsByAssetLocalIdentifier; // ivar: _resultsByAssetLocalIdentifier
@property (readonly) NSRecursiveLock *resultsLock; // ivar: _resultsLock


-(BOOL)finished;
-(NSUInteger)resultCount;
-(NSUInteger)resultForAssetLocalIdentifier:(id)arg0 ;
-(NSUInteger)successfulResultCount;
-(float)completionScore;
-(id)_resultsCopy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithWorkerType:(short)arg0 scenario:(NSUInteger)arg1 assetLocalIdentifiers:(id)arg2 library:(id)arg3 ;
-(id)statusAsDictionary;
-(void)reportResult:(NSUInteger)arg0 forAssetLocalIdentifier:(id)arg1 ;


@end


#endif