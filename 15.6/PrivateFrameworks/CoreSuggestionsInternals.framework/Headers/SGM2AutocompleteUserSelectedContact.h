// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGM2AUTOCOMPLETEUSERSELECTEDCONTACT_H
#define SGM2AUTOCOMPLETEUSERSELECTEDCONTACT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface SGM2AutocompleteUserSelectedContact : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int app; // ivar: _app
@property (nonatomic) BOOL hasApp;
@property (readonly, nonatomic) BOOL hasKey;
@property (nonatomic) BOOL hasWasKnownContact;
@property (nonatomic) BOOL hasWasSuggestedContact;
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) BOOL wasKnownContact; // ivar: _wasKnownContact
@property (nonatomic) BOOL wasSuggestedContact; // ivar: _wasSuggestedContact


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)appAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsApp:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif