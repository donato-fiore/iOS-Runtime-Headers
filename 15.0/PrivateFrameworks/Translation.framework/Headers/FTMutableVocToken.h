// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTMUTABLEVOCTOKEN_H
#define FTMUTABLEVOCTOKEN_H

@class NSData, NSString;


#import "FTVocToken.h"

@interface FTMutableVocToken : FTVocToken

@property (copy, nonatomic) NSData *blob;
@property (copy, nonatomic) NSString *orthography;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)blob:(id)arg0 ;


@end


#endif