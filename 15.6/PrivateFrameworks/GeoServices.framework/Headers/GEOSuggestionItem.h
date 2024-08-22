// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOSUGGESTIONITEM_H
#define GEOSUGGESTIONITEM_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface GEOSuggestionItem : PBCodable <NSCopying>

 {
    NSString *_suggestionString;
    int _tappingCount;
    BOOL _eventuallyVisible;
    BOOL _initiallyVisible;
    ? _flags;
}


@property (nonatomic) BOOL eventuallyVisible;
@property (nonatomic) BOOL hasEventuallyVisible;
@property (nonatomic) BOOL hasInitiallyVisible;
@property (readonly, nonatomic) BOOL hasSuggestionString;
@property (nonatomic) BOOL hasTappingCount;
@property (nonatomic) BOOL initiallyVisible;
@property (retain, nonatomic) NSString *suggestionString;
@property (nonatomic) int tappingCount;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif