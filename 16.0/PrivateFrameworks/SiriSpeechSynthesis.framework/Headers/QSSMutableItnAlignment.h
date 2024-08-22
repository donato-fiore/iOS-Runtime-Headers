// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSMUTABLEITNALIGNMENT_H
#define QSSMUTABLEITNALIGNMENT_H



#import "QSSItnAlignment.h"

@interface QSSMutableItnAlignment : QSSItnAlignment

@property (nonatomic) int first_post_itn_char_pos;
@property (nonatomic) int first_pre_itn_token_index;
@property (nonatomic) int last_post_itn_char_pos;
@property (nonatomic) int last_pre_itn_token_index;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif