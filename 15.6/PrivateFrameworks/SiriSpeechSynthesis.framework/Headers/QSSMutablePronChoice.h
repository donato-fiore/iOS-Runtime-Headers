// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSMUTABLEPRONCHOICE_H
#define QSSMUTABLEPRONCHOICE_H

@class NSString;


#import "QSSPronChoice.h"

@interface QSSMutablePronChoice : QSSPronChoice

@property (nonatomic) float log_weight;
@property (copy, nonatomic) NSString *pron_sequence;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif