// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFPBOPENCALCULATIONCOMMAND_H
#define _SFPBOPENCALCULATIONCOMMAND_H

@class PBCodable, NSString, NSData;
@protocol _SFPBOpenCalculationCommand, NSSecureCoding;



@interface _SFPBOpenCalculationCommand : PBCodable <_SFPBOpenCalculationCommand, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *input; // ivar: _input
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *output; // ivar: _output
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif