// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NFMPROTOPLAYSOUNDANDFLASHLEDREQUEST_H
#define NFMPROTOPLAYSOUNDANDFLASHLEDREQUEST_H

@class PBRequest;
@protocol NSCopying;



@interface NFMProtoPlaySoundAndFlashLEDRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasTimeStamp;
@property (nonatomic) CGFloat timeStamp; // ivar: _timeStamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif