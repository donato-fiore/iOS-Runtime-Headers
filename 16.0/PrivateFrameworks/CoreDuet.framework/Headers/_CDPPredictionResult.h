// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CDPPREDICTIONRESULT_H
#define _CDPPREDICTIONRESULT_H

@class NSArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _CDPPredictionResult : NSObject {
    NSArray *_rankedMembers;
}


@property (retain) NSMutableDictionary *scoresForMembers; // ivar: _scoresForMembers
@property CGFloat weight; // ivar: _weight


-(id)initByMergingPredictionResults:(id)arg0 ;
-(id)initWithMembers:(id)arg0 andScores:(id)arg1 ;
-(id)rankedCandidates:(id)arg0 ;
-(id)rankedMembers;
-(id)rankedMembers:(id)arg0 ;
-(id)rankedMembersPassingThreshold:(CGFloat)arg0 ;
-(void)commonInit;


@end


#endif