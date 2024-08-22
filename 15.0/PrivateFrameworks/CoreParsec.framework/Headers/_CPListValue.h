// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CPLISTVALUE_H
#define _CPLISTVALUE_H

@class PBCodable, NSString, NSData, NSArray;
@protocol _CPListValue, NSSecureCoding;



@interface _CPListValue : PBCodable <_CPListValue, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *values; // ivar: _values


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)valuesAtIndex:(NSUInteger)arg0 ;
-(void)addValues:(id)arg0 ;
-(void)clearValues;
-(void)writeTo:(id)arg0 ;


@end


#endif