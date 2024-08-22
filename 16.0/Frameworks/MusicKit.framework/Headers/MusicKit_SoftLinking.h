// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUSICKIT_SOFTLINKING_H
#define MUSICKIT_SOFTLINKING_H


#import <Foundation/Foundation.h>


@interface MusicKit_SoftLinking : NSObject



+(NSInteger)_libraryPersistentIDForStringValue:(id)arg0 ;
+(NSInteger)audioTraitsForRawValue:(NSInteger)arg0 ;
+(NSInteger)rawValueForAudioTraits:(NSInteger)arg0 ;
+(id)artworkCatalogWithDataSourceShortDescription:(id)arg0 dataSourceIdentifier:(id)arg1 tokenParameters:(id)arg2 ;
+(id)emptyIdentifierSet;
+(id)identifierSetFromLegacyModelObject:(id)arg0 ;
+(id)identifierSetWithCatalogID:(id)arg0 libraryID:(id)arg1 cloudID:(id)arg2 purchasedAdamID:(id)arg3 deviceLocalID:(id)arg4 modelObjectType:(NSInteger)arg5 ;
+(id)identifierSetWithIdentifier:(id)arg0 modelObjectType:(NSInteger)arg1 specificLibraryDatabaseID:(id)arg2 ;
+(void)_ensureConsistencyOfUnderlyingOptionSetsForAudioTraits;


@end


#endif