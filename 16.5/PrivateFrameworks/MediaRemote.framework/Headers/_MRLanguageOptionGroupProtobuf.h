// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MRLANGUAGEOPTIONGROUPPROTOBUF_H
#define _MRLANGUAGEOPTIONGROUPPROTOBUF_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "_MRLanguageOptionProtobuf.h"

@interface _MRLanguageOptionGroupProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL allowEmptySelection; // ivar: _allowEmptySelection
@property (retain, nonatomic) _MRLanguageOptionProtobuf *defaultLanguageOption; // ivar: _defaultLanguageOption
@property (nonatomic) BOOL hasAllowEmptySelection;
@property (readonly, nonatomic) BOOL hasDefaultLanguageOption;
@property (retain, nonatomic) NSMutableArray *languageOptions; // ivar: _languageOptions


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)languageOptionsAtIndex:(NSUInteger)arg0 ;
-(void)addLanguageOptions:(id)arg0 ;
-(void)clearLanguageOptions;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif