// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWDHOMEKITMULTIUSERSETTINGS_H
#define AWDHOMEKITMULTIUSERSETTINGS_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface AWDHomeKitMultiUserSettings : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIsOwner;
@property (retain, nonatomic) NSMutableArray *homeKitMultiUserSettingsValuesByKeyPaths; // ivar: _homeKitMultiUserSettingsValuesByKeyPaths
@property (nonatomic) BOOL isOwner; // ivar: _isOwner


+(Class)homeKitMultiUserSettingsValuesByKeyPathType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)homeKitMultiUserSettingsValuesByKeyPathAtIndex:(NSUInteger)arg0 ;
-(void)addHomeKitMultiUserSettingsValuesByKeyPath:(id)arg0 ;
-(void)clearHomeKitMultiUserSettingsValuesByKeyPaths;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif