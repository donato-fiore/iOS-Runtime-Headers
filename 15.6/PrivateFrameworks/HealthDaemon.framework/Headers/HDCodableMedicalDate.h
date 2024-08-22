// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCODABLEMEDICALDATE_H
#define HDCODABLEMEDICALDATE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface HDCodableMedicalDate : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger form; // ivar: _form
@property (nonatomic) BOOL hasForm;
@property (readonly, nonatomic) BOOL hasOriginalTimeZoneString;
@property (nonatomic) BOOL hasUnderlyingDate;
@property (retain, nonatomic) NSString *originalTimeZoneString; // ivar: _originalTimeZoneString
@property (nonatomic) CGFloat underlyingDate; // ivar: _underlyingDate


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