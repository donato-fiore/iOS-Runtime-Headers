// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSMUTABLECORRECTIONSALIGNMENT_H
#define QSSMUTABLECORRECTIONSALIGNMENT_H

@class NSString;


#import "QSSCorrectionsAlignment.h"

@interface QSSMutableCorrectionsAlignment : QSSCorrectionsAlignment

@property (copy, nonatomic) NSString *corrected_words;
@property (copy, nonatomic) NSString *original_words;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif