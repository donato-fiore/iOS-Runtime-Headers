// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEORPFEEDBACKLAYOUTCONFIGRESULT_H
#define GEORPFEEDBACKLAYOUTCONFIGRESULT_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface GEORPFeedbackLayoutConfigResult : PBCodable <NSCopying>

 {
    NSMutableArray *_forms;
}


@property (retain, nonatomic) NSMutableArray *forms;


+(BOOL)isValid:(id)arg0 ;
+(Class)formType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)formAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)addForm:(id)arg0 ;
-(void)clearForms;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif