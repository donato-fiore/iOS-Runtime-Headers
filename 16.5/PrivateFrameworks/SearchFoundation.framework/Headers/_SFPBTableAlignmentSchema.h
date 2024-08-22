// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFPBTABLEALIGNMENTSCHEMA_H
#define _SFPBTABLEALIGNMENTSCHEMA_H

@class PBCodable, NSString, NSData, NSArray;
@protocol _SFPBTableAlignmentSchema, NSSecureCoding;


#import "_SFPBStringDictionary.h"

@interface _SFPBTableAlignmentSchema : PBCodable <_SFPBTableAlignmentSchema, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) _SFPBStringDictionary *metadata; // ivar: _metadata
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *tableColumnAlignments; // ivar: _tableColumnAlignments


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)tableColumnAlignmentCount;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)tableColumnAlignmentAtIndex:(NSUInteger)arg0 ;
-(void)addTableColumnAlignment:(id)arg0 ;
-(void)clearTableColumnAlignment;
-(void)setTableColumnAlignment:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif