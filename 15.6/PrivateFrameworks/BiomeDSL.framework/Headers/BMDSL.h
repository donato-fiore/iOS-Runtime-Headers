// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMDSL_H
#define BMDSL_H

@class NSArray;
@protocol BMDSL;


#import "BMDSLBaseCodable.h"

@interface BMDSL : BMDSLBaseCodable <BMDSL>



@property (readonly, nonatomic) NSArray *upstreams;


-(id)as:(id)arg0 ;
-(id)bpsPublisher;
-(id)collect;
-(id)combinedState;
-(id)filterWithKeyPath:(id)arg0 comparison:(NSInteger)arg1 negation:(BOOL)arg2 value:(id)arg3 ;
-(id)filterWithKeyPath:(id)arg0 comparison:(NSInteger)arg1 value:(id)arg2 ;
-(id)filterWithKeyPath:(id)arg0 value:(id)arg1 ;
-(id)insertState:(id)arg0 as:(id)arg1 ;
-(id)mapWithSelector:(SEL)arg0 ;
-(id)mapWithTransform:(id)arg0 ;
-(id)mapWithTransform:(id)arg0 keyPaths:(id)arg1 ;
-(id)mergeWithOther:(id)arg0 ;
-(id)orderedMergeWithOther:(id)arg0 key:(id)arg1 selector:(SEL)arg2 ;
-(id)subscribeOn:(id)arg0 ;
-(id)subscribeOn:(id)arg0 with:(id)arg1 ;
-(id)windowByKeyedPath:(id)arg0 assigner:(id)arg1 ;
-(void)allowEvaluation;


@end


#endif