// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CVNLPCTCBEAMSTATE_H
#define CVNLPCTCBEAMSTATE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CVNLPCTCBeamState : NSObject

@property (retain, nonatomic) NSMutableDictionary *mutablePaths; // ivar: _mutablePaths


-(id)debugDescription;
-(id)init;
-(id)pathForString:(id)arg0 ;
-(id)paths;
-(id)sortedKeys;
-(void)addPath:(id)arg0 ;
-(void)enumeratePathsWithBlock:(id)arg0 ;
-(void)kBest:(*id)arg0 discarded:(*id)arg1 k:(NSUInteger)arg2 shouldUpdateLMState:(BOOL)arg3 ;
-(void)mergePathsWithTrailingWhitespaces;


@end


#endif