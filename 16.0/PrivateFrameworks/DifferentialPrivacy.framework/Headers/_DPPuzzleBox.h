// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DPPUZZLEBOX_H
#define _DPPUZZLEBOX_H


#import <Foundation/Foundation.h>


@interface _DPPuzzleBox : NSObject

@property (readonly, nonatomic) NSUInteger k; // ivar: _k


+(id)puzzleBoxWithDimensionality:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithDimensionality:(NSUInteger)arg0 ;
-(id)puzzlePieceFor:(id)arg0 ;


@end


#endif