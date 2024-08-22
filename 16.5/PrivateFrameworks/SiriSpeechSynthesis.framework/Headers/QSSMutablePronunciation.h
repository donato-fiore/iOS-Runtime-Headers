// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSMUTABLEPRONUNCIATION_H
#define QSSMUTABLEPRONUNCIATION_H

@class NSString;


#import "QSSPronunciation.h"

@interface QSSMutablePronunciation : QSSPronunciation

@property (copy, nonatomic) NSString *phonemes;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif