// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTMUTABLEWEBTRANSLATIONINFO_H
#define FTMUTABLEWEBTRANSLATIONINFO_H

@class NSArray, NSString;


#import "FTWebTranslationInfo.h"

@interface FTMutableWebTranslationInfo : FTWebTranslationInfo

@property (copy, nonatomic) NSArray *spans;
@property (copy, nonatomic) NSString *text;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif