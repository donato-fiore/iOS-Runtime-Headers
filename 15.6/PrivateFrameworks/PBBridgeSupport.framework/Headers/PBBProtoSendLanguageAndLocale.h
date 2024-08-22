// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PBBPROTOSENDLANGUAGEANDLOCALE_H
#define PBBPROTOSENDLANGUAGEANDLOCALE_H

@class PBCodable, NSMutableArray, NSString, NSData;
@protocol NSCopying;



@interface PBBProtoSendLanguageAndLocale : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *appleLanguages; // ivar: _appleLanguages
@property (retain, nonatomic) NSString *appleLocale; // ivar: _appleLocale
@property (retain, nonatomic) NSData *archivedPreferences; // ivar: _archivedPreferences
@property (readonly, nonatomic) BOOL hasAppleLocale;
@property (readonly, nonatomic) BOOL hasArchivedPreferences;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)appleLanguagesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAppleLanguages:(id)arg0 ;
-(void)clearAppleLanguages;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif