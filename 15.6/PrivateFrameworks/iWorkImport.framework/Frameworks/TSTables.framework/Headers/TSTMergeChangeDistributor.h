// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTMERGECHANGEDISTRIBUTOR_H
#define TSTMERGECHANGEDISTRIBUTOR_H

@protocol TSTMergeChangeProtocol;


#import "TSCEDistributor.h"

@interface TSTMergeChangeDistributor : TSCEDistributor <TSTMergeChangeProtocol>





-(id)protocol;
-(void)didMergeRange:(struct TSUModelCellRect )arg0 ;
-(void)didUnmergeRange:(struct TSUModelCellRect )arg0 ;


@end


#endif