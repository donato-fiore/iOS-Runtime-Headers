// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBTOPSTORIESSTYLECONFIG_H
#define NTPBTOPSTORIESSTYLECONFIG_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBTopStoriesStyleConfig : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) NSString *foregroundColor; // ivar: _foregroundColor
@property (readonly, nonatomic) BOOL hasBackgroundColor;
@property (readonly, nonatomic) BOOL hasForegroundColor;
@property (readonly, nonatomic) BOOL hasLabel;
@property (readonly, nonatomic) BOOL hasType;
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) NSString *type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif