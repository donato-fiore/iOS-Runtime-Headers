// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBSEARCHFORFILESINTENTRESPONSE_H
#define _INPBSEARCHFORFILESINTENTRESPONSE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBSearchForFilesIntentResponse, NSSecureCoding, NSCopying;


#import "_INPBInteger.h"
#import "_INPBString.h"

@interface _INPBSearchForFilesIntentResponse : PBCodable <_INPBSearchForFilesIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *entities; // ivar: _entities
@property (readonly, nonatomic) NSUInteger entitiesCount;
@property (readonly, nonatomic) BOOL hasNumResults;
@property (readonly, nonatomic) BOOL hasQuery;
@property (nonatomic) BOOL hasSuccess;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBInteger *numResults; // ivar: _numResults
@property (retain, nonatomic) _INPBString *query; // ivar: _query
@property (nonatomic) BOOL success; // ivar: _success
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)entitiesAtIndex:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)addEntities:(id)arg0 ;
-(void)clearEntities;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif