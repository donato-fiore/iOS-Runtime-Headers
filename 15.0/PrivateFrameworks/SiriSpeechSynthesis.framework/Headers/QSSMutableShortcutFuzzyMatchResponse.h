// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSMUTABLESHORTCUTFUZZYMATCHRESPONSE_H
#define QSSMUTABLESHORTCUTFUZZYMATCHRESPONSE_H

@class NSArray, NSString;


#import "QSSShortcutFuzzyMatchResponse.h"

@interface QSSMutableShortcutFuzzyMatchResponse : QSSShortcutFuzzyMatchResponse

@property (nonatomic) int return_code;
@property (copy, nonatomic) NSArray *shortcut_score_pairs;
@property (copy, nonatomic) NSString *utterance;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif