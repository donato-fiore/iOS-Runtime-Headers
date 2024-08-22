// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPTRIPCANDIDATE_H
#define PPTRIPCANDIDATE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PPTripCandidate : NSObject

@property (retain, nonatomic) NSArray *flights; // ivar: _flights
@property (retain, nonatomic) NSArray *hotels; // ivar: _hotels
@property (retain, nonatomic) NSArray *others; // ivar: _others


-(BOOL)canBeMergedWithTripCandidate:(id)arg0 ;
-(BOOL)shouldPromoteToTripEvent;
-(id)initWithTripCandidateA:(id)arg0 andTripCandidateB:(id)arg1 ;
-(id)tripEventFromCandidate;


@end


#endif