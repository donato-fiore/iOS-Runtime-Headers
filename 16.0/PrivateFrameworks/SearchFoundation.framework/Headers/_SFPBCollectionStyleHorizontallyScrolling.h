// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFPBCOLLECTIONSTYLEHORIZONTALLYSCROLLING_H
#define _SFPBCOLLECTIONSTYLEHORIZONTALLYSCROLLING_H

@class PBCodable, NSString, NSData;
@protocol _SFPBCollectionStyleHorizontallyScrolling, NSSecureCoding;



@interface _SFPBCollectionStyleHorizontallyScrolling : PBCodable <_SFPBCollectionStyleHorizontallyScrolling, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSUInteger numberOfRows; // ivar: _numberOfRows
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