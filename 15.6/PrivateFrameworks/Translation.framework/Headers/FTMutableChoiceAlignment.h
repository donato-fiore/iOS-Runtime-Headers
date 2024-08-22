// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTMUTABLECHOICEALIGNMENT_H
#define FTMUTABLECHOICEALIGNMENT_H

@class NSArray;


#import "FTChoiceAlignment.h"

@interface FTMutableChoiceAlignment : FTChoiceAlignment

@property (copy, nonatomic) NSArray *post_itn_choice_indices;
@property (copy, nonatomic) NSArray *pre_itn_token_to_post_itn_char_alignments;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif