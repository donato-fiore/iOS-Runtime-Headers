// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKBOOLEANFORMAT_H
#define TSKBOOLEANFORMAT_H

@class NSString;
@protocol NSCopying;


#import "TSKFormat.h"

@interface TSKBooleanFormat : TSKFormat <NSCopying>



@property (readonly, nonatomic) NSString *falseString; // ivar: _falseString
@property (readonly, nonatomic) NSString *trueString; // ivar: _trueString


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)asBooleanFormat;
-(id)initWithTrueString:(id)arg0 falseString:(id)arg1 ;
-(id)stringFromBool:(BOOL)arg0 locale:(id)arg1 ;


@end


#endif