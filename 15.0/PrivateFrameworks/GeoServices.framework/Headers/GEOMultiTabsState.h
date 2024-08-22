// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOMULTITABSSTATE_H
#define GEOMULTITABSSTATE_H

@class PBCodable;
@protocol NSCopying;



@interface GEOMultiTabsState : PBCodable <NSCopying>

 {
    unsigned int _currentTabIndex;
    unsigned int _numberOfTabsOpen;
    ? _flags;
}


@property (nonatomic) unsigned int currentTabIndex;
@property (nonatomic) BOOL hasCurrentTabIndex;
@property (nonatomic) BOOL hasNumberOfTabsOpen;
@property (nonatomic) unsigned int numberOfTabsOpen;


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