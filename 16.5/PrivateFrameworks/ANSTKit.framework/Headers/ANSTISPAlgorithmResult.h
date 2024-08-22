// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ANSTISPALGORITHMRESULT_H
#define ANSTISPALGORITHMRESULT_H



#import "ANSTResult.h"

@interface ANSTISPAlgorithmResult : ANSTResult

@property (readonly, nonatomic) float smudgeConfidence; // ivar: _smudgeConfidence


+(id)new;
-(id)_init;
-(id)init;
-(id)initWithSmudgeConfidence:(float)arg0 ;


@end


#endif