// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDPBINTERACTIONEVENTHEADER_H
#define EDPBINTERACTIONEVENTHEADER_H

@class PBCodable, NSString;
@protocol EDPETMessageFrameTypeIntrospectable, NSCopying;



@interface EDPBInteractionEventHeader : PBCodable <EDPETMessageFrameTypeIntrospectable, NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL categoryRootInstalled; // ivar: _categoryRootInstalled
@property (nonatomic) NSInteger deviceId; // ivar: _deviceId
@property (nonatomic) BOOL hasCategoryRootInstalled;
@property (nonatomic) BOOL hasDeviceId;
@property (readonly, nonatomic) BOOL hasLocale;
@property (nonatomic) BOOL hasTimezoneOffset;
@property (nonatomic) BOOL hasUserId;
@property (nonatomic) BOOL hasUserSegment;
@property (nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *locale; // ivar: _locale
@property (nonatomic) int timezoneOffset; // ivar: _timezoneOffset
@property (nonatomic) NSInteger userId; // ivar: _userId
@property (nonatomic) unsigned int userSegment; // ivar: _userSegment
@property (nonatomic) unsigned int version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)messageFrameType;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif