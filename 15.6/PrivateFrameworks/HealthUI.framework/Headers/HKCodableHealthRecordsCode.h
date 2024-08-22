// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCODABLEHEALTHRECORDSCODE_H
#define HKCODABLEHEALTHRECORDSCODE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface HKCodableHealthRecordsCode : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *code; // ivar: _code
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) BOOL hasCode;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (readonly, nonatomic) BOOL hasSystem;
@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *system; // ivar: _system
@property (retain, nonatomic) NSString *version; // ivar: _version


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