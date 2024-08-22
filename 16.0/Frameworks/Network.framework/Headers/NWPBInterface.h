// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWPBINTERFACE_H
#define NWPBINTERFACE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NWPBInterface : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int delegateIndex; // ivar: _delegateIndex
@property (nonatomic) BOOL expensive; // ivar: _expensive
@property (nonatomic) unsigned int generation; // ivar: _generation
@property (nonatomic) BOOL hasDelegateIndex;
@property (nonatomic) BOOL hasExpensive;
@property (nonatomic) BOOL hasGeneration;
@property (nonatomic) BOOL hasIndex;
@property (nonatomic) BOOL hasMtu;
@property (readonly, nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasSubtype;
@property (nonatomic) BOOL hasType;
@property (nonatomic) unsigned int index; // ivar: _index
@property (nonatomic) unsigned int mtu; // ivar: _mtu
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) int subtype; // ivar: _subtype
@property (nonatomic) int type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)subtypeAsString:(int)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsSubtype:(id)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif