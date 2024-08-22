// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSSTATEREQUEST_H
#define MPSSTATEREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;



@interface MPSStateRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *backupDeviceID; // ivar: _backupDeviceID
@property (retain, nonatomic) NSString *backupDeviceUDID; // ivar: _backupDeviceUDID
@property (retain, nonatomic) NSString *backupDeviceUUID; // ivar: _backupDeviceUUID
@property (readonly, nonatomic) BOOL hasBackupDeviceID;
@property (readonly, nonatomic) BOOL hasBackupDeviceUDID;
@property (readonly, nonatomic) BOOL hasBackupDeviceUUID;
@property (readonly, nonatomic) BOOL hasICPLDeviceID;
@property (readonly, nonatomic) BOOL hasMPSDeviceID;
@property (nonatomic) BOOL hasOriginalLibrarySize;
@property (retain, nonatomic) NSString *iCPLDeviceID; // ivar: _iCPLDeviceID
@property (retain, nonatomic) NSString *mPSDeviceID; // ivar: _mPSDeviceID
@property (nonatomic) NSInteger originalLibrarySize; // ivar: _originalLibrarySize


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