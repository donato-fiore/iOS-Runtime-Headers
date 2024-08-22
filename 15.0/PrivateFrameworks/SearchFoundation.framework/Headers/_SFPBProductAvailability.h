// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFPBPRODUCTAVAILABILITY_H
#define _SFPBPRODUCTAVAILABILITY_H

@class PBCodable, NSString, NSData, NSArray;
@protocol _SFPBProductAvailability, NSSecureCoding;



@interface _SFPBProductAvailability : PBCodable <_SFPBProductAvailability, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *results; // ivar: _results
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)resultsAtIndex:(NSUInteger)arg0 ;
-(void)addResults:(id)arg0 ;
-(void)clearResults;
-(void)writeTo:(id)arg0 ;


@end


#endif