// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INFERENCESCHEMAINFERENCECONTACTRESOLVERCONFIG_H
#define INFERENCESCHEMAINFERENCECONTACTRESOLVERCONFIG_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface INFERENCESchemaINFERENCEContactResolverConfig : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int actionType; // ivar: _actionType
@property (copy, nonatomic) NSArray *appBundleIds; // ivar: _appBundleIds
@property (nonatomic) int contactSearchSuggestedType; // ivar: _contactSearchSuggestedType
@property (nonatomic) int domainsToSearchForHistory; // ivar: _domainsToSearchForHistory
@property (nonatomic) BOOL hasActionType;
@property (nonatomic) BOOL hasContactSearchSuggestedType;
@property (nonatomic) BOOL hasDomainsToSearchForHistory;
@property (nonatomic) BOOL hasIsSearchingFirstPartyContacts;
@property (nonatomic) BOOL isSearchingFirstPartyContacts; // ivar: _isSearchingFirstPartyContacts
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)appBundleIdsAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addAppBundleIds:(id)arg0 ;
-(void)clearAppBundleIds;
-(void)deleteActionType;
-(void)deleteAppBundleIds;
-(void)deleteContactSearchSuggestedType;
-(void)deleteDomainsToSearchForHistory;
-(void)deleteIsSearchingFirstPartyContacts;
-(void)writeTo:(id)arg0 ;


@end


#endif