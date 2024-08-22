// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSFLAGTRIAGEACTION_H
#define MSFLAGTRIAGEACTION_H

@class NSNumber;


#import "MSFlagChangeTriageAction.h"

@interface MSFlagTriageAction : MSFlagChangeTriageAction

@property (nonatomic) NSUInteger cachedFlagState; // ivar: _cachedFlagState
@property (retain, nonatomic) NSNumber *flagColor; // ivar: _flagColor


-(BOOL)_isFlagged;
-(BOOL)flagState;
-(void)_toggleCachedFlagState;
-(void)_toggleFlagWithBuilder:(id)arg0 ;


@end


#endif