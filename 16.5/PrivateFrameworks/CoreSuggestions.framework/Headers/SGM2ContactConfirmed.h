// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGM2CONTACTCONFIRMED_H
#define SGM2CONTACTCONFIRMED_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface SGM2ContactConfirmed : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int app; // ivar: _app
@property (nonatomic) int extracted; // ivar: _extracted
@property (nonatomic) unsigned int extractionModelVersion; // ivar: _extractionModelVersion
@property (nonatomic) BOOL firstNameAdj; // ivar: _firstNameAdj
@property (nonatomic) BOOL hasApp;
@property (nonatomic) BOOL hasExtracted;
@property (nonatomic) BOOL hasExtractionModelVersion;
@property (nonatomic) BOOL hasFirstNameAdj;
@property (nonatomic) BOOL hasIsUpdate;
@property (readonly, nonatomic) BOOL hasKey;
@property (nonatomic) BOOL hasLastNameAdj;
@property (nonatomic) BOOL hasMiddleNameAdj;
@property (nonatomic) BOOL hasSelfId;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL hasUiType;
@property (nonatomic) BOOL isUpdate; // ivar: _isUpdate
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) BOOL lastNameAdj; // ivar: _lastNameAdj
@property (nonatomic) BOOL middleNameAdj; // ivar: _middleNameAdj
@property (nonatomic) BOOL selfId; // ivar: _selfId
@property (nonatomic) int type; // ivar: _type
@property (nonatomic) int uiType; // ivar: _uiType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)appAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)extractedAsString:(int)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(id)uiTypeAsString:(int)arg0 ;
-(int)StringAsApp:(id)arg0 ;
-(int)StringAsExtracted:(id)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(int)StringAsUiType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif