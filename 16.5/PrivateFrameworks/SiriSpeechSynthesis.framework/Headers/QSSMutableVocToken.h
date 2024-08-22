// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSMUTABLEVOCTOKEN_H
#define QSSMUTABLEVOCTOKEN_H

@class NSData, NSString;


#import "QSSVocToken.h"

@interface QSSMutableVocToken : QSSVocToken

@property (copy, nonatomic) NSData *blob;
@property (copy, nonatomic) NSString *orthography;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)blob:(id)arg0 ;


@end


#endif