// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSMUTABLEWORD_H
#define QSSMUTABLEWORD_H

@class NSString, NSData;


#import "QSSWord.h"

@interface QSSMutableWord : QSSWord

@property (nonatomic) int frequency;
@property (copy, nonatomic) NSString *orthography;
@property (copy, nonatomic) NSData *pronunciations;
@property (copy, nonatomic) NSString *tag;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)pronunciations:(id)arg0 ;


@end


#endif