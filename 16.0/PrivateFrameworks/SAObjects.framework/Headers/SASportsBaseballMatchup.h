// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASPORTSBASEBALLMATCHUP_H
#define SASPORTSBASEBALLMATCHUP_H

@class NSNumber, NSString;


#import "SASportsMatchup.h"

@interface SASportsBaseballMatchup : SASportsMatchup

@property (copy, nonatomic) NSNumber *awayErrors;
@property (copy, nonatomic) NSNumber *awayHits;
@property (copy, nonatomic) NSNumber *balls;
@property (copy, nonatomic) NSNumber *homeErrors;
@property (copy, nonatomic) NSNumber *homeHits;
@property (copy, nonatomic) NSString *inningStatus;
@property (copy, nonatomic) NSNumber *onFirst;
@property (copy, nonatomic) NSNumber *onSecond;
@property (copy, nonatomic) NSNumber *onThird;
@property (copy, nonatomic) NSNumber *outs;
@property (copy, nonatomic) NSNumber *strikes;


+(id)baseballMatchup;
+(id)baseballMatchupWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif