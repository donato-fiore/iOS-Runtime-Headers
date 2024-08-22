// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXLABELEDVALUE_H
#define PXLABELEDVALUE_H

@class NSString;
@protocol NSCopying, PXLabeledValueType;

#import <Foundation/Foundation.h>


@interface PXLabeledValue : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *localizedLabel; // ivar: _localizedLabel
@property (readonly, nonatomic, getter=isSeparator) BOOL separator; // ivar: _separator
@property (readonly, nonatomic) NSObject<PXLabeledValueType> *value; // ivar: _value


+(id)separatorLabeledValue;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLabeledValue:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initSeparator;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithValue:(id)arg0 localizedLabel:(id)arg1 ;


@end


#endif