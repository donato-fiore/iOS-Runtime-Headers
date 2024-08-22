// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTMUTABLEKEYWORD_H
#define FTMUTABLEKEYWORD_H

@class NSString;


#import "FTKeyword.h"

@interface FTMutableKeyword : FTKeyword

@property (copy, nonatomic) NSString *keyword_orthography;
@property (nonatomic) CGFloat posterior;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif