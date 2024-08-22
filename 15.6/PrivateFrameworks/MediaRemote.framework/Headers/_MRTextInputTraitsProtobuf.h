// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MRTEXTINPUTTRAITSPROTOBUF_H
#define _MRTEXTINPUTTRAITSPROTOBUF_H

@class PBCodable;
@protocol NSCopying;



@interface _MRTextInputTraitsProtobuf : PBCodable <NSCopying>

 {
    ? _pINEntrySeparatorIndexes;
    NSUInteger _validTextRangeLength;
    NSUInteger _validTextRangeLocation;
    int _autocapitalizationType;
    int _keyboardType;
    int _returnKeyType;
    BOOL _autocorrection;
    BOOL _enablesReturnKeyAutomatically;
    BOOL _secureTextEntry;
    BOOL _spellchecking;
    ? _has;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)dealloc;
-(void)writeTo:(id)arg0 ;


@end


#endif