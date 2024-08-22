// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSSLIDERANSWERFORMAT_H
#define CLSSLIDERANSWERFORMAT_H

@class NSString;
@protocol CLSRelationable;


#import "CLSAnswerFormat.h"

@interface CLSSliderAnswerFormat : CLSAnswerFormat <CLSRelationable>

 {
    NSInteger _maximum;
    NSInteger _minimum;
    NSString *_leadingValueLabel;
    NSString *_trailingValueLabel;
    NSString *_midValueLabel;
    NSInteger _type;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *leadingValueLabel;
@property (nonatomic) NSInteger maximum;
@property (copy, nonatomic) NSString *midValueLabel;
@property (nonatomic) NSInteger minimum;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *trailingValueLabel;
@property (readonly, nonatomic) NSInteger type;


+(BOOL)supportsSecureCoding;
+(id)relations;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValueEqual:(id)arg0 ;
-(BOOL)validateObject:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeWithObject:(id)arg0 ;


@end


#endif