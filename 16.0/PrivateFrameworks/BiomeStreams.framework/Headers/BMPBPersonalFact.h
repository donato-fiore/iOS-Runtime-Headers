// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMPBPERSONALFACT_H
#define BMPBPERSONALFACT_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface BMPBPersonalFact : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasObjectAlias;
@property (readonly, nonatomic) BOOL hasObjectId;
@property (readonly, nonatomic) BOOL hasPredicateId;
@property (readonly, nonatomic) BOOL hasSubjectAlias;
@property (readonly, nonatomic) BOOL hasSubjectId;
@property (retain, nonatomic) NSString *objectAlias; // ivar: _objectAlias
@property (retain, nonatomic) NSString *objectId; // ivar: _objectId
@property (retain, nonatomic) NSString *predicateId; // ivar: _predicateId
@property (retain, nonatomic) NSString *subjectAlias; // ivar: _subjectAlias
@property (retain, nonatomic) NSString *subjectId; // ivar: _subjectId
@property (retain, nonatomic) NSMutableArray *subjectIsas; // ivar: _subjectIsas


+(Class)subjectIsaType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)subjectIsaAtIndex:(NSUInteger)arg0 ;
-(void)addSubjectIsa:(id)arg0 ;
-(void)clearSubjectIsas;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif