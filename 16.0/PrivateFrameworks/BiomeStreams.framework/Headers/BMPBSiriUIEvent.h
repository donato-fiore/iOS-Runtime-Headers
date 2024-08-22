// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMPBSIRIUIEVENT_H
#define BMPBSIRIUIEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface BMPBSiriUIEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (retain, nonatomic) NSString *dismissalReason; // ivar: _dismissalReason
@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (readonly, nonatomic) BOOL hasDismissalReason;
@property (readonly, nonatomic) BOOL hasSessionID;
@property (nonatomic) BOOL hasStarting;
@property (readonly, nonatomic) BOOL hasUuid;
@property (readonly, nonatomic) BOOL hasViewMode;
@property (retain, nonatomic) NSString *sessionID; // ivar: _sessionID
@property (nonatomic) BOOL starting; // ivar: _starting
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid
@property (retain, nonatomic) NSString *viewMode; // ivar: _viewMode


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