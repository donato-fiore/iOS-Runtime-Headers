// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBVIEWINFO_H
#define NTPBVIEWINFO_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBViewInfo : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasViewId;
@property (nonatomic) BOOL hasViewType;
@property (retain, nonatomic) NSString *viewId; // ivar: _viewId
@property (nonatomic) int viewType; // ivar: _viewType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)viewTypeAsString:(int)arg0 ;
-(int)StringAsViewType:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif