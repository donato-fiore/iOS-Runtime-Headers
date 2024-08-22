// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBTODAYSECTIONCONFIGFONT_H
#define NTPBTODAYSECTIONCONFIGFONT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBTodaySectionConfigFont : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasUrlString;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *urlString; // ivar: _urlString


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif