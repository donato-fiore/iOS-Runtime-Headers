// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDHOMEKITCAMERAUSERSETTINGS_H
#define AWDHOMEKITCAMERAUSERSETTINGS_H

@class PBCodable;
@protocol NSCopying;



@interface AWDHomeKitCameraUserSettings : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIsImportingFromPhotoLibraryEnabled;
@property (nonatomic) BOOL hasIsOwner;
@property (nonatomic) BOOL hasIsSharingFaceClassificationsEnabled;
@property (nonatomic) BOOL isImportingFromPhotoLibraryEnabled; // ivar: _isImportingFromPhotoLibraryEnabled
@property (nonatomic) BOOL isOwner; // ivar: _isOwner
@property (nonatomic) BOOL isSharingFaceClassificationsEnabled; // ivar: _isSharingFaceClassificationsEnabled


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