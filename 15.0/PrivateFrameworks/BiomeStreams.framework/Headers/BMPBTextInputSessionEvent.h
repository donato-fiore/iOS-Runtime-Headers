// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMPBTEXTINPUTSESSIONEVENT_H
#define BMPBTEXTINPUTSESSIONEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface BMPBTextInputSessionEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) BOOL hasBundleID;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasSessionType;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int sessionType; // ivar: _sessionType
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)sessionTypeAsString:(int)arg0 ;
-(int)StringAsSessionType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif