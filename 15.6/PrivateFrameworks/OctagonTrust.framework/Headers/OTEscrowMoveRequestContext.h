// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OTESCROWMOVEREQUESTCONTEXT_H
#define OTESCROWMOVEREQUESTCONTEXT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface OTEscrowMoveRequestContext : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *currentFederation; // ivar: _currentFederation
@property (retain, nonatomic) NSString *escrowRecordLabel; // ivar: _escrowRecordLabel
@property (readonly, nonatomic) BOOL hasCurrentFederation;
@property (readonly, nonatomic) BOOL hasEscrowRecordLabel;
@property (readonly, nonatomic) BOOL hasIntendedFederation;
@property (retain, nonatomic) NSString *intendedFederation; // ivar: _intendedFederation


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