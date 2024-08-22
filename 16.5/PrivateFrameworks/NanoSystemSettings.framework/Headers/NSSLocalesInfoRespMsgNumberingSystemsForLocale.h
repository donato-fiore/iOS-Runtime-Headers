// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSLOCALESINFORESPMSGNUMBERINGSYSTEMSFORLOCALE_H
#define NSSLOCALESINFORESPMSGNUMBERINGSYSTEMSFORLOCALE_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface NSSLocalesInfoRespMsgNumberingSystemsForLocale : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *localeIdentifier; // ivar: _localeIdentifier
@property (retain, nonatomic) NSMutableArray *numberingSystems; // ivar: _numberingSystems


+(Class)numberingSystemType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)numberingSystemAtIndex:(NSUInteger)arg0 ;
-(void)addNumberingSystem:(id)arg0 ;
-(void)clearNumberingSystems;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif