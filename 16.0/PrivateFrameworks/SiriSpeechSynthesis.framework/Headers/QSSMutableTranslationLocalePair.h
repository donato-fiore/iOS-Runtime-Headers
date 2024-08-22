// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSMUTABLETRANSLATIONLOCALEPAIR_H
#define QSSMUTABLETRANSLATIONLOCALEPAIR_H

@class NSString;


#import "QSSTranslationLocalePair.h"

@interface QSSMutableTranslationLocalePair : QSSTranslationLocalePair

@property (copy, nonatomic) NSString *source_locale;
@property (copy, nonatomic) NSString *target_locale;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif