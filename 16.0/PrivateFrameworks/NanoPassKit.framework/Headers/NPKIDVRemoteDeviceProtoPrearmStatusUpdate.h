// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKIDVREMOTEDEVICEPROTOPREARMSTATUSUPDATE_H
#define NPKIDVREMOTEDEVICEPROTOPREARMSTATUSUPDATE_H

@class PBCodable;
@protocol NSCopying;



@interface NPKIDVRemoteDeviceProtoPrearmStatusUpdate : PBCodable <NSCopying>



@property (nonatomic) int prearmStatus; // ivar: _prearmStatus


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)prearmStatusAsString:(int)arg0 ;
-(int)StringAsPrearmStatus:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif