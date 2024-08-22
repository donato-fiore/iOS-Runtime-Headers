// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRCTCTIMESAMPLE_H
#define CRCTCTIMESAMPLE_H


#import <Foundation/Foundation.h>


@interface CRCtcTimeSample : NSObject

@property CRCtcCandidate blank; // ivar: _blank
@property *void sample; // ivar: _sample


-(*void)candidates;
-(id)init;
-(struct CRCtcCandidate )topCandidate;
-(void)addCandidate:(struct CRCtcCandidate )arg0 ;
-(void)dealloc;
-(void)trimCandidates;


@end


#endif