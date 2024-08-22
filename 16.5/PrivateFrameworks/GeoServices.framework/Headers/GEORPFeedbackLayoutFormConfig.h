// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEORPFEEDBACKLAYOUTFORMCONFIG_H
#define GEORPFEEDBACKLAYOUTFORMCONFIG_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface GEORPFeedbackLayoutFormConfig : PBCodable <NSCopying>

 {
    NSMutableArray *_layoutFields;
    int _formType;
    unsigned int _radius;
    unsigned int _ttl;
    BOOL _enabled;
    ? _flags;
}


@property (nonatomic) BOOL enabled;
@property (nonatomic) int formType;
@property (nonatomic) BOOL hasEnabled;
@property (nonatomic) BOOL hasFormType;
@property (nonatomic) BOOL hasRadius;
@property (nonatomic) BOOL hasTtl;
@property (retain, nonatomic) NSMutableArray *layoutFields;
@property (nonatomic) unsigned int radius;
@property (nonatomic) unsigned int ttl;


+(BOOL)isValid:(id)arg0 ;
+(Class)layoutFieldType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)formTypeAsString:(int)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)layoutFieldAtIndex:(NSUInteger)arg0 ;
-(int)StringAsFormType:(id)arg0 ;
-(void)addLayoutField:(id)arg0 ;
-(void)clearLayoutFields;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif