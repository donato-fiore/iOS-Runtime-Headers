// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MRTEXTINPUTTRAITSPROTOBUF_H
#define _MRTEXTINPUTTRAITSPROTOBUF_H

@class PBCodable;
@protocol NSCopying;



@interface _MRTextInputTraitsProtobuf : PBCodable <NSCopying>

 {
    ? _pINEntrySeparatorIndexes;
    ? _has;
}


@property (nonatomic) int autocapitalizationType; // ivar: _autocapitalizationType
@property (nonatomic) BOOL autocorrection; // ivar: _autocorrection
@property (nonatomic) BOOL enablesReturnKeyAutomatically; // ivar: _enablesReturnKeyAutomatically
@property (nonatomic) BOOL hasAutocapitalizationType;
@property (nonatomic) BOOL hasAutocorrection;
@property (nonatomic) BOOL hasEnablesReturnKeyAutomatically;
@property (nonatomic) BOOL hasKeyboardType;
@property (nonatomic) BOOL hasReturnKeyType;
@property (nonatomic) BOOL hasSecureTextEntry;
@property (nonatomic) BOOL hasSpellchecking;
@property (nonatomic) BOOL hasValidTextRangeLength;
@property (nonatomic) BOOL hasValidTextRangeLocation;
@property (nonatomic) int keyboardType; // ivar: _keyboardType
@property (readonly, nonatomic) *NSUInteger pINEntrySeparatorIndexes;
@property (readonly, nonatomic) NSUInteger pINEntrySeparatorIndexesCount;
@property (nonatomic) int returnKeyType; // ivar: _returnKeyType
@property (nonatomic) BOOL secureTextEntry; // ivar: _secureTextEntry
@property (nonatomic) BOOL spellchecking; // ivar: _spellchecking
@property (nonatomic) NSUInteger validTextRangeLength; // ivar: _validTextRangeLength
@property (nonatomic) NSUInteger validTextRangeLocation; // ivar: _validTextRangeLocation


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)pINEntrySeparatorIndexesAtIndex:(NSUInteger)arg0 ;
-(id)autocapitalizationTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)keyboardTypeAsString:(int)arg0 ;
-(id)returnKeyTypeAsString:(int)arg0 ;
-(int)StringAsAutocapitalizationType:(id)arg0 ;
-(int)StringAsKeyboardType:(id)arg0 ;
-(int)StringAsReturnKeyType:(id)arg0 ;
-(void)addPINEntrySeparatorIndexes:(NSUInteger)arg0 ;
-(void)clearPINEntrySeparatorIndexes;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif