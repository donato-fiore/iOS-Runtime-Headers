// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCODABLEPRESCRIPTIONTYPE_H
#define HKCODABLEPRESCRIPTIONTYPE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface HKCodablePrescriptionType : PBCodable <NSCopying>

 {
    APPLE_152 _has;
}


@property (nonatomic) BOOL contacts; // ivar: _contacts
@property (retain, nonatomic) NSString *glassesDescription; // ivar: _glassesDescription
@property (nonatomic) BOOL hasContacts;
@property (readonly, nonatomic) BOOL hasGlassesDescription;


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