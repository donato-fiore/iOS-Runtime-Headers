// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLSIMPLEMERGEHELPER_H
#define CPLSIMPLEMERGEHELPER_H


#import <Foundation/Foundation.h>

#import "CPLEngineStore.h"

@interface CPLSimpleMergeHelper : NSObject

@property (readonly, nonatomic) CPLEngineStore *store; // ivar: _store


+(id)_mergerWithConflictsForStore:(id)arg0 conflictingScopeIdentifiers:(id)arg1 ;
+(id)_mergerWithNoConflictsForStore:(id)arg0 ;
-(BOOL)_changeCanConflict:(id)arg0 ;
-(id)initWithEngineStore:(id)arg0 ;
-(id)mergerForBatch:(id)arg0 error:(*id)arg1 ;


@end


#endif