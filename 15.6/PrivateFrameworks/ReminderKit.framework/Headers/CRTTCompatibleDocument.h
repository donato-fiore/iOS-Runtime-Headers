// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRTTCOMPATIBLEDOCUMENT_H
#define CRTTCOMPATIBLEDOCUMENT_H

@class NSMutableArray;


#import "CRDocument.h"
#import "TTCRVectorMultiTimestamp.h"

@interface CRTTCompatibleDocument : CRDocument

@property (retain, nonatomic) TTCRVectorMultiTimestamp *sharedTopotextTimestamp; // ivar: _sharedTopotextTimestamp
@property (retain, nonatomic) NSMutableArray *stringsWithClocksNeedingUpdating; // ivar: _stringsWithClocksNeedingUpdating
@property (retain, nonatomic) NSMutableArray *stringsWithClocksToResetAfterRealizingLocalChanges; // ivar: _stringsWithClocksToResetAfterRealizingLocalChanges


-(NSUInteger)mergeResultForMergingWithDocument:(id)arg0 ;
-(id)initWithVersion:(id)arg0 startVersion:(id)arg1 rootObject:(id)arg2 replica:(id)arg3 ;
-(id)initWithVersion:(id)arg0 startVersion:(id)arg1 rootObject:(id)arg2 replica:(id)arg3 topoTimestamp:(id)arg4 ;
-(void)mergeTimestampWithDocument:(id)arg0 ;
-(void)realizeLocalChanges;


@end


#endif