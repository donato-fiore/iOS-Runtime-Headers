// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDHOMEKITCAMERASTREAMRECONFIGURE_H
#define AWDHOMEKITCAMERASTREAMRECONFIGURE_H

@class PBCodable;
@protocol NSCopying;



@interface AWDHomeKitCameraStreamReconfigure : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasReconfigurationTimestamp;
@property (nonatomic) BOOL hasResolution;
@property (nonatomic) unsigned int reconfigurationTimestamp; // ivar: _reconfigurationTimestamp
@property (nonatomic) int resolution; // ivar: _resolution


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)resolutionAsString:(int)arg0 ;
-(int)StringAsResolution:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif