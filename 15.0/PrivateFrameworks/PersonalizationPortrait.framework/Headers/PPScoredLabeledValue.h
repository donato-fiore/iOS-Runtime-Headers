// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPSCOREDLABELEDVALUE_H
#define PPSCOREDLABELEDVALUE_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PPLabeledValue.h"

@interface PPScoredLabeledValue : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) unsigned char flags; // ivar: _flags
@property (readonly, nonatomic) PPLabeledValue *labeledValue; // ivar: _labeledValue
@property (readonly, nonatomic) CGFloat score; // ivar: _score


+(BOOL)supportsSecureCoding;
+(id)scoredLabeledValueWithLabeledValue:(id)arg0 score:(CGFloat)arg1 flags:(unsigned char)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToScoredLabeledValue:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSInteger)reverseCompare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLabeledValue:(id)arg0 score:(CGFloat)arg1 flags:(unsigned char)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif