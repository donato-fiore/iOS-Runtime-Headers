// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOREQUESTOPTIONS_H
#define GEOREQUESTOPTIONS_H

@class PBCodable, PBUnknownFields, NSMutableArray, NSArray;
@protocol GEOSurchargeOption, NSCopying, GEOSurchargeType;



@interface GEORequestOptions : PBCodable <GEOSurchargeOption, NSCopying>

 {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_requestOptions;
    int _optionUsed;
    ? _flags;
}


@property (readonly, nonatomic) NSObject<GEOSurchargeType> *selectedSurchargeType;
@property (readonly, nonatomic) NSUInteger selectedSurchargeTypeIndex;
@property (readonly, nonatomic) NSArray *surchargeTypes;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif