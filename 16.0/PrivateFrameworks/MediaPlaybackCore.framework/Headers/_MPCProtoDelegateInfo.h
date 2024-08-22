// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MPCPROTODELEGATEINFO_H
#define _MPCPROTODELEGATEINFO_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface _MPCProtoDelegateInfo : PBCodable <NSCopying>

 {
    NSUInteger _accountID;
    NSInteger _delegateInfoID;
    NSString *_deviceGUID;
    NSString *_deviceName;
    NSString *_requestUserAgent;
    int _systemReleaseType;
    NSString *_timeZoneName;
    NSString *_uuid;
    BOOL _privateListeningEnabled;
    ? _has;
}




+(id)currentDeviceDelegateInfo;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)_getPlaybackRequestEnvironmentWithBaseEnvironment:(id)arg0 completion:(id)arg1 ;
-(void)writeTo:(id)arg0 ;


@end


#endif