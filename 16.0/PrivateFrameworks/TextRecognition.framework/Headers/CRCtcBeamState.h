// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRCTCBEAMSTATE_H
#define CRCTCBEAMSTATE_H

@class NSMutableDictionary, NSDictionary;

#import <Foundation/Foundation.h>


@interface CRCtcBeamState : NSObject

@property (retain, nonatomic) NSMutableDictionary *mutablePaths; // ivar: _mutablePaths
@property (readonly) NSDictionary *paths;


-(id)init;
-(id)pathForString:(id)arg0 ;
-(id)sortedKeys;
-(void)addPath:(id)arg0 ;
-(void)kBest:(*id)arg0 discarded:(*id)arg1 k:(NSUInteger)arg2 ;
-(void)mergePathsWithTrailingWhitespaces;


@end


#endif