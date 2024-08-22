// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBDISCOVERMOREVIDEOSINFO_H
#define NTPBDISCOVERMOREVIDEOSINFO_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBDiscoverMoreVideosInfo : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *actionURLString; // ivar: _actionURLString
@property (readonly, nonatomic) BOOL hasActionURLString;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *title; // ivar: _title


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