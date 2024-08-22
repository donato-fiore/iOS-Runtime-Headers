// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFREPBALERTBUTTON_H
#define WFREPBALERTBUTTON_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface WFREPBAlertButton : PBCodable <NSCopying>



@property (nonatomic) BOOL preferred; // ivar: _preferred
@property (nonatomic) int style; // ivar: _style
@property (retain, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)styleAsString:(int)arg0 ;
-(int)StringAsStyle:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif