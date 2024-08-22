// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSLOCALESINFORESPMSG_H
#define NSSLOCALESINFORESPMSG_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface NSSLocalesInfoRespMsg : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *buildVersion; // ivar: _buildVersion
@property (retain, nonatomic) NSMutableArray *defaultCalendars; // ivar: _defaultCalendars
@property (readonly, nonatomic) BOOL hasBuildVersion;
@property (retain, nonatomic) NSMutableArray *localeIdentifiers; // ivar: _localeIdentifiers
@property (retain, nonatomic) NSMutableArray *numberingSystems; // ivar: _numberingSystems
@property (retain, nonatomic) NSMutableArray *supportedCalendars; // ivar: _supportedCalendars
@property (retain, nonatomic) NSMutableArray *systemLanguages; // ivar: _systemLanguages


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultCalendarsAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)localeIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)numberingSystemsAtIndex:(NSUInteger)arg0 ;
-(id)supportedCalendarsAtIndex:(NSUInteger)arg0 ;
-(id)systemLanguagesAtIndex:(NSUInteger)arg0 ;
-(void)addDefaultCalendars:(id)arg0 ;
-(void)addLocaleIdentifiers:(id)arg0 ;
-(void)addNumberingSystems:(id)arg0 ;
-(void)addSupportedCalendars:(id)arg0 ;
-(void)addSystemLanguages:(id)arg0 ;
-(void)clearDefaultCalendars;
-(void)clearLocaleIdentifiers;
-(void)clearNumberingSystems;
-(void)clearSupportedCalendars;
-(void)clearSystemLanguages;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif