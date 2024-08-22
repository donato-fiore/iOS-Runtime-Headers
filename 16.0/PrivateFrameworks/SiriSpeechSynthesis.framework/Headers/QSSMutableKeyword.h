// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSMUTABLEKEYWORD_H
#define QSSMUTABLEKEYWORD_H

@class NSString;


#import "QSSKeyword.h"

@interface QSSMutableKeyword : QSSKeyword

@property (copy, nonatomic) NSString *keyword_orthography;
@property (nonatomic) CGFloat posterior;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif