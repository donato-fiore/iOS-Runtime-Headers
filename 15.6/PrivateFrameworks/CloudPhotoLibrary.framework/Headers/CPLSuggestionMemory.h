// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLSUGGESTIONMEMORY_H
#define CPLSUGGESTIONMEMORY_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface CPLSuggestionMemory : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *context; // ivar: _context
@property (nonatomic) unsigned int feature; // ivar: _feature
@property (readonly, nonatomic) BOOL hasContext;
@property (nonatomic) BOOL hasFeature;
@property (readonly, nonatomic) BOOL hasMemoryIdentifier;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) NSString *memoryIdentifier; // ivar: _memoryIdentifier
@property (nonatomic) unsigned int type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif