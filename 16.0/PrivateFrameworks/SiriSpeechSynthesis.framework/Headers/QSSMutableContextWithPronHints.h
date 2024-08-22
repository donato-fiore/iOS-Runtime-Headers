// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSMUTABLECONTEXTWITHPRONHINTS_H
#define QSSMUTABLECONTEXTWITHPRONHINTS_H

@class NSString, NSArray;


#import "QSSContextWithPronHints.h"

@interface QSSMutableContextWithPronHints : QSSContextWithPronHints

@property (copy, nonatomic) NSString *contextual_text;
@property (copy, nonatomic) NSArray *pron_hints;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif