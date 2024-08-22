// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ADSETTINGS_H
#define ADSETTINGS_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface ADSettings : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSMutableArray *parameters; // ivar: _parameters


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)parametersAtIndex:(NSUInteger)arg0 ;
-(void)addParameters:(id)arg0 ;
-(void)clearParameters;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif