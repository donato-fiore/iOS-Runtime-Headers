// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFPBDATE_H
#define _SFPBDATE_H

@class PBCodable, NSString, NSData;
@protocol _SFPBDate, NSSecureCoding;



@interface _SFPBDate : PBCodable <_SFPBDate, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) CGFloat secondsSince1970; // ivar: _secondsSince1970
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)initWithNSDate:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif