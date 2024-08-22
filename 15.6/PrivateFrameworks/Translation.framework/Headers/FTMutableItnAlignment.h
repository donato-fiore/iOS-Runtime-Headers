// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTMUTABLEITNALIGNMENT_H
#define FTMUTABLEITNALIGNMENT_H



#import "FTItnAlignment.h"

@interface FTMutableItnAlignment : FTItnAlignment

@property (nonatomic) int first_post_itn_char_pos;
@property (nonatomic) int first_pre_itn_token_index;
@property (nonatomic) int last_post_itn_char_pos;
@property (nonatomic) int last_pre_itn_token_index;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif