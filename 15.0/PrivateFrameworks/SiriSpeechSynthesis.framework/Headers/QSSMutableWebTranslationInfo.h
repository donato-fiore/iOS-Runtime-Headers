// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSMUTABLEWEBTRANSLATIONINFO_H
#define QSSMUTABLEWEBTRANSLATIONINFO_H

@class NSArray, NSString;


#import "QSSWebTranslationInfo.h"

@interface QSSMutableWebTranslationInfo : QSSWebTranslationInfo

@property (copy, nonatomic) NSArray *spans;
@property (copy, nonatomic) NSString *text;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif