// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNCOMPOUNDPROPERTYQUERY_H
#define LNCOMPOUNDPROPERTYQUERY_H

@class NSArray;


#import "LNPropertyQuery.h"

@interface LNCompoundPropertyQuery : LNPropertyQuery

@property (readonly, copy, nonatomic) NSArray *comparisons; // ivar: _comparisons
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)andComparisons:(id)arg0 ;
+(id)orComparisons:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 comparisons:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif