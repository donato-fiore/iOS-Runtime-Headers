// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBPERSONALIZATIONINSTANCEHISTORY_H
#define NTPBPERSONALIZATIONINSTANCEHISTORY_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBPersonalizationInstanceHistory : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasInstanceIdentifier;
@property (nonatomic) BOOL hasLastChangeNumber;
@property (retain, nonatomic) NSString *instanceIdentifier; // ivar: _instanceIdentifier
@property (nonatomic) NSUInteger lastChangeNumber; // ivar: _lastChangeNumber


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