// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWDHOMEKITMULTIUSERSETTINGSVALUEBYKEYPATH_H
#define AWDHOMEKITMULTIUSERSETTINGSVALUEBYKEYPATH_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface AWDHomeKitMultiUserSettingsValueByKeyPath : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasHomeKitMultiUserSettingsValueData;
@property (nonatomic) BOOL hasHomeKitMultiUserSettingsValueInteger;
@property (readonly, nonatomic) BOOL hasHomeKitMultiUserSettingsValueString;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) NSData *homeKitMultiUserSettingsValueData; // ivar: _homeKitMultiUserSettingsValueData
@property (nonatomic) NSInteger homeKitMultiUserSettingsValueInteger; // ivar: _homeKitMultiUserSettingsValueInteger
@property (retain, nonatomic) NSString *homeKitMultiUserSettingsValueString; // ivar: _homeKitMultiUserSettingsValueString
@property (nonatomic) int type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif