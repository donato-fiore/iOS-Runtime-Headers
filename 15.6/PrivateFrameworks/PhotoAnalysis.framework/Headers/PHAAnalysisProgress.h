// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHAANALYSISPROGRESS_H
#define PHAANALYSISPROGRESS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface PHAAnalysisProgress : NSObject {
    NSDictionary *_countDictionariesByWorkerType;
    NSDictionary *_countOfDeletionsByWorkerType;
    NSDictionary *_totalProgressCountsByWorkerType;
}




+(void)requestCurrentProgressWithLibrary:(id)arg0 completion:(id)arg1 ;
-(NSUInteger)countOfDeletionsForWorkerType:(short)arg0 ;
-(float)_progressFromProcessedCount:(NSInteger)arg0 outOfPossibleCount:(NSInteger)arg1 ;
-(float)localPercentAnalyzedForWorkerType:(short)arg0 ;
-(float)percentAnalyzedForWorkerType:(short)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCounts:(id)arg0 totalProgressCounts:(id)arg1 countOfDeletionsByWorkerType:(id)arg2 ;
-(id)statusAsDictionary;


@end


#endif