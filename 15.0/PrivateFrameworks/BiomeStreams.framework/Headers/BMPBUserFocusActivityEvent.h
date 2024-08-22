// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMPBUSERFOCUSACTIVITYEVENT_H
#define BMPBUSERFOCUSACTIVITYEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface BMPBUserFocusActivityEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *clientID; // ivar: _clientID
@property (readonly, nonatomic) BOOL hasClientID;
@property (nonatomic) BOOL hasIsStart;
@property (readonly, nonatomic) BOOL hasMode;
@property (nonatomic) BOOL isStart; // ivar: _isStart
@property (retain, nonatomic) NSString *mode; // ivar: _mode


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