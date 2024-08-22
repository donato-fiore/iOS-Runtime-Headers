// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIALIGNEDTYPING_H
#define TIALIGNEDTYPING_H

@class NSArray;


#import "TIAlignedTokens.h"
#import "TIContinuousPath.h"

@interface TIAlignedTyping : TIAlignedTokens

@property (copy, nonatomic) NSArray *documentStates; // ivar: _documentStates
@property (copy, nonatomic) NSArray *inserted; // ivar: _inserted
@property (retain, nonatomic) TIContinuousPath *path; // ivar: _path
@property (copy, nonatomic) NSArray *predicted; // ivar: _predicted
@property (copy, nonatomic) NSArray *touched; // ivar: _touched




@end


#endif