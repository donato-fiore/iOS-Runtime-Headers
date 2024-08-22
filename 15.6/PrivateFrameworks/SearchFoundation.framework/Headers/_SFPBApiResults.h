// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFPBAPIRESULTS_H
#define _SFPBAPIRESULTS_H

@class PBCodable, NSString, NSArray, NSData;
@protocol _SFPBApiResults, NSSecureCoding;



@interface _SFPBApiResults : PBCodable <_SFPBApiResults, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *flights; // ivar: _flights
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int resultType; // ivar: _resultType
@property (nonatomic) int status; // ivar: _status
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)flightsAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)addFlights:(id)arg0 ;
-(void)clearFlights;
-(void)writeTo:(id)arg0 ;


@end


#endif