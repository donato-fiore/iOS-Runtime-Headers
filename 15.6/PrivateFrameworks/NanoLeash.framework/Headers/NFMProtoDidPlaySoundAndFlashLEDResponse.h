// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NFMPROTODIDPLAYSOUNDANDFLASHLEDRESPONSE_H
#define NFMPROTODIDPLAYSOUNDANDFLASHLEDRESPONSE_H

@class PBCodable;
@protocol NSCopying;



@interface NFMProtoDidPlaySoundAndFlashLEDResponse : PBCodable <NSCopying>



@property (nonatomic) BOOL didPlay; // ivar: _didPlay


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