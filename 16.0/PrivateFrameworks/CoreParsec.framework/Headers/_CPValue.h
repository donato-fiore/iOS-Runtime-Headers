// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CPVALUE_H
#define _CPVALUE_H

@class PBCodable, NSData, NSString;
@protocol _CPValue, NSSecureCoding;


#import "_CPListValue.h"
#import "_CPStruct.h"

@interface _CPValue : PBCodable <_CPValue, NSSecureCoding>



@property (nonatomic) BOOL bool_value; // ivar: _bool_value
@property (copy, nonatomic) NSData *bytes_value; // ivar: _bytes_value
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) _CPListValue *list_value; // ivar: _list_value
@property (nonatomic) int null_value; // ivar: _null_value
@property (nonatomic) CGFloat number_value; // ivar: _number_value
@property (copy, nonatomic) NSString *string_value; // ivar: _string_value
@property (retain, nonatomic) _CPStruct *struct_value; // ivar: _struct_value
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger whichKind; // ivar: _whichKind


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(void)clearKind;
-(void)writeTo:(id)arg0 ;


@end


#endif