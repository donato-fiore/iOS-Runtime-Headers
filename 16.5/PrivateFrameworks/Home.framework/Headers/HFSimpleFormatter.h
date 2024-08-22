// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFSIMPLEFORMATTER_H
#define HFSIMPLEFORMATTER_H

@class NSFormatter;
@protocol NSCopying;



@interface HFSimpleFormatter : NSFormatter <NSCopying>



@property (readonly, copy, nonatomic) id *attributedFormatterBlock; // ivar: _attributedFormatterBlock
@property (readonly, copy, nonatomic) id *formatterBlock; // ivar: _formatterBlock


-(id)attributedStringForObjectValue:(id)arg0 withDefaultAttributes:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAttributedFormatterBlock:(id)arg0 ;
-(id)initWithFormatterBlock:(id)arg0 ;
-(id)stringForObjectValue:(id)arg0 ;


@end


#endif