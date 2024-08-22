// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ABCPBSIGREQUEST_H
#define ABCPBSIGREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;



@interface ABCPbSigRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *build; // ivar: _build
@property (retain, nonatomic) NSString *buildVariant; // ivar: _buildVariant
@property (retain, nonatomic) NSString *caseGroupIdentifier; // ivar: _caseGroupIdentifier
@property (retain, nonatomic) NSString *caseIdentifier; // ivar: _caseIdentifier
@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (readonly, nonatomic) BOOL hasBuild;
@property (readonly, nonatomic) BOOL hasBuildVariant;
@property (readonly, nonatomic) BOOL hasCaseGroupIdentifier;
@property (readonly, nonatomic) BOOL hasCaseIdentifier;
@property (readonly, nonatomic) BOOL hasDomain;
@property (nonatomic) BOOL hasLogSizeTotal;
@property (readonly, nonatomic) BOOL hasProcess;
@property (readonly, nonatomic) BOOL hasSubtype;
@property (readonly, nonatomic) BOOL hasSubtypeContext;
@property (readonly, nonatomic) BOOL hasType;
@property (nonatomic) unsigned int logSizeTotal; // ivar: _logSizeTotal
@property (retain, nonatomic) NSString *process; // ivar: _process
@property (retain, nonatomic) NSString *subtype; // ivar: _subtype
@property (retain, nonatomic) NSString *subtypeContext; // ivar: _subtypeContext
@property (retain, nonatomic) NSString *type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif