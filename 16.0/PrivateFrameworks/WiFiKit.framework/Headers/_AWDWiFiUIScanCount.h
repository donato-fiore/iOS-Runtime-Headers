// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _AWDWIFIUISCANCOUNT_H
#define _AWDWIFIUISCANCOUNT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface _AWDWiFiUIScanCount : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasMax;
@property (readonly, nonatomic) BOOL hasSection;
@property (nonatomic) unsigned int max; // ivar: _max
@property (retain, nonatomic) NSString *section; // ivar: _section


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