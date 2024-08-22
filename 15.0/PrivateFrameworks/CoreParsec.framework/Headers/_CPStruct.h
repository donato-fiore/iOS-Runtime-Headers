// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CPSTRUCT_H
#define _CPSTRUCT_H

@class PBCodable, NSString, NSDictionary, NSData;
@protocol _CPStruct, NSSecureCoding;



@interface _CPStruct : PBCodable <_CPStruct, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *intKeyFields; // ivar: _intKeyFields
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSDictionary *stringKeyFields; // ivar: _stringKeyFields
@property (readonly) Class superclass;


-(BOOL)getIntKeyFields:(*id)arg0 forKey:(int)arg1 ;
-(BOOL)getStringKeyFields:(*id)arg0 forKey:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif