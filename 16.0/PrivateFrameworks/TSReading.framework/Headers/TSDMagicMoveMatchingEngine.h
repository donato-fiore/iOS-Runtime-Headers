// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDMAGICMOVEMATCHINGENGINE_H
#define TSDMAGICMOVEMATCHINGENGINE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface TSDMagicMoveMatchingEngine : NSObject {
    NSMutableArray *_matches;
}




+(id)matchingEngine;
-(id)init;
-(id)matchResults;
-(void)addMatch:(id)arg0 ;
-(void)addMatches:(id)arg0 ;
-(void)dealloc;


@end


#endif